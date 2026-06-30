#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CF70
// Address: 0x47cf70 - 0x47d3f0
void sub_0047CF70_0x47cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CF70_0x47cf70");
#endif

    switch (ctx->pc) {
        case 0x47d050u: goto label_47d050;
        case 0x47d060u: goto label_47d060;
        case 0x47d0bcu: goto label_47d0bc;
        case 0x47d0d4u: goto label_47d0d4;
        case 0x47d0e4u: goto label_47d0e4;
        case 0x47d174u: goto label_47d174;
        case 0x47d194u: goto label_47d194;
        case 0x47d1acu: goto label_47d1ac;
        case 0x47d1e0u: goto label_47d1e0;
        case 0x47d220u: goto label_47d220;
        case 0x47d238u: goto label_47d238;
        case 0x47d24cu: goto label_47d24c;
        case 0x47d28cu: goto label_47d28c;
        case 0x47d29cu: goto label_47d29c;
        case 0x47d2c0u: goto label_47d2c0;
        case 0x47d358u: goto label_47d358;
        case 0x47d398u: goto label_47d398;
        case 0x47d3a8u: goto label_47d3a8;
        default: break;
    }

    ctx->pc = 0x47cf70u;

    // 0x47cf70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x47cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x47cf74: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x47cf74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x47cf78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x47cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x47cf7c: 0x24c6f650  addiu       $a2, $a2, -0x9B0
    ctx->pc = 0x47cf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
    // 0x47cf80: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x47cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x47cf84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x47cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x47cf88: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x47cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x47cf8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x47cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x47cf90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x47cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x47cf94: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x47cf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x47cf98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x47cf9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47cf9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cfa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x47cfa4: 0x80850013  lb          $a1, 0x13($a0)
    ctx->pc = 0x47cfa4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x47cfa8: 0x80880012  lb          $t0, 0x12($a0)
    ctx->pc = 0x47cfa8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x47cfac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x47cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x47cfb0: 0xa0850013  sb          $a1, 0x13($a0)
    ctx->pc = 0x47cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x47cfb4: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x47cfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x47cfb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x47cfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x47cfbc: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x47cfbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x47cfc0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x47cfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x47cfc4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x47cfc4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x47cfc8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x47cfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x47cfcc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x47cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x47cfd0: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x47cfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x47cfd4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x47cfd4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x47cfd8: 0x10a300f1  beq         $a1, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x47CFD8u;
    {
        const bool branch_taken_0x47cfd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CFD8u;
            // 0x47cfdc: 0xa088000c  sb          $t0, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cfd8) {
            ctx->pc = 0x47D3A0u;
            goto label_47d3a0;
        }
    }
    ctx->pc = 0x47CFE0u;
    // 0x47cfe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47cfe4: 0x50a300ab  beql        $a1, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x47CFE4u;
    {
        const bool branch_taken_0x47cfe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47cfe4) {
            ctx->pc = 0x47CFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CFE4u;
            // 0x47cfe8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D294u;
            goto label_47d294;
        }
    }
    ctx->pc = 0x47CFECu;
    // 0x47cfec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47cff0: 0x50a30093  beql        $a1, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x47CFF0u;
    {
        const bool branch_taken_0x47cff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47cff0) {
            ctx->pc = 0x47CFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CFF0u;
            // 0x47cff4: 0x92100001  lbu         $s0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D240u;
            goto label_47d240;
        }
    }
    ctx->pc = 0x47CFF8u;
    // 0x47cff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cffc: 0x50a30085  beql        $a1, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x47CFFCu;
    {
        const bool branch_taken_0x47cffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47cffc) {
            ctx->pc = 0x47D000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CFFCu;
            // 0x47d000: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D214u;
            goto label_47d214;
        }
    }
    ctx->pc = 0x47D004u;
    // 0x47d004: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47D004u;
    {
        const bool branch_taken_0x47d004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d004) {
            ctx->pc = 0x47D014u;
            goto label_47d014;
        }
    }
    ctx->pc = 0x47D00Cu;
    // 0x47d00c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x47D00Cu;
    {
        const bool branch_taken_0x47d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D00Cu;
            // 0x47d010: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d00c) {
            ctx->pc = 0x47D3C0u;
            goto label_47d3c0;
        }
    }
    ctx->pc = 0x47D014u;
label_47d014:
    // 0x47d014: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d018: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x47d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x47d01c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x47d01cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x47d020: 0x2463f860  addiu       $v1, $v1, -0x7A0
    ctx->pc = 0x47d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x47d024: 0x8c5689d0  lw          $s6, -0x7630($v0)
    ctx->pc = 0x47d024u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d028: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x47d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x47d02c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x47d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x47d030: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x47d034: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47d034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47d038: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x47d03c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47d040: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x47d040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47d044: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x47d044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x47d048: 0xc040180  jal         func_100600
    ctx->pc = 0x47D048u;
    SET_GPR_U32(ctx, 31, 0x47D050u);
    ctx->pc = 0x47D04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D048u;
            // 0x47d04c: 0xa242000d  sb          $v0, 0xD($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D050u; }
        if (ctx->pc != 0x47D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D050u; }
        if (ctx->pc != 0x47D050u) { return; }
    }
    ctx->pc = 0x47D050u;
label_47d050:
    // 0x47d050: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x47D050u;
    {
        const bool branch_taken_0x47d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d050) {
            ctx->pc = 0x47D054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D050u;
            // 0x47d054: 0x92050002  lbu         $a1, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D064u;
            goto label_47d064;
        }
    }
    ctx->pc = 0x47D058u;
    // 0x47d058: 0xc159dd8  jal         func_567760
    ctx->pc = 0x47D058u;
    SET_GPR_U32(ctx, 31, 0x47D060u);
    ctx->pc = 0x47D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D058u;
            // 0x47d05c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567760u;
    if (runtime->hasFunction(0x567760u)) {
        auto targetFn = runtime->lookupFunction(0x567760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D060u; }
        if (ctx->pc != 0x47D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567760_0x567760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D060u; }
        if (ctx->pc != 0x47D060u) { return; }
    }
    ctx->pc = 0x47D060u;
label_47d060:
    // 0x47d060: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x47d060u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_47d064:
    // 0x47d064: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x47d064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x47d068: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x47d068u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x47d06c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47d070: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x47d070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x47d074: 0x26d10080  addiu       $s1, $s6, 0x80
    ctx->pc = 0x47d074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x47d078: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x47d078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x47d07c: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x47d07cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x47d080: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x47d080u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x47d084: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x47d084u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x47d088: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47d08c: 0xe82823  subu        $a1, $a3, $t0
    ctx->pc = 0x47d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x47d090: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x47d090u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x47d094: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x47d094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x47d098: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x47d098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x47d09c: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x47d09cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x47d0a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x47d0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d0a4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x47d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x47d0a8: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x47d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x47d0ac: 0x8c72a348  lw          $s2, -0x5CB8($v1)
    ctx->pc = 0x47d0acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x47d0b0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x47d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x47d0b4: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x47D0B4u;
    SET_GPR_U32(ctx, 31, 0x47D0BCu);
    ctx->pc = 0x47D0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D0B4u;
            // 0x47d0b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D0BCu; }
        if (ctx->pc != 0x47D0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D0BCu; }
        if (ctx->pc != 0x47D0BCu) { return; }
    }
    ctx->pc = 0x47D0BCu;
label_47d0bc:
    // 0x47d0bc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x47d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x47d0c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47d0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d0c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47d0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d0c8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x47d0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x47d0cc: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x47D0CCu;
    SET_GPR_U32(ctx, 31, 0x47D0D4u);
    ctx->pc = 0x47D0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D0CCu;
            // 0x47d0d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D0D4u; }
        if (ctx->pc != 0x47D0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D0D4u; }
        if (ctx->pc != 0x47D0D4u) { return; }
    }
    ctx->pc = 0x47D0D4u;
label_47d0d4:
    // 0x47d0d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x47d0d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d0d8: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x47d0d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x47d0dc: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x47d0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x47d0e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47d0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d0e4:
    // 0x47d0e4: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x47d0e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x47d0e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d0ec: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x47D0ECu;
    {
        const bool branch_taken_0x47d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x47d0ec) {
            ctx->pc = 0x47D128u;
            goto label_47d128;
        }
    }
    ctx->pc = 0x47D0F4u;
    // 0x47d0f4: 0x16b2000c  bne         $s5, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x47D0F4u;
    {
        const bool branch_taken_0x47d0f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 18));
        if (branch_taken_0x47d0f4) {
            ctx->pc = 0x47D128u;
            goto label_47d128;
        }
    }
    ctx->pc = 0x47D0FCu;
    // 0x47d0fc: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x47d0fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x47d100: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x47d100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x47d104: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x47d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x47d108: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x47d108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x47d10c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x47d10cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x47d110: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x47d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x47d114: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x47d114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x47d118: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x47d118u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d11c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x47D11Cu;
    {
        const bool branch_taken_0x47d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D11Cu;
            // 0x47d120: 0xa2820001  sb          $v0, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d11c) {
            ctx->pc = 0x47D148u;
            goto label_47d148;
        }
    }
    ctx->pc = 0x47D124u;
    // 0x47d124: 0x0  nop
    ctx->pc = 0x47d124u;
    // NOP
label_47d128:
    // 0x47d128: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x47d128u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x47d12c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x47d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x47d130: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x47d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x47d134: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x47d134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x47d138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x47d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x47d13c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x47d13cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47d140: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x47d140u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x47d144: 0x0  nop
    ctx->pc = 0x47d144u;
    // NOP
label_47d148:
    // 0x47d148: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x47d148u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x47d14c: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x47d14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x47d150: 0x2402ff9f  addiu       $v0, $zero, -0x61
    ctx->pc = 0x47d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
    // 0x47d154: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x47d154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x47d158: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d15c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x47d15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x47d160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47d160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d164: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x47d164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x47d168: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47d168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d16c: 0xc0c90f4  jal         func_3243D0
    ctx->pc = 0x47D16Cu;
    SET_GPR_U32(ctx, 31, 0x47D174u);
    ctx->pc = 0x47D170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D16Cu;
            // 0x47d170: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3243D0u;
    if (runtime->hasFunction(0x3243D0u)) {
        auto targetFn = runtime->lookupFunction(0x3243D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D174u; }
        if (ctx->pc != 0x47D174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003243D0_0x3243d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D174u; }
        if (ctx->pc != 0x47D174u) { return; }
    }
    ctx->pc = 0x47D174u;
label_47d174:
    // 0x47d174: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x47d174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x47d178: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x47d178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x47d17c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x47d17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x47d180: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x47D180u;
    {
        const bool branch_taken_0x47d180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47D184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D180u;
            // 0x47d184: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d180) {
            ctx->pc = 0x47D0E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47d0e4;
        }
    }
    ctx->pc = 0x47D188u;
    // 0x47d188: 0x24040ccc  addiu       $a0, $zero, 0xCCC
    ctx->pc = 0x47d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3276));
    // 0x47d18c: 0xc040180  jal         func_100600
    ctx->pc = 0x47D18Cu;
    SET_GPR_U32(ctx, 31, 0x47D194u);
    ctx->pc = 0x47D190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D18Cu;
            // 0x47d190: 0xa2c000f0  sb          $zero, 0xF0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 240), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D194u; }
        if (ctx->pc != 0x47D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D194u; }
        if (ctx->pc != 0x47D194u) { return; }
    }
    ctx->pc = 0x47D194u;
label_47d194:
    // 0x47d194: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x47D194u;
    {
        const bool branch_taken_0x47d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D194u;
            // 0x47d198: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d194) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D19Cu;
    // 0x47d19c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d1a0: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x47d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d1a4: 0xc0b909c  jal         func_2E4270
    ctx->pc = 0x47D1A4u;
    SET_GPR_U32(ctx, 31, 0x47D1ACu);
    ctx->pc = 0x47D1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D1A4u;
            // 0x47d1a8: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4270u;
    if (runtime->hasFunction(0x2E4270u)) {
        auto targetFn = runtime->lookupFunction(0x2E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D1ACu; }
        if (ctx->pc != 0x47D1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4270_0x2e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D1ACu; }
        if (ctx->pc != 0x47D1ACu) { return; }
    }
    ctx->pc = 0x47D1ACu;
label_47d1ac:
    // 0x47d1ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x47d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x47d1b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x47d1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d1b4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x47d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x47d1b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x47d1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d1bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d1c0: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x47d1c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x47d1c4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x47d1c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d1c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x47d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x47d1cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47d1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d1d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x47d1d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d1d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x47d1d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d1d8: 0xc0cd08c  jal         func_334230
    ctx->pc = 0x47D1D8u;
    SET_GPR_U32(ctx, 31, 0x47D1E0u);
    ctx->pc = 0x47D1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D1D8u;
            // 0x47d1dc: 0x27aa00b0  addiu       $t2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D1E0u; }
        if (ctx->pc != 0x47D1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D1E0u; }
        if (ctx->pc != 0x47D1E0u) { return; }
    }
    ctx->pc = 0x47D1E0u;
label_47d1e0:
    // 0x47d1e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x47d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x47d1e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x47d1e8: 0x24847fa0  addiu       $a0, $a0, 0x7FA0
    ctx->pc = 0x47d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32672));
    // 0x47d1ec: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x47d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x47d1f0: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x47d1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d1f8: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x47d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x47d1fc: 0xae430cc0  sw          $v1, 0xCC0($s2)
    ctx->pc = 0x47d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3264), GPR_U32(ctx, 3));
    // 0x47d200: 0xae400cc4  sw          $zero, 0xCC4($s2)
    ctx->pc = 0x47d200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 0));
    // 0x47d204: 0xa2400cc9  sb          $zero, 0xCC9($s2)
    ctx->pc = 0x47d204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3273), (uint8_t)GPR_U32(ctx, 0));
    // 0x47d208: 0xa2440cca  sb          $a0, 0xCCA($s2)
    ctx->pc = 0x47d208u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3274), (uint8_t)GPR_U32(ctx, 4));
    // 0x47d20c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x47D20Cu;
    {
        const bool branch_taken_0x47d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D20Cu;
            // 0x47d210: 0xa2440ccb  sb          $a0, 0xCCB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3275), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d20c) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D214u;
label_47d214:
    // 0x47d214: 0x240408b0  addiu       $a0, $zero, 0x8B0
    ctx->pc = 0x47d214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
    // 0x47d218: 0xc040180  jal         func_100600
    ctx->pc = 0x47D218u;
    SET_GPR_U32(ctx, 31, 0x47D220u);
    ctx->pc = 0x47D21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D218u;
            // 0x47d21c: 0xa242000e  sb          $v0, 0xE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D220u; }
        if (ctx->pc != 0x47D220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D220u; }
        if (ctx->pc != 0x47D220u) { return; }
    }
    ctx->pc = 0x47D220u;
label_47d220:
    // 0x47d220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d224: 0x10800065  beqz        $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x47D224u;
    {
        const bool branch_taken_0x47d224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d224) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D22Cu;
    // 0x47d22c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x47d22cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x47d230: 0xc0d3168  jal         func_34C5A0
    ctx->pc = 0x47D230u;
    SET_GPR_U32(ctx, 31, 0x47D238u);
    ctx->pc = 0x47D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D230u;
            // 0x47d234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34C5A0u;
    if (runtime->hasFunction(0x34C5A0u)) {
        auto targetFn = runtime->lookupFunction(0x34C5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D238u; }
        if (ctx->pc != 0x47D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034C5A0_0x34c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D238u; }
        if (ctx->pc != 0x47D238u) { return; }
    }
    ctx->pc = 0x47D238u;
label_47d238:
    // 0x47d238: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x47D238u;
    {
        const bool branch_taken_0x47d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d238) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D240u;
label_47d240:
    // 0x47d240: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x47d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x47d244: 0xc040180  jal         func_100600
    ctx->pc = 0x47D244u;
    SET_GPR_U32(ctx, 31, 0x47D24Cu);
    ctx->pc = 0x47D248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D244u;
            // 0x47d248: 0xa250000f  sb          $s0, 0xF($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D24Cu; }
        if (ctx->pc != 0x47D24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D24Cu; }
        if (ctx->pc != 0x47D24Cu) { return; }
    }
    ctx->pc = 0x47D24Cu;
label_47d24c:
    // 0x47d24c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d250: 0x1080005a  beqz        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x47D250u;
    {
        const bool branch_taken_0x47d250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d250) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D258u;
    // 0x47d258: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x47d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x47d25c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x47d25cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d260: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x47d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x47d264: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x47d264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d268: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x47d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
    // 0x47d26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d270: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x47d270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x47d274: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x47d274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x47d278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d27c: 0x240a0402  addiu       $t2, $zero, 0x402
    ctx->pc = 0x47d27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x47d280: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x47d280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d284: 0xc0f122c  jal         func_3C48B0
    ctx->pc = 0x47D284u;
    SET_GPR_U32(ctx, 31, 0x47D28Cu);
    ctx->pc = 0x47D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D284u;
            // 0x47d288: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D28Cu; }
        if (ctx->pc != 0x47D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D28Cu; }
        if (ctx->pc != 0x47D28Cu) { return; }
    }
    ctx->pc = 0x47D28Cu;
label_47d28c:
    // 0x47d28c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x47D28Cu;
    {
        const bool branch_taken_0x47d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d28c) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D294u;
label_47d294:
    // 0x47d294: 0xc040180  jal         func_100600
    ctx->pc = 0x47D294u;
    SET_GPR_U32(ctx, 31, 0x47D29Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D29Cu; }
        if (ctx->pc != 0x47D29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D29Cu; }
        if (ctx->pc != 0x47D29Cu) { return; }
    }
    ctx->pc = 0x47D29Cu;
label_47d29c:
    // 0x47d29c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x47D29Cu;
    {
        const bool branch_taken_0x47d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D29Cu;
            // 0x47d2a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d29c) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D2A4u;
    // 0x47d2a4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x47d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x47d2a8: 0x92500011  lbu         $s0, 0x11($s2)
    ctx->pc = 0x47d2a8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x47d2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47d2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d2b0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x47d2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x47d2b4: 0x3445d57a  ori         $a1, $v0, 0xD57A
    ctx->pc = 0x47d2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54650);
    // 0x47d2b8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x47D2B8u;
    SET_GPR_U32(ctx, 31, 0x47D2C0u);
    ctx->pc = 0x47D2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D2B8u;
            // 0x47d2bc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D2C0u; }
        if (ctx->pc != 0x47D2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D2C0u; }
        if (ctx->pc != 0x47D2C0u) { return; }
    }
    ctx->pc = 0x47D2C0u;
label_47d2c0:
    // 0x47d2c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x47d2c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47d2c8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x47d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x47d2cc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x47d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x47d2d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x47d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x47d2d4: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x47d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x47d2d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x47d2dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x47d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x47d2e0: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x47d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x47d2e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d2e8: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x47d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x47d2ec: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x47d2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x47d2f0: 0x8c4a89f0  lw          $t2, -0x7610($v0)
    ctx->pc = 0x47d2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x47d2f4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x47d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x47d2f8: 0x93a900dc  lbu         $t1, 0xDC($sp)
    ctx->pc = 0x47d2f8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x47d2fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47d300: 0x93a800dd  lbu         $t0, 0xDD($sp)
    ctx->pc = 0x47d300u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 221)));
    // 0x47d304: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x47d304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x47d308: 0x93a700de  lbu         $a3, 0xDE($sp)
    ctx->pc = 0x47d308u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x47d30c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x47d310: 0xa149003c  sb          $t1, 0x3C($t2)
    ctx->pc = 0x47d310u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 60), (uint8_t)GPR_U32(ctx, 9));
    // 0x47d314: 0xa148003d  sb          $t0, 0x3D($t2)
    ctx->pc = 0x47d314u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 61), (uint8_t)GPR_U32(ctx, 8));
    // 0x47d318: 0xa147003e  sb          $a3, 0x3E($t2)
    ctx->pc = 0x47d318u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 62), (uint8_t)GPR_U32(ctx, 7));
    // 0x47d31c: 0x93a700df  lbu         $a3, 0xDF($sp)
    ctx->pc = 0x47d31cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x47d320: 0xa147003f  sb          $a3, 0x3F($t2)
    ctx->pc = 0x47d320u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 63), (uint8_t)GPR_U32(ctx, 7));
    // 0x47d324: 0x9148003e  lbu         $t0, 0x3E($t2)
    ctx->pc = 0x47d324u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 62)));
    // 0x47d328: 0x9147003d  lbu         $a3, 0x3D($t2)
    ctx->pc = 0x47d328u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 61)));
    // 0x47d32c: 0x9149003f  lbu         $t1, 0x3F($t2)
    ctx->pc = 0x47d32cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 63)));
    // 0x47d330: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x47d330u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x47d334: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x47d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x47d338: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x47d338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x47d33c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x47d33cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x47d340: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x47d340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x47d344: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x47d344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x47d348: 0xfca6ec90  sd          $a2, -0x1370($a1)
    ctx->pc = 0x47d348u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294962320), GPR_U64(ctx, 6));
    // 0x47d34c: 0xfc66ee00  sd          $a2, -0x1200($v1)
    ctx->pc = 0x47d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 6));
    // 0x47d350: 0xc040180  jal         func_100600
    ctx->pc = 0x47D350u;
    SET_GPR_U32(ctx, 31, 0x47D358u);
    ctx->pc = 0x47D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D350u;
            // 0x47d354: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D358u; }
        if (ctx->pc != 0x47D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D358u; }
        if (ctx->pc != 0x47D358u) { return; }
    }
    ctx->pc = 0x47D358u;
label_47d358:
    // 0x47d358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d35c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x47D35Cu;
    {
        const bool branch_taken_0x47d35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d35c) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D364u;
    // 0x47d364: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x47d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x47d368: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x47d368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d36c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x47d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x47d370: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x47d370u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d374: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x47d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x47d378: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x47d378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x47d37c: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x47d37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x47d380: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x47d380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x47d384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d388: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x47d388u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d38c: 0x240a0402  addiu       $t2, $zero, 0x402
    ctx->pc = 0x47d38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x47d390: 0xc0f122c  jal         func_3C48B0
    ctx->pc = 0x47D390u;
    SET_GPR_U32(ctx, 31, 0x47D398u);
    ctx->pc = 0x47D394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D390u;
            // 0x47d394: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D398u; }
        if (ctx->pc != 0x47D398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D398u; }
        if (ctx->pc != 0x47D398u) { return; }
    }
    ctx->pc = 0x47D398u;
label_47d398:
    // 0x47d398: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x47D398u;
    {
        const bool branch_taken_0x47d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47d398) {
            ctx->pc = 0x47D3BCu;
            goto label_47d3bc;
        }
    }
    ctx->pc = 0x47D3A0u;
label_47d3a0:
    // 0x47d3a0: 0xc11f504  jal         func_47D410
    ctx->pc = 0x47D3A0u;
    SET_GPR_U32(ctx, 31, 0x47D3A8u);
    ctx->pc = 0x47D410u;
    if (runtime->hasFunction(0x47D410u)) {
        auto targetFn = runtime->lookupFunction(0x47D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D3A8u; }
        if (ctx->pc != 0x47D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047D410_0x47d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D3A8u; }
        if (ctx->pc != 0x47D3A8u) { return; }
    }
    ctx->pc = 0x47D3A8u;
label_47d3a8:
    // 0x47d3a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x47d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47d3ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x47d3b0: 0xa2440012  sb          $a0, 0x12($s2)
    ctx->pc = 0x47d3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x47d3b4: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x47d3b8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x47d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_47d3bc:
    // 0x47d3bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x47d3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_47d3c0:
    // 0x47d3c0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x47d3c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47d3c4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x47d3c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47d3c8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x47d3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47d3cc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x47d3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d3d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x47d3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47d3d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47d3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47d3d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47d3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x47D3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D3DCu;
            // 0x47d3e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47D3E4u;
    // 0x47d3e4: 0x0  nop
    ctx->pc = 0x47d3e4u;
    // NOP
    // 0x47d3e8: 0x0  nop
    ctx->pc = 0x47d3e8u;
    // NOP
    // 0x47d3ec: 0x0  nop
    ctx->pc = 0x47d3ecu;
    // NOP
}
