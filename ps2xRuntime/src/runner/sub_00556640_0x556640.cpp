#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556640
// Address: 0x556640 - 0x556880
void sub_00556640_0x556640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556640_0x556640");
#endif

    switch (ctx->pc) {
        case 0x556684u: goto label_556684;
        case 0x5566a0u: goto label_5566a0;
        case 0x5566b8u: goto label_5566b8;
        case 0x5566d0u: goto label_5566d0;
        case 0x5566e8u: goto label_5566e8;
        case 0x556700u: goto label_556700;
        case 0x556714u: goto label_556714;
        case 0x556728u: goto label_556728;
        case 0x556740u: goto label_556740;
        case 0x556758u: goto label_556758;
        case 0x556770u: goto label_556770;
        case 0x556780u: goto label_556780;
        case 0x55679cu: goto label_55679c;
        case 0x5567b4u: goto label_5567b4;
        case 0x5567c0u: goto label_5567c0;
        case 0x5567dcu: goto label_5567dc;
        case 0x5567f4u: goto label_5567f4;
        case 0x556800u: goto label_556800;
        case 0x55681cu: goto label_55681c;
        case 0x556834u: goto label_556834;
        case 0x556844u: goto label_556844;
        default: break;
    }

    ctx->pc = 0x556640u;

    // 0x556640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x556640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x556644: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x556644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x556648: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x556648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x55664c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x55664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x556650: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x556650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x556654: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x556654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x556658: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x556658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x55665c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x556660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x556660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x556664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x556664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x556668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x556668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55666c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x556670: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x556670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x556674: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x556674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x556678: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x556678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x55667c: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x55667Cu;
    SET_GPR_U32(ctx, 31, 0x556684u);
    ctx->pc = 0x556680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55667Cu;
            // 0x556680: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556684u; }
        if (ctx->pc != 0x556684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556684u; }
        if (ctx->pc != 0x556684u) { return; }
    }
    ctx->pc = 0x556684u;
label_556684:
    // 0x556684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x556684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x556688: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x556688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x55668c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x55668cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556690: 0x24a5ee68  addiu       $a1, $a1, -0x1198
    ctx->pc = 0x556690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
    // 0x556694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x556694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556698: 0xc123944  jal         func_48E510
    ctx->pc = 0x556698u;
    SET_GPR_U32(ctx, 31, 0x5566A0u);
    ctx->pc = 0x55669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556698u;
            // 0x55669c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566A0u; }
        if (ctx->pc != 0x5566A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566A0u; }
        if (ctx->pc != 0x5566A0u) { return; }
    }
    ctx->pc = 0x5566A0u;
label_5566a0:
    // 0x5566a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5566a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5566a4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5566a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5566a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x5566a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5566ac: 0x24a5ee10  addiu       $a1, $a1, -0x11F0
    ctx->pc = 0x5566acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    // 0x5566b0: 0xc123944  jal         func_48E510
    ctx->pc = 0x5566B0u;
    SET_GPR_U32(ctx, 31, 0x5566B8u);
    ctx->pc = 0x5566B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5566B0u;
            // 0x5566b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566B8u; }
        if (ctx->pc != 0x5566B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566B8u; }
        if (ctx->pc != 0x5566B8u) { return; }
    }
    ctx->pc = 0x5566B8u;
label_5566b8:
    // 0x5566b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5566b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5566bc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5566bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5566c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5566c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5566c4: 0x24a5ee20  addiu       $a1, $a1, -0x11E0
    ctx->pc = 0x5566c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962720));
    // 0x5566c8: 0xc123944  jal         func_48E510
    ctx->pc = 0x5566C8u;
    SET_GPR_U32(ctx, 31, 0x5566D0u);
    ctx->pc = 0x5566CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5566C8u;
            // 0x5566cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566D0u; }
        if (ctx->pc != 0x5566D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566D0u; }
        if (ctx->pc != 0x5566D0u) { return; }
    }
    ctx->pc = 0x5566D0u;
label_5566d0:
    // 0x5566d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5566d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5566d4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5566d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5566d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x5566d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5566dc: 0x24a5ef28  addiu       $a1, $a1, -0x10D8
    ctx->pc = 0x5566dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962984));
    // 0x5566e0: 0xc123944  jal         func_48E510
    ctx->pc = 0x5566E0u;
    SET_GPR_U32(ctx, 31, 0x5566E8u);
    ctx->pc = 0x5566E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5566E0u;
            // 0x5566e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566E8u; }
        if (ctx->pc != 0x5566E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5566E8u; }
        if (ctx->pc != 0x5566E8u) { return; }
    }
    ctx->pc = 0x5566E8u;
label_5566e8:
    // 0x5566e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x5566e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5566ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5566ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5566f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x5566f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5566f4: 0x24a5ef38  addiu       $a1, $a1, -0x10C8
    ctx->pc = 0x5566f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963000));
    // 0x5566f8: 0xc123944  jal         func_48E510
    ctx->pc = 0x5566F8u;
    SET_GPR_U32(ctx, 31, 0x556700u);
    ctx->pc = 0x5566FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5566F8u;
            // 0x5566fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556700u; }
        if (ctx->pc != 0x556700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556700u; }
        if (ctx->pc != 0x556700u) { return; }
    }
    ctx->pc = 0x556700u;
label_556700:
    // 0x556700: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x556704: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x556704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x556708: 0x24a5ef48  addiu       $a1, $a1, -0x10B8
    ctx->pc = 0x556708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
    // 0x55670c: 0xc123944  jal         func_48E510
    ctx->pc = 0x55670Cu;
    SET_GPR_U32(ctx, 31, 0x556714u);
    ctx->pc = 0x556710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55670Cu;
            // 0x556710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556714u; }
        if (ctx->pc != 0x556714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556714u; }
        if (ctx->pc != 0x556714u) { return; }
    }
    ctx->pc = 0x556714u;
label_556714:
    // 0x556714: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x556718: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x556718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x55671c: 0x24a5ef50  addiu       $a1, $a1, -0x10B0
    ctx->pc = 0x55671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963024));
    // 0x556720: 0xc123944  jal         func_48E510
    ctx->pc = 0x556720u;
    SET_GPR_U32(ctx, 31, 0x556728u);
    ctx->pc = 0x556724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556720u;
            // 0x556724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556728u; }
        if (ctx->pc != 0x556728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556728u; }
        if (ctx->pc != 0x556728u) { return; }
    }
    ctx->pc = 0x556728u;
label_556728:
    // 0x556728: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x55672c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55672cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x556730: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x556730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x556734: 0x24a5ef60  addiu       $a1, $a1, -0x10A0
    ctx->pc = 0x556734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
    // 0x556738: 0xc123944  jal         func_48E510
    ctx->pc = 0x556738u;
    SET_GPR_U32(ctx, 31, 0x556740u);
    ctx->pc = 0x55673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556738u;
            // 0x55673c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556740u; }
        if (ctx->pc != 0x556740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556740u; }
        if (ctx->pc != 0x556740u) { return; }
    }
    ctx->pc = 0x556740u;
label_556740:
    // 0x556740: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x556744: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x556744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x556748: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x556748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x55674c: 0x24a5ef68  addiu       $a1, $a1, -0x1098
    ctx->pc = 0x55674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963048));
    // 0x556750: 0xc123944  jal         func_48E510
    ctx->pc = 0x556750u;
    SET_GPR_U32(ctx, 31, 0x556758u);
    ctx->pc = 0x556754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556750u;
            // 0x556754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556758u; }
        if (ctx->pc != 0x556758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556758u; }
        if (ctx->pc != 0x556758u) { return; }
    }
    ctx->pc = 0x556758u;
label_556758:
    // 0x556758: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x55675c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55675cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x556760: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x556760u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556764: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x556764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
    // 0x556768: 0xc123944  jal         func_48E510
    ctx->pc = 0x556768u;
    SET_GPR_U32(ctx, 31, 0x556770u);
    ctx->pc = 0x55676Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556768u;
            // 0x55676c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556770u; }
        if (ctx->pc != 0x556770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556770u; }
        if (ctx->pc != 0x556770u) { return; }
    }
    ctx->pc = 0x556770u;
label_556770:
    // 0x556770: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x556770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556774: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x556774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x556778: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x556778u;
    SET_GPR_U32(ctx, 31, 0x556780u);
    ctx->pc = 0x55677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556778u;
            // 0x55677c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556780u; }
        if (ctx->pc != 0x556780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556780u; }
        if (ctx->pc != 0x556780u) { return; }
    }
    ctx->pc = 0x556780u;
label_556780:
    // 0x556780: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x556780u;
    {
        const bool branch_taken_0x556780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556780) {
            ctx->pc = 0x556784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556780u;
            // 0x556784: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5567A4u;
            goto label_5567a4;
        }
    }
    ctx->pc = 0x556788u;
    // 0x556788: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x556788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x55678c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556790: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x556790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x556794: 0xc123654  jal         func_48D950
    ctx->pc = 0x556794u;
    SET_GPR_U32(ctx, 31, 0x55679Cu);
    ctx->pc = 0x556798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556794u;
            // 0x556798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55679Cu; }
        if (ctx->pc != 0x55679Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55679Cu; }
        if (ctx->pc != 0x55679Cu) { return; }
    }
    ctx->pc = 0x55679Cu;
label_55679c:
    // 0x55679c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x55679Cu;
    {
        const bool branch_taken_0x55679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5567A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55679Cu;
            // 0x5567a0: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55679c) {
            ctx->pc = 0x5567B4u;
            goto label_5567b4;
        }
    }
    ctx->pc = 0x5567A4u;
label_5567a4:
    // 0x5567a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5567a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5567a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5567a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5567ac: 0xc123654  jal         func_48D950
    ctx->pc = 0x5567ACu;
    SET_GPR_U32(ctx, 31, 0x5567B4u);
    ctx->pc = 0x5567B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5567ACu;
            // 0x5567b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567B4u; }
        if (ctx->pc != 0x5567B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567B4u; }
        if (ctx->pc != 0x5567B4u) { return; }
    }
    ctx->pc = 0x5567B4u;
label_5567b4:
    // 0x5567b4: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x5567b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x5567b8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x5567B8u;
    SET_GPR_U32(ctx, 31, 0x5567C0u);
    ctx->pc = 0x5567BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5567B8u;
            // 0x5567bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567C0u; }
        if (ctx->pc != 0x5567C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567C0u; }
        if (ctx->pc != 0x5567C0u) { return; }
    }
    ctx->pc = 0x5567C0u;
label_5567c0:
    // 0x5567c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x5567C0u;
    {
        const bool branch_taken_0x5567c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5567c0) {
            ctx->pc = 0x5567C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5567C0u;
            // 0x5567c4: 0x8ec50008  lw          $a1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5567E4u;
            goto label_5567e4;
        }
    }
    ctx->pc = 0x5567C8u;
    // 0x5567c8: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x5567c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x5567cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5567ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5567d0: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x5567d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x5567d4: 0xc123654  jal         func_48D950
    ctx->pc = 0x5567D4u;
    SET_GPR_U32(ctx, 31, 0x5567DCu);
    ctx->pc = 0x5567D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5567D4u;
            // 0x5567d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567DCu; }
        if (ctx->pc != 0x5567DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567DCu; }
        if (ctx->pc != 0x5567DCu) { return; }
    }
    ctx->pc = 0x5567DCu;
label_5567dc:
    // 0x5567dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x5567DCu;
    {
        const bool branch_taken_0x5567dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5567E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5567DCu;
            // 0x5567e0: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5567dc) {
            ctx->pc = 0x5567F4u;
            goto label_5567f4;
        }
    }
    ctx->pc = 0x5567E4u;
label_5567e4:
    // 0x5567e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5567e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5567e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5567e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5567ec: 0xc123654  jal         func_48D950
    ctx->pc = 0x5567ECu;
    SET_GPR_U32(ctx, 31, 0x5567F4u);
    ctx->pc = 0x5567F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5567ECu;
            // 0x5567f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567F4u; }
        if (ctx->pc != 0x5567F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5567F4u; }
        if (ctx->pc != 0x5567F4u) { return; }
    }
    ctx->pc = 0x5567F4u;
label_5567f4:
    // 0x5567f4: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x5567f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x5567f8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x5567F8u;
    SET_GPR_U32(ctx, 31, 0x556800u);
    ctx->pc = 0x5567FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5567F8u;
            // 0x5567fc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556800u; }
        if (ctx->pc != 0x556800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556800u; }
        if (ctx->pc != 0x556800u) { return; }
    }
    ctx->pc = 0x556800u;
label_556800:
    // 0x556800: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x556800u;
    {
        const bool branch_taken_0x556800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556800) {
            ctx->pc = 0x556804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556800u;
            // 0x556804: 0x8ee50008  lw          $a1, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556824u;
            goto label_556824;
        }
    }
    ctx->pc = 0x556808u;
    // 0x556808: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x556808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x55680c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556810: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x556810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556814: 0xc123654  jal         func_48D950
    ctx->pc = 0x556814u;
    SET_GPR_U32(ctx, 31, 0x55681Cu);
    ctx->pc = 0x556818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556814u;
            // 0x556818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55681Cu; }
        if (ctx->pc != 0x55681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55681Cu; }
        if (ctx->pc != 0x55681Cu) { return; }
    }
    ctx->pc = 0x55681Cu;
label_55681c:
    // 0x55681c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x55681Cu;
    {
        const bool branch_taken_0x55681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x556820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55681Cu;
            // 0x556820: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55681c) {
            ctx->pc = 0x556834u;
            goto label_556834;
        }
    }
    ctx->pc = 0x556824u;
label_556824:
    // 0x556824: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x556824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556828: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x556828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55682c: 0xc123654  jal         func_48D950
    ctx->pc = 0x55682Cu;
    SET_GPR_U32(ctx, 31, 0x556834u);
    ctx->pc = 0x556830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55682Cu;
            // 0x556830: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556834u; }
        if (ctx->pc != 0x556834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556834u; }
        if (ctx->pc != 0x556834u) { return; }
    }
    ctx->pc = 0x556834u;
label_556834:
    // 0x556834: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x556834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x556838: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x556838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55683c: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x55683Cu;
    SET_GPR_U32(ctx, 31, 0x556844u);
    ctx->pc = 0x556840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55683Cu;
            // 0x556840: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556844u; }
        if (ctx->pc != 0x556844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556844u; }
        if (ctx->pc != 0x556844u) { return; }
    }
    ctx->pc = 0x556844u;
label_556844:
    // 0x556844: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x556844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x556848: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x556848u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x55684c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x55684cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x556850: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x556850u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x556854: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x556854u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x556858: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x556858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x55685c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55685cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x556860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x556860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x556864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x556868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55686c: 0x3e00008  jr          $ra
    ctx->pc = 0x55686Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55686Cu;
            // 0x556870: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556874u;
    // 0x556874: 0x0  nop
    ctx->pc = 0x556874u;
    // NOP
    // 0x556878: 0x0  nop
    ctx->pc = 0x556878u;
    // NOP
    // 0x55687c: 0x0  nop
    ctx->pc = 0x55687cu;
    // NOP
}
