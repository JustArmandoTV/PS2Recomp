#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146100
// Address: 0x146100 - 0x1461a0
void sub_00146100_0x146100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146100_0x146100");
#endif

    switch (ctx->pc) {
        case 0x146120u: goto label_146120;
        case 0x14615cu: goto label_14615c;
        case 0x146180u: goto label_146180;
        case 0x14618cu: goto label_14618c;
        default: break;
    }

    ctx->pc = 0x146100u;

    // 0x146100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146104: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x146104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14610c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146110: 0xaf808314  sw          $zero, -0x7CEC($gp)
    ctx->pc = 0x146110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 0));
    // 0x146114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146118: 0xac442034  sw          $a0, 0x2034($v0)
    ctx->pc = 0x146118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8244), GPR_U32(ctx, 4));
    // 0x14611c: 0x2602004e  addiu       $v0, $s0, 0x4E
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 78));
label_146120:
    // 0x146120: 0x8f858314  lw          $a1, -0x7CEC($gp)
    ctx->pc = 0x146120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x146124: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x146124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x146128: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14612c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146130: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x146130u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x146134: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x146138: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x146138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14613c: 0xaf878314  sw          $a3, -0x7CEC($gp)
    ctx->pc = 0x14613cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 7));
    // 0x146140: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x146140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146144: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x146144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x146148: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x14614c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146150: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x146150u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x146154: 0xc057540  jal         func_15D500
    ctx->pc = 0x146154u;
    SET_GPR_U32(ctx, 31, 0x14615Cu);
    ctx->pc = 0x146158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146154u;
            // 0x146158: 0x24847900  addiu       $a0, $a0, 0x7900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14615Cu; }
        if (ctx->pc != 0x14615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14615Cu; }
        if (ctx->pc != 0x14615Cu) { return; }
    }
    ctx->pc = 0x14615Cu;
label_14615c:
    // 0x14615c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14615cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146160: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x146160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146164: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x146164u;
    {
        const bool branch_taken_0x146164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146164) {
            ctx->pc = 0x146168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146164u;
            // 0x146168: 0x2602004e  addiu       $v0, $s0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 78));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146120;
        }
    }
    ctx->pc = 0x14616Cu;
    // 0x14616c: 0x8f868314  lw          $a2, -0x7CEC($gp)
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x146170: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146174: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x146174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x146178: 0xc05750c  jal         func_15D430
    ctx->pc = 0x146178u;
    SET_GPR_U32(ctx, 31, 0x146180u);
    ctx->pc = 0x14617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146178u;
            // 0x14617c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146180u; }
        if (ctx->pc != 0x146180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146180u; }
        if (ctx->pc != 0x146180u) { return; }
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0xaf828310  sw          $v0, -0x7CF0($gp)
    ctx->pc = 0x146180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935312), GPR_U32(ctx, 2));
    // 0x146184: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x146184u;
    SET_GPR_U32(ctx, 31, 0x14618Cu);
    ctx->pc = 0x146188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146184u;
            // 0x146188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14618Cu; }
        if (ctx->pc != 0x14618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14618Cu; }
        if (ctx->pc != 0x14618Cu) { return; }
    }
    ctx->pc = 0x14618Cu;
label_14618c:
    // 0x14618c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146194: 0x3e00008  jr          $ra
    ctx->pc = 0x146194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146194u;
            // 0x146198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14619Cu;
    // 0x14619c: 0x0  nop
    ctx->pc = 0x14619cu;
    // NOP
}
