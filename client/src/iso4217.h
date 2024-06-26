//-----------------------------------------------------------------------------
// Borrowed initially from
// https://github.com/L1L1/cardpeek/blob/master/dot_cardpeek_dir/scripts/lib/currency_codes.lua
//
// Copyright (C) Proxmark3 contributors. See AUTHORS.md for details.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// See LICENSE.txt for the text of the license.
//-----------------------------------------------------------------------------
#ifndef ISO4217_H__

#define ISO4217_H__
#include <stddef.h>

typedef struct iso4217_s {
    const char *code;
    const char *desc;
    int digits;
} iso4217_t;

const char *getCurrencyInfo(const char *cn_str);

// atr_t array is expected to be NULL terminated
const static iso4217_t Iso4217Table[] = {
    {"008", "Lek", 2},
    {"012", "Algerian Dinar", 2},
    {"032", "Argentine Peso", 2},
    {"036", "Australian Dollar", 2},
    {"044", "Bahamian Dollar", 2},
    {"048", "Bahraini Dinar", 3},
    {"050", "Taka", 2},
    {"051", "Armenian Dram", 2},
    {"052", "Barbados Dollar", 2},
    {"060", "Bermudian Dollar", 2},
    {"064", "Ngultrum", 2},
    {"068", "Boliviano", 2},
    {"072", "Pula", 2},
    {"084", "Belize Dollar", 2},
    {"090", "Solomon Islands Dollar", 2},
    {"096", "Brunei Dollar", 2},
    {"104", "Kyat", 2},
    {"108", "Burundi Franc", 0},
    {"116", "Riel", 2},
    {"124", "Canadian Dollar", 2},
    {"132", "Cabo Verde Escudo", 2},
    {"136", "Cayman Islands Dollar", 2},
    {"144", "Sri Lanka Rupee", 2},
    {"152", "Chilean Peso", 0},
    {"156", "Yuan Renminbi", 2},
    {"170", "Colombian Peso", 2},
    {"174", "Comoro Franc", 0},
    {"188", "Costa Rican Colon", 2},
    {"191", "Croatian Kuna", 2},
    {"192", "Cuban Peso", 2},
    {"203", "Czech Koruna", 2},
    {"208", "Danish Krone", 2},
    {"214", "Dominican Peso", 2},
    {"222", "El Salvador Colon", 2},
    {"230", "Ethiopian Birr", 2},
    {"232", "Nakfa", 2},
    {"233", "Kroon", 2},
    {"238", "Falkland Islands Pound", 2},
    {"242", "Fiji Dollar", 2},
    {"262", "Djibouti Franc", 0},
    {"270", "Dalasi", 2},
    {"292", "Gibraltar Pound", 2},
    {"320", "Quetzal", 2},
    {"324", "Guinea Franc", 0},
    {"328", "Guyana Dollar", 2},
    {"332", "Gourde", 2},
    {"340", "Lempira", 2},
    {"344", "Hong Kong Dollar", 2},
    {"348", "Forint", 2},
    {"352", "Iceland Krona", 0},
    {"356", "Indian Rupee", 2},
    {"360", "Rupiah", 2},
    {"364", "Iranian Rial", 2},
    {"368", "Iraqi Dinar", 3},
    {"376", "New Israeli Sheqel", 2},
    {"388", "Jamaican Dollar", 2},
    {"392", "Yen", 0},
    {"398", "Tenge", 2},
    {"400", "Jordanian Dinar", 3},
    {"404", "Kenyan Shilling", 2},
    {"408", "North Korean Won", 2},
    {"410", "Won", 0},
    {"414", "Kuwaiti Dinar", 3},
    {"417", "Som", 2},
    {"418", "Kip", 2},
    {"422", "Lebanese Pound", 2},
    {"426", "Loti", 2},
    {"428", "Latvian Lats", 2},
    {"430", "Liberian Dollar", 2},
    {"434", "Libyan Dinar", 3},
    {"440", "Lithuanian Litas", 2},
    {"446", "Pataca", 2},
    {"454", "Kwacha", 2},
    {"458", "Malaysian Ringgit", 2},
    {"462", "Rufiyaa", 2},
    {"478", "Ouguiya", 2},
    {"480", "Mauritius Rupee", 2},
    {"484", "Mexican Peso", 2},
    {"496", "Tugrik", 2},
    {"498", "Moldovan Leu", 2},
    {"504", "Moroccan Dirham", 2},
    {"512", "Rial Omani", 3},
    {"516", "Namibia Dollar", 2},
    {"524", "Nepalese Rupee", 2},
    {"532", "Netherlands Antillean Guilder", 2},
    {"533", "Aruban Florin", 2},
    {"548", "Vatu", 0},
    {"554", "New Zealand Dollar", 2},
    {"558", "Cordoba Oro", 2},
    {"566", "Naira", 2},
    {"578", "Norwegian Krone", 2},
    {"586", "Pakistan Rupee", 2},
    {"590", "Balboa", 2},
    {"598", "Kina", 2},
    {"600", "Guarani", 0},
    {"604", "Nuevo Sol", 2},
    {"608", "Philippine Peso", 2},
    {"624", "Guinea-Bissau Peso", -1},
    {"634", "Qatari Rial", 2},
    {"643", "Russian Ruble", 2},
    {"646", "Rwanda Franc", 0},
    {"654", "Saint Helena Pound", 2},
    {"678", "Dobra", 2},
    {"682", "Saudi Riyal", 2},
    {"690", "Seychelles Rupee", 2},
    {"694", "Leone", 2},
    {"702", "Singapore Dollar", 2},
    {"704", "Dong", 0},
    {"706", "Somali Shilling", 2},
    {"710", "Rand", 2},
    {"728", "South Sudanese Pound", 2},
    {"748", "Lilangeni", 2},
    {"752", "Swedish Krona", 2},
    {"756", "Swiss Franc", 2},
    {"760", "Syrian Pound", 2},
    {"764", "Baht", 2},
    {"776", "Pa\'anga", 2},
    {"780", "Trinidad and Tobago Dollar", 2},
    {"784", "UAE Dirham", 2},
    {"788", "Tunisian Dinar", 3},
    {"800", "Uganda Shilling", 0},
    {"807", "Denar", 2},
    {"818", "Egyptian Pound", 2},
    {"826", "Pound Sterling", 2},
    {"834", "Tanzanian Shilling", 2},
    {"840", "US Dollar", 2},
    {"858", "Peso Uruguayo", 2},
    {"860", "Uzbekistan Sum", 2},
    {"882", "Tala", 2},
    {"886", "Yemeni Rial", 2},
    {"894", "Zambian Kwacha", 2},
    {"901", "New Taiwan Dollar", 2},
    {"931", "Peso Convertible", 2},
    {"932", "Zimbabwe Dollar", 2},
    {"934", "Turkmenistan New Manat", 2},
    {"936", "Ghana Cedi", 2},
    {"937", "Bolivar", 2},
    {"938", "Sudanese Pound", 2},
    {"940", "Uruguay Peso en Unidades Indexadas (URUIURUI)", 0},
    {"941", "Serbian Dinar", 2},
    {"943", "Mozambique Metical", 2},
    {"944", "Azerbaijanian Manat", 2},
    {"946", "New Romanian Leu", 2},
    {"947", "WIR Euro", 2},
    {"948", "WIR Franc", 2},
    {"949", "Turkish Lira", 2},
    {"950", "CFA Franc BEAC", 0},
    {"951", "East Caribbean Dollar", 2},
    {"952", "CFA Franc BCEAO", 0},
    {"953", "CFP Franc", 0},
    {"955", "Bond Markets Unit European Composite Unit (EURCO)", 0},
    {"956", "Bond Markets Unit European Monetary Unit (E.M.U.-6)", 0},
    {"957", "Bond Markets Unit European Unit of Account 9 (E.U.A.-9)", 0},
    {"958", "Bond Markets Unit European Unit of Account 17 (E.U.A.-17)", 0},
    {"959", "Gold", 0},
    {"960", "SDR (Special Drawing Right)", 0},
    {"961", "Silver", 0},
    {"962", "Platinum", 0},
    {"963", "Codes specifically reserved for testing purposes", -1},
    {"964", "Palladium", -1},
    {"965", "ADB Unit of Account", -1},
    {"967", "Zambian Kwacha", 2},
    {"968", "Surinam Dollar", 2},
    {"969", "Malagasy Ariary", 1},
    {"969", "Malagasy Ariary", 2},
    {"970", "Unidad de Valor Real", 2},
    {"971", "Afghani", 2},
    {"972", "Somoni", 2},
    {"973", "Kwanza", 2},
    {"974", "Belarussian Ruble", 0},
    {"975", "Bulgarian Lev", 2},
    {"976", "Congolese Franc", 2},
    {"977", "Convertible Mark", 2},
    {"978", "Euro", 2},
    {"979", "Mexican Unidad de Inversion (UDI)", 2},
    {"980", "Hryvnia", 2},
    {"981", "Lari", 2},
    {"984", "Mvdol", 2},
    {"985", "Zloty", 2},
    {"986", "Brazilian Real", 2},
    {"990", "Unidad de Fomento", 4},
    {"994", "Sucre", -1},
    {"997", "US Dollar (Next day)", 2},
    {"998", "US Dollar (Same day)", 2},
    {"999", "No currency is involved", -1},
    {"NULL", "n/a", -1}
};

#endif
