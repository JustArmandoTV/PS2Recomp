#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00325D30
// Address: 0x325d30 - 0x326580
void sub_00325D30_0x325d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325D30_0x325d30");
#endif

    switch (ctx->pc) {
        case 0x325d84u: goto label_325d84;
        case 0x325d9cu: goto label_325d9c;
        case 0x325db4u: goto label_325db4;
        case 0x325dccu: goto label_325dcc;
        case 0x325de4u: goto label_325de4;
        case 0x325dfcu: goto label_325dfc;
        case 0x325e0cu: goto label_325e0c;
        case 0x325e3cu: goto label_325e3c;
        case 0x325e54u: goto label_325e54;
        case 0x325e6cu: goto label_325e6c;
        case 0x325e84u: goto label_325e84;
        case 0x325e9cu: goto label_325e9c;
        case 0x325eacu: goto label_325eac;
        case 0x325edcu: goto label_325edc;
        case 0x325ef4u: goto label_325ef4;
        case 0x325f0cu: goto label_325f0c;
        case 0x325f24u: goto label_325f24;
        case 0x325f3cu: goto label_325f3c;
        case 0x325f4cu: goto label_325f4c;
        case 0x325f58u: goto label_325f58;
        case 0x325f8cu: goto label_325f8c;
        case 0x325f9cu: goto label_325f9c;
        case 0x325fb8u: goto label_325fb8;
        case 0x325fc8u: goto label_325fc8;
        case 0x325fe8u: goto label_325fe8;
        case 0x325ff0u: goto label_325ff0;
        case 0x325ffcu: goto label_325ffc;
        case 0x326034u: goto label_326034;
        case 0x326044u: goto label_326044;
        case 0x326074u: goto label_326074;
        case 0x326080u: goto label_326080;
        case 0x32608cu: goto label_32608c;
        case 0x3260c4u: goto label_3260c4;
        case 0x3260d4u: goto label_3260d4;
        case 0x3260f4u: goto label_3260f4;
        case 0x326104u: goto label_326104;
        case 0x326148u: goto label_326148;
        case 0x326160u: goto label_326160;
        case 0x326170u: goto label_326170;
        case 0x32618cu: goto label_32618c;
        case 0x3261a0u: goto label_3261a0;
        case 0x3261bcu: goto label_3261bc;
        case 0x3261d4u: goto label_3261d4;
        case 0x3261ecu: goto label_3261ec;
        case 0x326204u: goto label_326204;
        case 0x32623cu: goto label_32623c;
        case 0x326280u: goto label_326280;
        case 0x3262b8u: goto label_3262b8;
        case 0x326308u: goto label_326308;
        case 0x326324u: goto label_326324;
        case 0x326350u: goto label_326350;
        case 0x326368u: goto label_326368;
        case 0x3263a0u: goto label_3263a0;
        case 0x3263b8u: goto label_3263b8;
        case 0x326454u: goto label_326454;
        case 0x326468u: goto label_326468;
        case 0x326478u: goto label_326478;
        case 0x32649cu: goto label_32649c;
        case 0x3264c0u: goto label_3264c0;
        case 0x3264e0u: goto label_3264e0;
        case 0x3264fcu: goto label_3264fc;
        case 0x326520u: goto label_326520;
        default: break;
    }

    ctx->pc = 0x325d30u;

    // 0x325d30: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x325d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
    // 0x325d34: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325d38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x325d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x325d3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x325d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x325d40: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x325d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x325d44: 0x24a5c9d0  addiu       $a1, $a1, -0x3630
    ctx->pc = 0x325d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953424));
    // 0x325d48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x325d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x325d4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x325d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x325d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x325d54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x325d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x325d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x325d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x325d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x325d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x325d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x325d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x325d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x325d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x325d6c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x325d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x325d70: 0x24900234  addiu       $s0, $a0, 0x234
    ctx->pc = 0x325d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 564));
    // 0x325d74: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x325d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x325d78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x325d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325d7c: 0xc123944  jal         func_48E510
    ctx->pc = 0x325D7Cu;
    SET_GPR_U32(ctx, 31, 0x325D84u);
    ctx->pc = 0x325D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325D7Cu;
            // 0x325d80: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325D84u; }
        if (ctx->pc != 0x325D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325D84u; }
        if (ctx->pc != 0x325D84u) { return; }
    }
    ctx->pc = 0x325D84u;
label_325d84:
    // 0x325d84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325d88: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325d8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x325d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d90: 0x24a5c438  addiu       $a1, $a1, -0x3BC8
    ctx->pc = 0x325d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951992));
    // 0x325d94: 0xc123944  jal         func_48E510
    ctx->pc = 0x325D94u;
    SET_GPR_U32(ctx, 31, 0x325D9Cu);
    ctx->pc = 0x325D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325D94u;
            // 0x325d98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325D9Cu; }
        if (ctx->pc != 0x325D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325D9Cu; }
        if (ctx->pc != 0x325D9Cu) { return; }
    }
    ctx->pc = 0x325D9Cu;
label_325d9c:
    // 0x325d9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325da0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325da4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x325da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x325da8: 0x24a5c428  addiu       $a1, $a1, -0x3BD8
    ctx->pc = 0x325da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
    // 0x325dac: 0xc123944  jal         func_48E510
    ctx->pc = 0x325DACu;
    SET_GPR_U32(ctx, 31, 0x325DB4u);
    ctx->pc = 0x325DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325DACu;
            // 0x325db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DB4u; }
        if (ctx->pc != 0x325DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DB4u; }
        if (ctx->pc != 0x325DB4u) { return; }
    }
    ctx->pc = 0x325DB4u;
label_325db4:
    // 0x325db4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325db8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325dbc: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x325dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x325dc0: 0x24a5cb58  addiu       $a1, $a1, -0x34A8
    ctx->pc = 0x325dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953816));
    // 0x325dc4: 0xc123944  jal         func_48E510
    ctx->pc = 0x325DC4u;
    SET_GPR_U32(ctx, 31, 0x325DCCu);
    ctx->pc = 0x325DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325DC4u;
            // 0x325dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DCCu; }
        if (ctx->pc != 0x325DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DCCu; }
        if (ctx->pc != 0x325DCCu) { return; }
    }
    ctx->pc = 0x325DCCu;
label_325dcc:
    // 0x325dcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325dd0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325dd4: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x325dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x325dd8: 0x24a5cb68  addiu       $a1, $a1, -0x3498
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953832));
    // 0x325ddc: 0xc123944  jal         func_48E510
    ctx->pc = 0x325DDCu;
    SET_GPR_U32(ctx, 31, 0x325DE4u);
    ctx->pc = 0x325DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325DDCu;
            // 0x325de0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DE4u; }
        if (ctx->pc != 0x325DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DE4u; }
        if (ctx->pc != 0x325DE4u) { return; }
    }
    ctx->pc = 0x325DE4u;
label_325de4:
    // 0x325de4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325de8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325dec: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x325decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x325df0: 0x24a5caa8  addiu       $a1, $a1, -0x3558
    ctx->pc = 0x325df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953640));
    // 0x325df4: 0xc123944  jal         func_48E510
    ctx->pc = 0x325DF4u;
    SET_GPR_U32(ctx, 31, 0x325DFCu);
    ctx->pc = 0x325DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325DF4u;
            // 0x325df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DFCu; }
        if (ctx->pc != 0x325DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325DFCu; }
        if (ctx->pc != 0x325DFCu) { return; }
    }
    ctx->pc = 0x325DFCu;
label_325dfc:
    // 0x325dfc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x325dfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e00: 0x27a30360  addiu       $v1, $sp, 0x360
    ctx->pc = 0x325e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x325e04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325E04u;
    {
        const bool branch_taken_0x325e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325E04u;
            // 0x325e08: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e04) {
            ctx->pc = 0x325E28u;
            goto label_325e28;
        }
    }
    ctx->pc = 0x325E0Cu;
label_325e0c:
    // 0x325e0c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x325e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x325e10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x325e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x325e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x325e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x325e18: 0x0  nop
    ctx->pc = 0x325e18u;
    // NOP
    // 0x325e1c: 0x0  nop
    ctx->pc = 0x325e1cu;
    // NOP
    // 0x325e20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x325E20u;
    {
        const bool branch_taken_0x325e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325e20) {
            ctx->pc = 0x325E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325e0c;
        }
    }
    ctx->pc = 0x325E28u;
label_325e28:
    // 0x325e28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325e2c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325e30: 0x24a5cb78  addiu       $a1, $a1, -0x3488
    ctx->pc = 0x325e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953848));
    // 0x325e34: 0xc123944  jal         func_48E510
    ctx->pc = 0x325E34u;
    SET_GPR_U32(ctx, 31, 0x325E3Cu);
    ctx->pc = 0x325E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325E34u;
            // 0x325e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E3Cu; }
        if (ctx->pc != 0x325E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E3Cu; }
        if (ctx->pc != 0x325E3Cu) { return; }
    }
    ctx->pc = 0x325E3Cu;
label_325e3c:
    // 0x325e3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325e40: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325e44: 0xafa20360  sw          $v0, 0x360($sp)
    ctx->pc = 0x325e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 2));
    // 0x325e48: 0x24a5cb88  addiu       $a1, $a1, -0x3478
    ctx->pc = 0x325e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953864));
    // 0x325e4c: 0xc123944  jal         func_48E510
    ctx->pc = 0x325E4Cu;
    SET_GPR_U32(ctx, 31, 0x325E54u);
    ctx->pc = 0x325E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325E4Cu;
            // 0x325e50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E54u; }
        if (ctx->pc != 0x325E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E54u; }
        if (ctx->pc != 0x325E54u) { return; }
    }
    ctx->pc = 0x325E54u;
label_325e54:
    // 0x325e54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325e58: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325e5c: 0xafa20364  sw          $v0, 0x364($sp)
    ctx->pc = 0x325e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 2));
    // 0x325e60: 0x24a5cb90  addiu       $a1, $a1, -0x3470
    ctx->pc = 0x325e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953872));
    // 0x325e64: 0xc123944  jal         func_48E510
    ctx->pc = 0x325E64u;
    SET_GPR_U32(ctx, 31, 0x325E6Cu);
    ctx->pc = 0x325E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325E64u;
            // 0x325e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E6Cu; }
        if (ctx->pc != 0x325E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E6Cu; }
        if (ctx->pc != 0x325E6Cu) { return; }
    }
    ctx->pc = 0x325E6Cu;
label_325e6c:
    // 0x325e6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325e70: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325e74: 0xafa20368  sw          $v0, 0x368($sp)
    ctx->pc = 0x325e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 2));
    // 0x325e78: 0x24a5cb98  addiu       $a1, $a1, -0x3468
    ctx->pc = 0x325e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953880));
    // 0x325e7c: 0xc123944  jal         func_48E510
    ctx->pc = 0x325E7Cu;
    SET_GPR_U32(ctx, 31, 0x325E84u);
    ctx->pc = 0x325E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325E7Cu;
            // 0x325e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E84u; }
        if (ctx->pc != 0x325E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E84u; }
        if (ctx->pc != 0x325E84u) { return; }
    }
    ctx->pc = 0x325E84u;
label_325e84:
    // 0x325e84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325e88: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325e8c: 0xafa2036c  sw          $v0, 0x36C($sp)
    ctx->pc = 0x325e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 2));
    // 0x325e90: 0x24a5cba8  addiu       $a1, $a1, -0x3458
    ctx->pc = 0x325e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953896));
    // 0x325e94: 0xc123944  jal         func_48E510
    ctx->pc = 0x325E94u;
    SET_GPR_U32(ctx, 31, 0x325E9Cu);
    ctx->pc = 0x325E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325E94u;
            // 0x325e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E9Cu; }
        if (ctx->pc != 0x325E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325E9Cu; }
        if (ctx->pc != 0x325E9Cu) { return; }
    }
    ctx->pc = 0x325E9Cu;
label_325e9c:
    // 0x325e9c: 0xafa20370  sw          $v0, 0x370($sp)
    ctx->pc = 0x325e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 2));
    // 0x325ea0: 0x27a30340  addiu       $v1, $sp, 0x340
    ctx->pc = 0x325ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x325ea4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325EA4u;
    {
        const bool branch_taken_0x325ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325EA4u;
            // 0x325ea8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ea4) {
            ctx->pc = 0x325EC8u;
            goto label_325ec8;
        }
    }
    ctx->pc = 0x325EACu;
label_325eac:
    // 0x325eac: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x325eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x325eb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x325eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x325eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x325eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x325eb8: 0x0  nop
    ctx->pc = 0x325eb8u;
    // NOP
    // 0x325ebc: 0x0  nop
    ctx->pc = 0x325ebcu;
    // NOP
    // 0x325ec0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x325EC0u;
    {
        const bool branch_taken_0x325ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325ec0) {
            ctx->pc = 0x325EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325eac;
        }
    }
    ctx->pc = 0x325EC8u;
label_325ec8:
    // 0x325ec8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325ecc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325ed0: 0x24a5cbb8  addiu       $a1, $a1, -0x3448
    ctx->pc = 0x325ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953912));
    // 0x325ed4: 0xc123944  jal         func_48E510
    ctx->pc = 0x325ED4u;
    SET_GPR_U32(ctx, 31, 0x325EDCu);
    ctx->pc = 0x325ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325ED4u;
            // 0x325ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325EDCu; }
        if (ctx->pc != 0x325EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325EDCu; }
        if (ctx->pc != 0x325EDCu) { return; }
    }
    ctx->pc = 0x325EDCu;
label_325edc:
    // 0x325edc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325ee0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325ee4: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x325ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
    // 0x325ee8: 0x24a5cbd0  addiu       $a1, $a1, -0x3430
    ctx->pc = 0x325ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953936));
    // 0x325eec: 0xc123944  jal         func_48E510
    ctx->pc = 0x325EECu;
    SET_GPR_U32(ctx, 31, 0x325EF4u);
    ctx->pc = 0x325EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325EECu;
            // 0x325ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325EF4u; }
        if (ctx->pc != 0x325EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325EF4u; }
        if (ctx->pc != 0x325EF4u) { return; }
    }
    ctx->pc = 0x325EF4u;
label_325ef4:
    // 0x325ef4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325ef8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325efc: 0xafa20344  sw          $v0, 0x344($sp)
    ctx->pc = 0x325efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
    // 0x325f00: 0x24a5cbe0  addiu       $a1, $a1, -0x3420
    ctx->pc = 0x325f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953952));
    // 0x325f04: 0xc123944  jal         func_48E510
    ctx->pc = 0x325F04u;
    SET_GPR_U32(ctx, 31, 0x325F0Cu);
    ctx->pc = 0x325F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F04u;
            // 0x325f08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F0Cu; }
        if (ctx->pc != 0x325F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F0Cu; }
        if (ctx->pc != 0x325F0Cu) { return; }
    }
    ctx->pc = 0x325F0Cu;
label_325f0c:
    // 0x325f0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325f10: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325f14: 0xafa20348  sw          $v0, 0x348($sp)
    ctx->pc = 0x325f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 2));
    // 0x325f18: 0x24a5cbe8  addiu       $a1, $a1, -0x3418
    ctx->pc = 0x325f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953960));
    // 0x325f1c: 0xc123944  jal         func_48E510
    ctx->pc = 0x325F1Cu;
    SET_GPR_U32(ctx, 31, 0x325F24u);
    ctx->pc = 0x325F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F1Cu;
            // 0x325f20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F24u; }
        if (ctx->pc != 0x325F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F24u; }
        if (ctx->pc != 0x325F24u) { return; }
    }
    ctx->pc = 0x325F24u;
label_325f24:
    // 0x325f24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325f28: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x325f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x325f2c: 0xafa2034c  sw          $v0, 0x34C($sp)
    ctx->pc = 0x325f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 2));
    // 0x325f30: 0x24a5cbf8  addiu       $a1, $a1, -0x3408
    ctx->pc = 0x325f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953976));
    // 0x325f34: 0xc123944  jal         func_48E510
    ctx->pc = 0x325F34u;
    SET_GPR_U32(ctx, 31, 0x325F3Cu);
    ctx->pc = 0x325F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F34u;
            // 0x325f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F3Cu; }
        if (ctx->pc != 0x325F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F3Cu; }
        if (ctx->pc != 0x325F3Cu) { return; }
    }
    ctx->pc = 0x325F3Cu;
label_325f3c:
    // 0x325f3c: 0xafa20350  sw          $v0, 0x350($sp)
    ctx->pc = 0x325f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
    // 0x325f40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x325f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f44: 0x27b20398  addiu       $s2, $sp, 0x398
    ctx->pc = 0x325f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
    // 0x325f48: 0x27b10390  addiu       $s1, $sp, 0x390
    ctx->pc = 0x325f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_325f4c:
    // 0x325f4c: 0x27a30240  addiu       $v1, $sp, 0x240
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x325f50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325F50u;
    {
        const bool branch_taken_0x325f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325F50u;
            // 0x325f54: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f50) {
            ctx->pc = 0x325F74u;
            goto label_325f74;
        }
    }
    ctx->pc = 0x325F58u;
label_325f58:
    // 0x325f58: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x325f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x325f5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x325f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x325f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x325f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x325f64: 0x0  nop
    ctx->pc = 0x325f64u;
    // NOP
    // 0x325f68: 0x0  nop
    ctx->pc = 0x325f68u;
    // NOP
    // 0x325f6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x325F6Cu;
    {
        const bool branch_taken_0x325f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325f6c) {
            ctx->pc = 0x325F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325f58;
        }
    }
    ctx->pc = 0x325F74u;
label_325f74:
    // 0x325f74: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325f78: 0x26670001  addiu       $a3, $s3, 0x1
    ctx->pc = 0x325f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x325f7c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x325f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x325f80: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325f84: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325F84u;
    SET_GPR_U32(ctx, 31, 0x325F8Cu);
    ctx->pc = 0x325F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F84u;
            // 0x325f88: 0x24c6cc08  addiu       $a2, $a2, -0x33F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F8Cu; }
        if (ctx->pc != 0x325F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F8Cu; }
        if (ctx->pc != 0x325F8Cu) { return; }
    }
    ctx->pc = 0x325F8Cu;
label_325f8c:
    // 0x325f8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325f90: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x325f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x325f94: 0xc123944  jal         func_48E510
    ctx->pc = 0x325F94u;
    SET_GPR_U32(ctx, 31, 0x325F9Cu);
    ctx->pc = 0x325F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325F94u;
            // 0x325f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F9Cu; }
        if (ctx->pc != 0x325F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325F9Cu; }
        if (ctx->pc != 0x325F9Cu) { return; }
    }
    ctx->pc = 0x325F9Cu;
label_325f9c:
    // 0x325f9c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325fa0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x325fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x325fa4: 0x26670001  addiu       $a3, $s3, 0x1
    ctx->pc = 0x325fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x325fa8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x325fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x325fac: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325fb0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325FB0u;
    SET_GPR_U32(ctx, 31, 0x325FB8u);
    ctx->pc = 0x325FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325FB0u;
            // 0x325fb4: 0x24c6cc18  addiu       $a2, $a2, -0x33E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325FB8u; }
        if (ctx->pc != 0x325FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325FB8u; }
        if (ctx->pc != 0x325FB8u) { return; }
    }
    ctx->pc = 0x325FB8u;
label_325fb8:
    // 0x325fb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325fbc: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x325fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x325fc0: 0xc123944  jal         func_48E510
    ctx->pc = 0x325FC0u;
    SET_GPR_U32(ctx, 31, 0x325FC8u);
    ctx->pc = 0x325FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325FC0u;
            // 0x325fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325FC8u; }
        if (ctx->pc != 0x325FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325FC8u; }
        if (ctx->pc != 0x325FC8u) { return; }
    }
    ctx->pc = 0x325FC8u;
label_325fc8:
    // 0x325fc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x325fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x325fcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x325fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x325fd0: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x325fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x325fd4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x325fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x325fd8: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x325FD8u;
    {
        const bool branch_taken_0x325fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325FD8u;
            // 0x325fdc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fd8) {
            ctx->pc = 0x325F4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325f4c;
        }
    }
    ctx->pc = 0x325FE0u;
    // 0x325fe0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x325fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fe4: 0x27b40310  addiu       $s4, $sp, 0x310
    ctx->pc = 0x325fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_325fe8:
    // 0x325fe8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x325fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fec: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x325fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_325ff0:
    // 0x325ff0: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x325ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x325ff4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325FF4u;
    {
        const bool branch_taken_0x325ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325FF4u;
            // 0x325ff8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ff4) {
            ctx->pc = 0x326018u;
            goto label_326018;
        }
    }
    ctx->pc = 0x325FFCu;
label_325ffc:
    // 0x325ffc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x325ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x326000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x326004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326008: 0x0  nop
    ctx->pc = 0x326008u;
    // NOP
    // 0x32600c: 0x0  nop
    ctx->pc = 0x32600cu;
    // NOP
    // 0x326010: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x326010u;
    {
        const bool branch_taken_0x326010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326010) {
            ctx->pc = 0x325FFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325ffc;
        }
    }
    ctx->pc = 0x326018u;
label_326018:
    // 0x326018: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x326018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32601c: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x32601cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x326020: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326024: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x326024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x326028: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x326028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x32602c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32602Cu;
    SET_GPR_U32(ctx, 31, 0x326034u);
    ctx->pc = 0x326030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32602Cu;
            // 0x326030: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326034u; }
        if (ctx->pc != 0x326034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326034u; }
        if (ctx->pc != 0x326034u) { return; }
    }
    ctx->pc = 0x326034u;
label_326034:
    // 0x326034: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x326034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326038: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x326038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x32603c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32603Cu;
    SET_GPR_U32(ctx, 31, 0x326044u);
    ctx->pc = 0x326040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32603Cu;
            // 0x326040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326044u; }
        if (ctx->pc != 0x326044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326044u; }
        if (ctx->pc != 0x326044u) { return; }
    }
    ctx->pc = 0x326044u;
label_326044:
    // 0x326044: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x326048: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x326048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x32604c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x32604cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x326050: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x326050u;
    {
        const bool branch_taken_0x326050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326050u;
            // 0x326054: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326050) {
            ctx->pc = 0x325FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325ff0;
        }
    }
    ctx->pc = 0x326058u;
    // 0x326058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x326058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32605c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x32605cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x326060: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x326060u;
    {
        const bool branch_taken_0x326060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326060u;
            // 0x326064: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326060) {
            ctx->pc = 0x325FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_325fe8;
        }
    }
    ctx->pc = 0x326068u;
    // 0x326068: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x326068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32606c: 0x27b702e0  addiu       $s7, $sp, 0x2E0
    ctx->pc = 0x32606cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x326070: 0x27be02b0  addiu       $fp, $sp, 0x2B0
    ctx->pc = 0x326070u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_326074:
    // 0x326074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x326074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326078: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x326078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32607c: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x32607cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_326080:
    // 0x326080: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x326080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x326084: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x326084u;
    {
        const bool branch_taken_0x326084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326084u;
            // 0x326088: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326084) {
            ctx->pc = 0x3260A8u;
            goto label_3260a8;
        }
    }
    ctx->pc = 0x32608Cu;
label_32608c:
    // 0x32608c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x32608cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x326090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x326094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326098: 0x0  nop
    ctx->pc = 0x326098u;
    // NOP
    // 0x32609c: 0x0  nop
    ctx->pc = 0x32609cu;
    // NOP
    // 0x3260a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3260A0u;
    {
        const bool branch_taken_0x3260a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3260a0) {
            ctx->pc = 0x32608Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32608c;
        }
    }
    ctx->pc = 0x3260A8u;
label_3260a8:
    // 0x3260a8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3260a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3260ac: 0x26870004  addiu       $a3, $s4, 0x4
    ctx->pc = 0x3260acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3260b0: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x3260b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3260b4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3260b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3260b8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3260bc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3260BCu;
    SET_GPR_U32(ctx, 31, 0x3260C4u);
    ctx->pc = 0x3260C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3260BCu;
            // 0x3260c0: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3260C4u; }
        if (ctx->pc != 0x3260C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3260C4u; }
        if (ctx->pc != 0x3260C4u) { return; }
    }
    ctx->pc = 0x3260C4u;
label_3260c4:
    // 0x3260c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3260c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3260c8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x3260c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3260cc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3260CCu;
    SET_GPR_U32(ctx, 31, 0x3260D4u);
    ctx->pc = 0x3260D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3260CCu;
            // 0x3260d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3260D4u; }
        if (ctx->pc != 0x3260D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3260D4u; }
        if (ctx->pc != 0x3260D4u) { return; }
    }
    ctx->pc = 0x3260D4u;
label_3260d4:
    // 0x3260d4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3260d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3260d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3260d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3260dc: 0x26870007  addiu       $a3, $s4, 0x7
    ctx->pc = 0x3260dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
    // 0x3260e0: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x3260e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3260e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3260e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3260e8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3260e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3260ec: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3260ECu;
    SET_GPR_U32(ctx, 31, 0x3260F4u);
    ctx->pc = 0x3260F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3260ECu;
            // 0x3260f0: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3260F4u; }
        if (ctx->pc != 0x3260F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3260F4u; }
        if (ctx->pc != 0x3260F4u) { return; }
    }
    ctx->pc = 0x3260F4u;
label_3260f4:
    // 0x3260f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3260f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3260f8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x3260f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3260fc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3260FCu;
    SET_GPR_U32(ctx, 31, 0x326104u);
    ctx->pc = 0x326100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3260FCu;
            // 0x326100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326104u; }
        if (ctx->pc != 0x326104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326104u; }
        if (ctx->pc != 0x326104u) { return; }
    }
    ctx->pc = 0x326104u;
label_326104:
    // 0x326104: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x326108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x326108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32610c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x32610cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x326110: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x326110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x326114: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x326114u;
    {
        const bool branch_taken_0x326114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326114u;
            // 0x326118: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326114) {
            ctx->pc = 0x326080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_326080;
        }
    }
    ctx->pc = 0x32611Cu;
    // 0x32611c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32611cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x326120: 0x26f70014  addiu       $s7, $s7, 0x14
    ctx->pc = 0x326120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x326124: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x326124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x326128: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x326128u;
    {
        const bool branch_taken_0x326128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326128u;
            // 0x32612c: 0x27de0014  addiu       $fp, $fp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326128) {
            ctx->pc = 0x326074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_326074;
        }
    }
    ctx->pc = 0x326130u;
    // 0x326130: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x326130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x326134: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326138: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x326138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x32613c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32613cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326140: 0xc123654  jal         func_48D950
    ctx->pc = 0x326140u;
    SET_GPR_U32(ctx, 31, 0x326148u);
    ctx->pc = 0x326144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326140u;
            // 0x326144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326148u; }
        if (ctx->pc != 0x326148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326148u; }
        if (ctx->pc != 0x326148u) { return; }
    }
    ctx->pc = 0x326148u;
label_326148:
    // 0x326148: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x326148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x32614c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326150: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x326150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326154: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x326154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326158: 0xc123654  jal         func_48D950
    ctx->pc = 0x326158u;
    SET_GPR_U32(ctx, 31, 0x326160u);
    ctx->pc = 0x32615Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326158u;
            // 0x32615c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326160u; }
        if (ctx->pc != 0x326160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326160u; }
        if (ctx->pc != 0x326160u) { return; }
    }
    ctx->pc = 0x326160u;
label_326160:
    // 0x326160: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x326160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x326164: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x326164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x326168: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x326168u;
    SET_GPR_U32(ctx, 31, 0x326170u);
    ctx->pc = 0x32616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326168u;
            // 0x32616c: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326170u; }
        if (ctx->pc != 0x326170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326170u; }
        if (ctx->pc != 0x326170u) { return; }
    }
    ctx->pc = 0x326170u;
label_326170:
    // 0x326170: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x326170u;
    {
        const bool branch_taken_0x326170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326170) {
            ctx->pc = 0x326174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326170u;
            // 0x326174: 0x8fa2039c  lw          $v0, 0x39C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3261A8u;
            goto label_3261a8;
        }
    }
    ctx->pc = 0x326178u;
    // 0x326178: 0x8fa6039c  lw          $a2, 0x39C($sp)
    ctx->pc = 0x326178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
    // 0x32617c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326180: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x326180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x326184: 0xc123654  jal         func_48D950
    ctx->pc = 0x326184u;
    SET_GPR_U32(ctx, 31, 0x32618Cu);
    ctx->pc = 0x326188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326184u;
            // 0x326188: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32618Cu; }
        if (ctx->pc != 0x32618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32618Cu; }
        if (ctx->pc != 0x32618Cu) { return; }
    }
    ctx->pc = 0x32618Cu;
label_32618c:
    // 0x32618c: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x32618cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
    // 0x326190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326194: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x326194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x326198: 0xc123654  jal         func_48D950
    ctx->pc = 0x326198u;
    SET_GPR_U32(ctx, 31, 0x3261A0u);
    ctx->pc = 0x32619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326198u;
            // 0x32619c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261A0u; }
        if (ctx->pc != 0x3261A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261A0u; }
        if (ctx->pc != 0x3261A0u) { return; }
    }
    ctx->pc = 0x3261A0u;
label_3261a0:
    // 0x3261a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3261A0u;
    {
        const bool branch_taken_0x3261a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3261A0u;
            // 0x3261a4: 0x8fa202e0  lw          $v0, 0x2E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261a0) {
            ctx->pc = 0x3261D8u;
            goto label_3261d8;
        }
    }
    ctx->pc = 0x3261A8u;
label_3261a8:
    // 0x3261a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3261a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261ac: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x3261acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3261b0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3261b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3261b4: 0xc123654  jal         func_48D950
    ctx->pc = 0x3261B4u;
    SET_GPR_U32(ctx, 31, 0x3261BCu);
    ctx->pc = 0x3261B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3261B4u;
            // 0x3261b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261BCu; }
        if (ctx->pc != 0x3261BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261BCu; }
        if (ctx->pc != 0x3261BCu) { return; }
    }
    ctx->pc = 0x3261BCu;
label_3261bc:
    // 0x3261bc: 0x8fa20394  lw          $v0, 0x394($sp)
    ctx->pc = 0x3261bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
    // 0x3261c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3261c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3261c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261c8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3261c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3261cc: 0xc123654  jal         func_48D950
    ctx->pc = 0x3261CCu;
    SET_GPR_U32(ctx, 31, 0x3261D4u);
    ctx->pc = 0x3261D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3261CCu;
            // 0x3261d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261D4u; }
        if (ctx->pc != 0x3261D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261D4u; }
        if (ctx->pc != 0x3261D4u) { return; }
    }
    ctx->pc = 0x3261D4u;
label_3261d4:
    // 0x3261d4: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x3261d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_3261d8:
    // 0x3261d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3261d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261dc: 0x8fa60360  lw          $a2, 0x360($sp)
    ctx->pc = 0x3261dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x3261e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3261e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3261e4: 0xc123654  jal         func_48D950
    ctx->pc = 0x3261E4u;
    SET_GPR_U32(ctx, 31, 0x3261ECu);
    ctx->pc = 0x3261E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3261E4u;
            // 0x3261e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261ECu; }
        if (ctx->pc != 0x3261ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3261ECu; }
        if (ctx->pc != 0x3261ECu) { return; }
    }
    ctx->pc = 0x3261ECu;
label_3261ec:
    // 0x3261ec: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x3261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x3261f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3261f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3261f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261f8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3261f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3261fc: 0xc123654  jal         func_48D950
    ctx->pc = 0x3261FCu;
    SET_GPR_U32(ctx, 31, 0x326204u);
    ctx->pc = 0x326200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3261FCu;
            // 0x326200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326204u; }
        if (ctx->pc != 0x326204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326204u; }
        if (ctx->pc != 0x326204u) { return; }
    }
    ctx->pc = 0x326204u;
label_326204:
    // 0x326204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x326208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32620c: 0xa3a20380  sb          $v0, 0x380($sp)
    ctx->pc = 0x32620cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 896), (uint8_t)GPR_U32(ctx, 2));
    // 0x326210: 0x27a20380  addiu       $v0, $sp, 0x380
    ctx->pc = 0x326210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x326214: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x326214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x326218: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x326218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32621c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x32621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x326220: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x326220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x326224: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x326224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x326228: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x32622c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x32622cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x326230: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x326230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x326234: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x326234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x326238: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x326238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_32623c:
    // 0x32623c: 0x8fb40120  lw          $s4, 0x120($sp)
    ctx->pc = 0x32623cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x326240: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x326240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x326244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x326244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326248: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x326248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32624c: 0x27be0360  addiu       $fp, $sp, 0x360
    ctx->pc = 0x32624cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x326250: 0x8fb70110  lw          $s7, 0x110($sp)
    ctx->pc = 0x326250u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x326254: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x326254u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x326258: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x326258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x32625c: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x32625cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x326260: 0x24420385  addiu       $v0, $v0, 0x385
    ctx->pc = 0x326260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 901));
    // 0x326264: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x326264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x326268: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x326268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32626c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x32626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x326270: 0x246202f4  addiu       $v0, $v1, 0x2F4
    ctx->pc = 0x326270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 756));
    // 0x326274: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x326274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x326278: 0x246202c4  addiu       $v0, $v1, 0x2C4
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 708));
    // 0x32627c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_326280:
    // 0x326280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x326280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326284: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326284u;
    {
        const bool branch_taken_0x326284 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x326284) {
            ctx->pc = 0x3262A0u;
            goto label_3262a0;
        }
    }
    ctx->pc = 0x32628Cu;
    // 0x32628c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32628Cu;
    {
        const bool branch_taken_0x32628c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32628c) {
            ctx->pc = 0x3262A8u;
            goto label_3262a8;
        }
    }
    ctx->pc = 0x326294u;
    // 0x326294: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x326294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x326298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x326298u;
    {
        const bool branch_taken_0x326298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326298u;
            // 0x32629c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326298) {
            ctx->pc = 0x3262A8u;
            goto label_3262a8;
        }
    }
    ctx->pc = 0x3262A0u;
label_3262a0:
    // 0x3262a0: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x3262a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3262a4: 0x0  nop
    ctx->pc = 0x3262a4u;
    // NOP
label_3262a8:
    // 0x3262a8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x3262a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3262ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3262acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262b0: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x3262B0u;
    SET_GPR_U32(ctx, 31, 0x3262B8u);
    ctx->pc = 0x3262B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3262B0u;
            // 0x3262b4: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3262B8u; }
        if (ctx->pc != 0x3262B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3262B8u; }
        if (ctx->pc != 0x3262B8u) { return; }
    }
    ctx->pc = 0x3262B8u;
label_3262b8:
    // 0x3262b8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3262B8u;
    {
        const bool branch_taken_0x3262b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3262b8) {
            ctx->pc = 0x3263C0u;
            goto label_3263c0;
        }
    }
    ctx->pc = 0x3262C0u;
    // 0x3262c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3262c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3262c4: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3262C4u;
    {
        const bool branch_taken_0x3262c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3262c4) {
            ctx->pc = 0x326378u;
            goto label_326378;
        }
    }
    ctx->pc = 0x3262CCu;
    // 0x3262cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3262CCu;
    {
        const bool branch_taken_0x3262cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3262cc) {
            ctx->pc = 0x3262E0u;
            goto label_3262e0;
        }
    }
    ctx->pc = 0x3262D4u;
    // 0x3262d4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3262D4u;
    {
        const bool branch_taken_0x3262d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3262d4) {
            ctx->pc = 0x3263C0u;
            goto label_3263c0;
        }
    }
    ctx->pc = 0x3262DCu;
    // 0x3262dc: 0x0  nop
    ctx->pc = 0x3262dcu;
    // NOP
label_3262e0:
    // 0x3262e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3262e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3262e4: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3262E4u;
    {
        const bool branch_taken_0x3262e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3262e4) {
            ctx->pc = 0x326338u;
            goto label_326338;
        }
    }
    ctx->pc = 0x3262ECu;
    // 0x3262ec: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3262ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3262f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3262f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262f4: 0x8fa60340  lw          $a2, 0x340($sp)
    ctx->pc = 0x3262f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x3262f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3262f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3262fc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3262fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326300: 0xc123654  jal         func_48D950
    ctx->pc = 0x326300u;
    SET_GPR_U32(ctx, 31, 0x326308u);
    ctx->pc = 0x326304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326300u;
            // 0x326304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326308u; }
        if (ctx->pc != 0x326308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326308u; }
        if (ctx->pc != 0x326308u) { return; }
    }
    ctx->pc = 0x326308u;
label_326308:
    // 0x326308: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x326308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32630c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326310: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x326310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326314: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x326314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326318: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x326318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32631c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32631Cu;
    SET_GPR_U32(ctx, 31, 0x326324u);
    ctx->pc = 0x326320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32631Cu;
            // 0x326320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326324u; }
        if (ctx->pc != 0x326324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326324u; }
        if (ctx->pc != 0x326324u) { return; }
    }
    ctx->pc = 0x326324u;
label_326324:
    // 0x326324: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x326324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x326328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32632c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x32632Cu;
    {
        const bool branch_taken_0x32632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32632Cu;
            // 0x326330: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32632c) {
            ctx->pc = 0x3263C0u;
            goto label_3263c0;
        }
    }
    ctx->pc = 0x326334u;
    // 0x326334: 0x0  nop
    ctx->pc = 0x326334u;
    // NOP
label_326338:
    // 0x326338: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x326338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32633c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x32633cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x326340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326344: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x326344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326348: 0xc123654  jal         func_48D950
    ctx->pc = 0x326348u;
    SET_GPR_U32(ctx, 31, 0x326350u);
    ctx->pc = 0x32634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326348u;
            // 0x32634c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326350u; }
        if (ctx->pc != 0x326350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326350u; }
        if (ctx->pc != 0x326350u) { return; }
    }
    ctx->pc = 0x326350u;
label_326350:
    // 0x326350: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x326350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x326354: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326358: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x326358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32635c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32635cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326360: 0xc123654  jal         func_48D950
    ctx->pc = 0x326360u;
    SET_GPR_U32(ctx, 31, 0x326368u);
    ctx->pc = 0x326364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326360u;
            // 0x326364: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326368u; }
        if (ctx->pc != 0x326368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326368u; }
        if (ctx->pc != 0x326368u) { return; }
    }
    ctx->pc = 0x326368u;
label_326368:
    // 0x326368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32636c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32636Cu;
    {
        const bool branch_taken_0x32636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32636Cu;
            // 0x326370: 0xa2820001  sb          $v0, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32636c) {
            ctx->pc = 0x3263C0u;
            goto label_3263c0;
        }
    }
    ctx->pc = 0x326374u;
    // 0x326374: 0x0  nop
    ctx->pc = 0x326374u;
    // NOP
label_326378:
    // 0x326378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x326378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32637c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32637Cu;
    {
        const bool branch_taken_0x32637c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x32637c) {
            ctx->pc = 0x3263C0u;
            goto label_3263c0;
        }
    }
    ctx->pc = 0x326384u;
    // 0x326384: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x326384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x326388: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32638c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x32638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x326390: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x326390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x326394: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x326394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x326398: 0xc123654  jal         func_48D950
    ctx->pc = 0x326398u;
    SET_GPR_U32(ctx, 31, 0x3263A0u);
    ctx->pc = 0x32639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326398u;
            // 0x32639c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3263A0u; }
        if (ctx->pc != 0x3263A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3263A0u; }
        if (ctx->pc != 0x3263A0u) { return; }
    }
    ctx->pc = 0x3263A0u;
label_3263a0:
    // 0x3263a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3263a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3263a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3263a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3263a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3263b0: 0xc123654  jal         func_48D950
    ctx->pc = 0x3263B0u;
    SET_GPR_U32(ctx, 31, 0x3263B8u);
    ctx->pc = 0x3263B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3263B0u;
            // 0x3263b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3263B8u; }
        if (ctx->pc != 0x3263B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3263B8u; }
        if (ctx->pc != 0x3263B8u) { return; }
    }
    ctx->pc = 0x3263B8u;
label_3263b8:
    // 0x3263b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3263b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3263bc: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x3263bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_3263c0:
    // 0x3263c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3263c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3263c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3263c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3263c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3263cc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3263ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3263d0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3263d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3263d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3263d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3263d8: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x3263d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x3263dc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x3263dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x3263e0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x3263e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3263e4: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x3263E4u;
    {
        const bool branch_taken_0x3263e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3263E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3263E4u;
            // 0x3263e8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263e4) {
            ctx->pc = 0x326280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_326280;
        }
    }
    ctx->pc = 0x3263ECu;
    // 0x3263ec: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x3263ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3263f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3263f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3263f4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3263f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x3263f8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x3263f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x3263fc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3263fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x326400: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x326400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x326404: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x326404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x326408: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x326408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32640c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x32640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x326410: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x326410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x326414: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x326414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x326418: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x326418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x32641c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x32641cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x326420: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x326420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x326424: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x326424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x326428: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x326428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x32642c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x32642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x326430: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x326430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x326434: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x326434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x326438: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x326438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32643c: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
    ctx->pc = 0x32643Cu;
    {
        const bool branch_taken_0x32643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32643c) {
            ctx->pc = 0x326440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32643Cu;
            // 0x326440: 0x27a20340  addiu       $v0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32623Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32623c;
        }
    }
    ctx->pc = 0x326444u;
    // 0x326444: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x326444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326448: 0x27b60380  addiu       $s6, $sp, 0x380
    ctx->pc = 0x326448u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x32644c: 0x27b70310  addiu       $s7, $sp, 0x310
    ctx->pc = 0x32644cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x326450: 0x241e000d  addiu       $fp, $zero, 0xD
    ctx->pc = 0x326450u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_326454:
    // 0x326454: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x326454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326458: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x326458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32645c: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x32645cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326460: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x326460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326464: 0x0  nop
    ctx->pc = 0x326464u;
    // NOP
label_326468:
    // 0x326468: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x326468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x32646c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32646cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326470: 0xc1204c0  jal         func_481300
    ctx->pc = 0x326470u;
    SET_GPR_U32(ctx, 31, 0x326478u);
    ctx->pc = 0x326474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326470u;
            // 0x326474: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481300u;
    if (runtime->hasFunction(0x481300u)) {
        auto targetFn = runtime->lookupFunction(0x481300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326478u; }
        if (ctx->pc != 0x326478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481300_0x481300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326478u; }
        if (ctx->pc != 0x326478u) { return; }
    }
    ctx->pc = 0x326478u;
label_326478:
    // 0x326478: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x326478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32647c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x32647cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x326480: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x326480u;
    {
        const bool branch_taken_0x326480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326480) {
            ctx->pc = 0x3264A8u;
            goto label_3264a8;
        }
    }
    ctx->pc = 0x326488u;
    // 0x326488: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x326488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32648c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326490: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x326490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x326494: 0xc123654  jal         func_48D950
    ctx->pc = 0x326494u;
    SET_GPR_U32(ctx, 31, 0x32649Cu);
    ctx->pc = 0x326498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326494u;
            // 0x326498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32649Cu; }
        if (ctx->pc != 0x32649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32649Cu; }
        if (ctx->pc != 0x32649Cu) { return; }
    }
    ctx->pc = 0x32649Cu;
label_32649c:
    // 0x32649c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x32649Cu;
    {
        const bool branch_taken_0x32649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32649c) {
            ctx->pc = 0x326520u;
            goto label_326520;
        }
    }
    ctx->pc = 0x3264A4u;
    // 0x3264a4: 0x0  nop
    ctx->pc = 0x3264a4u;
    // NOP
label_3264a8:
    // 0x3264a8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3264A8u;
    {
        const bool branch_taken_0x3264a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3264a8) {
            ctx->pc = 0x326508u;
            goto label_326508;
        }
    }
    ctx->pc = 0x3264B0u;
    // 0x3264b0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x3264b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3264b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3264b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264b8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x3264B8u;
    SET_GPR_U32(ctx, 31, 0x3264C0u);
    ctx->pc = 0x3264BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3264B8u;
            // 0x3264bc: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3264C0u; }
        if (ctx->pc != 0x3264C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3264C0u; }
        if (ctx->pc != 0x3264C0u) { return; }
    }
    ctx->pc = 0x3264C0u;
label_3264c0:
    // 0x3264c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3264C0u;
    {
        const bool branch_taken_0x3264c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3264c0) {
            ctx->pc = 0x3264E8u;
            goto label_3264e8;
        }
    }
    ctx->pc = 0x3264C8u;
    // 0x3264c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3264c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3264cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3264ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264d0: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x3264d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3264d4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3264d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3264d8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3264D8u;
    SET_GPR_U32(ctx, 31, 0x3264E0u);
    ctx->pc = 0x3264DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3264D8u;
            // 0x3264dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3264E0u; }
        if (ctx->pc != 0x3264E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3264E0u; }
        if (ctx->pc != 0x3264E0u) { return; }
    }
    ctx->pc = 0x3264E0u;
label_3264e0:
    // 0x3264e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3264E0u;
    {
        const bool branch_taken_0x3264e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3264e0) {
            ctx->pc = 0x326520u;
            goto label_326520;
        }
    }
    ctx->pc = 0x3264E8u;
label_3264e8:
    // 0x3264e8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3264e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3264ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3264ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264f0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3264f4: 0xc123654  jal         func_48D950
    ctx->pc = 0x3264F4u;
    SET_GPR_U32(ctx, 31, 0x3264FCu);
    ctx->pc = 0x3264F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3264F4u;
            // 0x3264f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3264FCu; }
        if (ctx->pc != 0x3264FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3264FCu; }
        if (ctx->pc != 0x3264FCu) { return; }
    }
    ctx->pc = 0x3264FCu;
label_3264fc:
    // 0x3264fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3264FCu;
    {
        const bool branch_taken_0x3264fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3264fc) {
            ctx->pc = 0x326520u;
            goto label_326520;
        }
    }
    ctx->pc = 0x326504u;
    // 0x326504: 0x0  nop
    ctx->pc = 0x326504u;
    // NOP
label_326508:
    // 0x326508: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x326508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32650c: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x32650cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x326510: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326514: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x326514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x326518: 0xc123654  jal         func_48D950
    ctx->pc = 0x326518u;
    SET_GPR_U32(ctx, 31, 0x326520u);
    ctx->pc = 0x32651Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326518u;
            // 0x32651c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326520u; }
        if (ctx->pc != 0x326520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326520u; }
        if (ctx->pc != 0x326520u) { return; }
    }
    ctx->pc = 0x326520u;
label_326520:
    // 0x326520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x326520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326524: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x326524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x326528: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x326528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x32652c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x32652cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x326530: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x326530u;
    {
        const bool branch_taken_0x326530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x326534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326530u;
            // 0x326534: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326530) {
            ctx->pc = 0x326468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_326468;
        }
    }
    ctx->pc = 0x326538u;
    // 0x326538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x326538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32653c: 0x26d60005  addiu       $s6, $s6, 0x5
    ctx->pc = 0x32653cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 5));
    // 0x326540: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x326540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x326544: 0x26f70014  addiu       $s7, $s7, 0x14
    ctx->pc = 0x326544u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x326548: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x326548u;
    {
        const bool branch_taken_0x326548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326548u;
            // 0x32654c: 0x27de0005  addiu       $fp, $fp, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326548) {
            ctx->pc = 0x326454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_326454;
        }
    }
    ctx->pc = 0x326550u;
    // 0x326550: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x326550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x326554: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x326554u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x326558: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x326558u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32655c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32655cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x326560: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x326560u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x326564: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x326564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326568: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32656c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32656cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326578: 0x3e00008  jr          $ra
    ctx->pc = 0x326578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326578u;
            // 0x32657c: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x326580u;
}
