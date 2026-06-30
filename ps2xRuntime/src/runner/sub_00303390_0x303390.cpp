#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303390
// Address: 0x303390 - 0x3035f0
void sub_00303390_0x303390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303390_0x303390");
#endif

    switch (ctx->pc) {
        case 0x3033fcu: goto label_3033fc;
        case 0x303408u: goto label_303408;
        case 0x3034a0u: goto label_3034a0;
        case 0x303538u: goto label_303538;
        case 0x3035c4u: goto label_3035c4;
        default: break;
    }

    ctx->pc = 0x303390u;

    // 0x303390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x303390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x303394: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x303394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x303398: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x303398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30339c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3033a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3033a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3033a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3033a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3033a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3033a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3033ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3033acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3033b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3033b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3033b4: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x3033b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x3033b8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3033b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3033bc: 0x50830082  beql        $a0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3033BCu;
    {
        const bool branch_taken_0x3033bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3033bc) {
            ctx->pc = 0x3033C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3033BCu;
            // 0x3033c0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3035C8u;
            goto label_3035c8;
        }
    }
    ctx->pc = 0x3033C4u;
    // 0x3033c4: 0x8e830518  lw          $v1, 0x518($s4)
    ctx->pc = 0x3033c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
    // 0x3033c8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3033c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3033cc: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x3033CCu;
    {
        const bool branch_taken_0x3033cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033cc) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3033D4u;
    // 0x3033d4: 0x8e830da0  lw          $v1, 0xDA0($s4)
    ctx->pc = 0x3033d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
    // 0x3033d8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3033d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3033dc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3033DCu;
    {
        const bool branch_taken_0x3033dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033dc) {
            ctx->pc = 0x3033E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3033DCu;
            // 0x3033e0: 0x8e920d70  lw          $s2, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3033F0u;
            goto label_3033f0;
        }
    }
    ctx->pc = 0x3033E4u;
    // 0x3033e4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x3033E4u;
    {
        const bool branch_taken_0x3033e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033e4) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3033ECu;
    // 0x3033ec: 0x8e920d70  lw          $s2, 0xD70($s4)
    ctx->pc = 0x3033ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
label_3033f0:
    // 0x3033f0: 0x8e910db0  lw          $s1, 0xDB0($s4)
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
    // 0x3033f4: 0xc15abb8  jal         func_56AEE0
    ctx->pc = 0x3033F4u;
    SET_GPR_U32(ctx, 31, 0x3033FCu);
    ctx->pc = 0x3033F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3033F4u;
            // 0x3033f8: 0x268411f4  addiu       $a0, $s4, 0x11F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56AEE0u;
    if (runtime->hasFunction(0x56AEE0u)) {
        auto targetFn = runtime->lookupFunction(0x56AEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3033FCu; }
        if (ctx->pc != 0x3033FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056AEE0_0x56aee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3033FCu; }
        if (ctx->pc != 0x3033FCu) { return; }
    }
    ctx->pc = 0x3033FCu;
label_3033fc:
    // 0x3033fc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x3033fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x303400: 0xc15abb8  jal         func_56AEE0
    ctx->pc = 0x303400u;
    SET_GPR_U32(ctx, 31, 0x303408u);
    ctx->pc = 0x303404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303400u;
            // 0x303404: 0x26841208  addiu       $a0, $s4, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56AEE0u;
    if (runtime->hasFunction(0x56AEE0u)) {
        auto targetFn = runtime->lookupFunction(0x56AEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303408u; }
        if (ctx->pc != 0x303408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056AEE0_0x56aee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303408u; }
        if (ctx->pc != 0x303408u) { return; }
    }
    ctx->pc = 0x303408u;
label_303408:
    // 0x303408: 0x8e830550  lw          $v1, 0x550($s4)
    ctx->pc = 0x303408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x30340c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x30340cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x303410: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x303410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x303414: 0x8e860a68  lw          $a2, 0xA68($s4)
    ctx->pc = 0x303414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2664)));
    // 0x303418: 0x8065010f  lb          $a1, 0x10F($v1)
    ctx->pc = 0x303418u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
    // 0x30341c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30341Cu;
    {
        const bool branch_taken_0x30341c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x303420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30341Cu;
            // 0x303420: 0x4802b  sltu        $s0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30341c) {
            ctx->pc = 0x30342Cu;
            goto label_30342c;
        }
    }
    ctx->pc = 0x303424u;
    // 0x303424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x303424u;
    {
        const bool branch_taken_0x303424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303424) {
            ctx->pc = 0x303430u;
            goto label_303430;
        }
    }
    ctx->pc = 0x30342Cu;
label_30342c:
    // 0x30342c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30342cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_303430:
    // 0x303430: 0x50e0001c  beql        $a3, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x303430u;
    {
        const bool branch_taken_0x303430 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x303430) {
            ctx->pc = 0x303434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303430u;
            // 0x303434: 0x2a230005  slti        $v1, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3034A4u;
            goto label_3034a4;
        }
    }
    ctx->pc = 0x303438u;
    // 0x303438: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x303438u;
    {
        const bool branch_taken_0x303438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x303438) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x303440u;
    // 0x303440: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x303440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x303444: 0x12230016  beq         $s1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x303444u;
    {
        const bool branch_taken_0x303444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x303444) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x30344Cu;
    // 0x30344c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x303450: 0x12240013  beq         $s1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x303450u;
    {
        const bool branch_taken_0x303450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x303450) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x303458u;
    // 0x303458: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x303458u;
    {
        const bool branch_taken_0x303458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x303458) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x303460u;
    // 0x303460: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x303460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x303464: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x303464u;
    {
        const bool branch_taken_0x303464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x303464) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x30346Cu;
    // 0x30346c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x30346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x303470: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x303470u;
    {
        const bool branch_taken_0x303470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x303470) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x303478u;
    // 0x303478: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x303478u;
    {
        const bool branch_taken_0x303478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x303478) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x303480u;
    // 0x303480: 0x8e840e34  lw          $a0, 0xE34($s4)
    ctx->pc = 0x303480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
    // 0x303484: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x303484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303488: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x303488u;
    {
        const bool branch_taken_0x303488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303488) {
            ctx->pc = 0x3034A0u;
            goto label_3034a0;
        }
    }
    ctx->pc = 0x303490u;
    // 0x303490: 0x8e820e00  lw          $v0, 0xE00($s4)
    ctx->pc = 0x303490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3584)));
    // 0x303494: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x303494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303498: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x303498u;
    SET_GPR_U32(ctx, 31, 0x3034A0u);
    ctx->pc = 0x30349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303498u;
            // 0x30349c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3034A0u; }
        if (ctx->pc != 0x3034A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3034A0u; }
        if (ctx->pc != 0x3034A0u) { return; }
    }
    ctx->pc = 0x3034A0u;
label_3034a0:
    // 0x3034a0: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x3034a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_3034a4:
    // 0x3034a4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3034A4u;
    {
        const bool branch_taken_0x3034a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034a4) {
            ctx->pc = 0x3034A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3034A4u;
            // 0x3034a8: 0x2a23000b  slti        $v1, $s1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3034BCu;
            goto label_3034bc;
        }
    }
    ctx->pc = 0x3034ACu;
    // 0x3034ac: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x3034acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3034b0: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3034B0u;
    {
        const bool branch_taken_0x3034b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034b0) {
            ctx->pc = 0x3034B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3034B0u;
            // 0x3034b4: 0x8e830d60  lw          $v1, 0xD60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3034D4u;
            goto label_3034d4;
        }
    }
    ctx->pc = 0x3034B8u;
    // 0x3034b8: 0x2a23000b  slti        $v1, $s1, 0xB
    ctx->pc = 0x3034b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
label_3034bc:
    // 0x3034bc: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3034BCu;
    {
        const bool branch_taken_0x3034bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034bc) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3034C4u;
    // 0x3034c4: 0x2a21000d  slti        $at, $s1, 0xD
    ctx->pc = 0x3034c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3034c8: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x3034C8u;
    {
        const bool branch_taken_0x3034c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3034c8) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3034D0u;
    // 0x3034d0: 0x8e830d60  lw          $v1, 0xD60($s4)
    ctx->pc = 0x3034d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_3034d4:
    // 0x3034d4: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x3034d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3034d8: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3034D8u;
    {
        const bool branch_taken_0x3034d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3034d8) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3034E0u;
    // 0x3034e0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3034e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3034e4: 0x12230037  beq         $s1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3034E4u;
    {
        const bool branch_taken_0x3034e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3034e4) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3034ECu;
    // 0x3034ec: 0x8e830e00  lw          $v1, 0xE00($s4)
    ctx->pc = 0x3034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3584)));
    // 0x3034f0: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3034F0u;
    {
        const bool branch_taken_0x3034f0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3034f0) {
            ctx->pc = 0x303540u;
            goto label_303540;
        }
    }
    ctx->pc = 0x3034F8u;
    // 0x3034f8: 0x16000032  bnez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3034F8u;
    {
        const bool branch_taken_0x3034f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3034f8) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303500u;
    // 0x303500: 0x8e840da0  lw          $a0, 0xDA0($s4)
    ctx->pc = 0x303500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
    // 0x303504: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x303504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x303508: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x303508u;
    {
        const bool branch_taken_0x303508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303508) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303510u;
    // 0x303510: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x303510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x303514: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303518: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x303518u;
    {
        const bool branch_taken_0x303518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303518) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303520u;
    // 0x303520: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x303520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x303524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x303528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30352c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303530: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x303530u;
    SET_GPR_U32(ctx, 31, 0x303538u);
    ctx->pc = 0x303534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303530u;
            // 0x303534: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303538u; }
        if (ctx->pc != 0x303538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303538u; }
        if (ctx->pc != 0x303538u) { return; }
    }
    ctx->pc = 0x303538u;
label_303538:
    // 0x303538: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x303538u;
    {
        const bool branch_taken_0x303538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303538) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303540u;
label_303540:
    // 0x303540: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x303540u;
    {
        const bool branch_taken_0x303540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303540) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303548u;
    // 0x303548: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x303548u;
    {
        const bool branch_taken_0x303548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303548u;
            // 0x30354c: 0x8e850d74  lw          $a1, 0xD74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303548) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303550u;
    // 0x303550: 0x8e830da0  lw          $v1, 0xDA0($s4)
    ctx->pc = 0x303550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
    // 0x303554: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x303554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x303558: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x303558u;
    {
        const bool branch_taken_0x303558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303558) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303560u;
    // 0x303560: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x303560u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
    // 0x303564: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x303564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x303568: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x303568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30356c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303570: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x303570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
    // 0x303574: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x303574u;
    {
        const bool branch_taken_0x303574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x303574) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x30357Cu;
    // 0x30357c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303580: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x303580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303584: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x303584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303588: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30358c: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x30358cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
    // 0x303590: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x303590u;
    {
        const bool branch_taken_0x303590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x303590) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x303598u;
    // 0x303598: 0xc6810de4  lwc1        $f1, 0xDE4($s4)
    ctx->pc = 0x303598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30359c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30359cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3035a0: 0x0  nop
    ctx->pc = 0x3035a0u;
    // NOP
    // 0x3035a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3035a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3035a8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3035A8u;
    {
        const bool branch_taken_0x3035a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3035a8) {
            ctx->pc = 0x3035C4u;
            goto label_3035c4;
        }
    }
    ctx->pc = 0x3035B0u;
    // 0x3035b0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3035b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3035b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3035b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3035b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3035bc: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x3035BCu;
    SET_GPR_U32(ctx, 31, 0x3035C4u);
    ctx->pc = 0x3035C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3035BCu;
            // 0x3035c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3035C4u; }
        if (ctx->pc != 0x3035C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3035C4u; }
        if (ctx->pc != 0x3035C4u) { return; }
    }
    ctx->pc = 0x3035C4u;
label_3035c4:
    // 0x3035c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3035c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3035c8:
    // 0x3035c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3035c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3035cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3035ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3035d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3035d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3035d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3035d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3035d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3035d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3035dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3035DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3035E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3035DCu;
            // 0x3035e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3035E4u;
    // 0x3035e4: 0x0  nop
    ctx->pc = 0x3035e4u;
    // NOP
    // 0x3035e8: 0x0  nop
    ctx->pc = 0x3035e8u;
    // NOP
    // 0x3035ec: 0x0  nop
    ctx->pc = 0x3035ecu;
    // NOP
}
