/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// How long before a key press becomes a hold (default: 200ms)
#define TAPPING_TERM 200

// Enables handling for per key `TAPPING_TERM` settings
#define TAPPING_TERM_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

/* Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
Makes it possible to use a dual role key as modifier shortly after having been tapped
See [Tapping Force Hold](tap_hold.md#tapping-force-hold)
Breaks any Tap Toggle functionality (`TT` or the One Shot Tap Toggle)
*/
#define TAPPING_FORCE_HOLD

// Makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn't hit the `TAPPING_TERM`
// See [Permissive Hold](tap_hold.md#permissive-hold) for details
#define PERMISSIVE_HOLD
