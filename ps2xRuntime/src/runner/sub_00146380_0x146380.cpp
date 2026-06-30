#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146380
// Address: 0x146380 - 0x146430
void sub_00146380_0x146380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146380_0x146380");
#endif

    switch (ctx->pc) {
        case 0x1463bcu: goto label_1463bc;
        case 0x1463e4u: goto label_1463e4;
        case 0x146408u: goto label_146408;
        case 0x146414u: goto label_146414;
        default: break;
    }

    ctx->pc = 0x146380u;

    // 0x146380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146384: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x146384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x146388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14638c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14638cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x146390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146394: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146398: 0x9045205a  lbu         $a1, 0x205A($v0)
    ctx->pc = 0x146398u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8282)));
    // 0x14639c: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x1463a0: 0xaf808314  sw          $zero, -0x7CEC($gp)
    ctx->pc = 0x1463a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 0));
    // 0x1463a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1463a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1463a8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1463a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1463ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1463b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1463b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1463b4: 0xa043205a  sb          $v1, 0x205A($v0)
    ctx->pc = 0x1463b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8282), (uint8_t)GPR_U32(ctx, 3));
    // 0x1463b8: 0x26020047  addiu       $v0, $s0, 0x47
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
label_1463bc:
    // 0x1463bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1463c0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1463c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1463c4: 0x8f858314  lw          $a1, -0x7CEC($gp)
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x1463c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1463cc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1463ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1463d0: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x1463d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x1463d4: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1463d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1463d8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1463d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1463dc: 0xc057540  jal         func_15D500
    ctx->pc = 0x1463DCu;
    SET_GPR_U32(ctx, 31, 0x1463E4u);
    ctx->pc = 0x1463E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1463DCu;
            // 0x1463e0: 0xaf828314  sw          $v0, -0x7CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1463E4u; }
        if (ctx->pc != 0x1463E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1463E4u; }
        if (ctx->pc != 0x1463E4u) { return; }
    }
    ctx->pc = 0x1463E4u;
label_1463e4:
    // 0x1463e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1463e8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1463e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1463ec: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1463ECu;
    {
        const bool branch_taken_0x1463ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1463ec) {
            ctx->pc = 0x1463F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1463ECu;
            // 0x1463f0: 0x26020047  addiu       $v0, $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1463BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1463bc;
        }
    }
    ctx->pc = 0x1463F4u;
    // 0x1463f4: 0x8f868314  lw          $a2, -0x7CEC($gp)
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x1463f8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1463f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1463fc: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1463fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x146400: 0xc05750c  jal         func_15D430
    ctx->pc = 0x146400u;
    SET_GPR_U32(ctx, 31, 0x146408u);
    ctx->pc = 0x146404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146400u;
            // 0x146404: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146408u; }
        if (ctx->pc != 0x146408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146408u; }
        if (ctx->pc != 0x146408u) { return; }
    }
    ctx->pc = 0x146408u;
label_146408:
    // 0x146408: 0xaf828310  sw          $v0, -0x7CF0($gp)
    ctx->pc = 0x146408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935312), GPR_U32(ctx, 2));
    // 0x14640c: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x14640Cu;
    SET_GPR_U32(ctx, 31, 0x146414u);
    ctx->pc = 0x146410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14640Cu;
            // 0x146410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146414u; }
        if (ctx->pc != 0x146414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146414u; }
        if (ctx->pc != 0x146414u) { return; }
    }
    ctx->pc = 0x146414u;
label_146414:
    // 0x146414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14641c: 0x3e00008  jr          $ra
    ctx->pc = 0x14641Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14641Cu;
            // 0x146420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146424u;
    // 0x146424: 0x0  nop
    ctx->pc = 0x146424u;
    // NOP
    // 0x146428: 0x0  nop
    ctx->pc = 0x146428u;
    // NOP
    // 0x14642c: 0x0  nop
    ctx->pc = 0x14642cu;
    // NOP
}
