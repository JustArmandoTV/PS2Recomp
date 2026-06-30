#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001462B0
// Address: 0x1462b0 - 0x146380
void sub_001462B0_0x1462b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001462B0_0x1462b0");
#endif

    switch (ctx->pc) {
        case 0x146310u: goto label_146310;
        case 0x146338u: goto label_146338;
        case 0x14635cu: goto label_14635c;
        case 0x146368u: goto label_146368;
        default: break;
    }

    ctx->pc = 0x1462b0u;

    // 0x1462b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1462b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1462b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1462b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1462b8: 0x24180  sll         $t0, $v0, 6
    ctx->pc = 0x1462b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1462bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1462bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1462c0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1462c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1462c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1462c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1462c8: 0x231c0  sll         $a2, $v0, 7
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1462cc: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x1462ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1462d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1462d4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1462d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1462d8: 0x90492059  lbu         $t1, 0x2059($v0)
    ctx->pc = 0x1462d8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8281)));
    // 0x1462dc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1462e0: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x1462e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1462e4: 0xaf808314  sw          $zero, -0x7CEC($gp)
    ctx->pc = 0x1462e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 0));
    // 0x1462e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1462e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462ec: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1462ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1462f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1462f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1462f4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1462f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1462f8: 0xa0872059  sb          $a3, 0x2059($a0)
    ctx->pc = 0x1462f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8281), (uint8_t)GPR_U32(ctx, 7));
    // 0x1462fc: 0x90632059  lbu         $v1, 0x2059($v1)
    ctx->pc = 0x1462fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8281)));
    // 0x146300: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x146300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x146304: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x146304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x146308: 0xa0432059  sb          $v1, 0x2059($v0)
    ctx->pc = 0x146308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8281), (uint8_t)GPR_U32(ctx, 3));
    // 0x14630c: 0x26020047  addiu       $v0, $s0, 0x47
    ctx->pc = 0x14630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
label_146310:
    // 0x146310: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146314: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x146314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x146318: 0x8f858314  lw          $a1, -0x7CEC($gp)
    ctx->pc = 0x146318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x14631c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146320: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x146320u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x146324: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x146324u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x146328: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x146328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x14632c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146330: 0xc057540  jal         func_15D500
    ctx->pc = 0x146330u;
    SET_GPR_U32(ctx, 31, 0x146338u);
    ctx->pc = 0x146334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146330u;
            // 0x146334: 0xaf828314  sw          $v0, -0x7CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146338u; }
        if (ctx->pc != 0x146338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146338u; }
        if (ctx->pc != 0x146338u) { return; }
    }
    ctx->pc = 0x146338u;
label_146338:
    // 0x146338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14633c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x14633cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146340: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x146340u;
    {
        const bool branch_taken_0x146340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146340) {
            ctx->pc = 0x146344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146340u;
            // 0x146344: 0x26020047  addiu       $v0, $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146310;
        }
    }
    ctx->pc = 0x146348u;
    // 0x146348: 0x8f868314  lw          $a2, -0x7CEC($gp)
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x14634c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14634cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146350: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x146350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x146354: 0xc05750c  jal         func_15D430
    ctx->pc = 0x146354u;
    SET_GPR_U32(ctx, 31, 0x14635Cu);
    ctx->pc = 0x146358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146354u;
            // 0x146358: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14635Cu; }
        if (ctx->pc != 0x14635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14635Cu; }
        if (ctx->pc != 0x14635Cu) { return; }
    }
    ctx->pc = 0x14635Cu;
label_14635c:
    // 0x14635c: 0xaf828310  sw          $v0, -0x7CF0($gp)
    ctx->pc = 0x14635cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935312), GPR_U32(ctx, 2));
    // 0x146360: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x146360u;
    SET_GPR_U32(ctx, 31, 0x146368u);
    ctx->pc = 0x146364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146360u;
            // 0x146364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146368u; }
        if (ctx->pc != 0x146368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146368u; }
        if (ctx->pc != 0x146368u) { return; }
    }
    ctx->pc = 0x146368u;
label_146368:
    // 0x146368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14636c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14636cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146370: 0x3e00008  jr          $ra
    ctx->pc = 0x146370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146370u;
            // 0x146374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146378u;
    // 0x146378: 0x0  nop
    ctx->pc = 0x146378u;
    // NOP
    // 0x14637c: 0x0  nop
    ctx->pc = 0x14637cu;
    // NOP
}
