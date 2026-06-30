#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D960
// Address: 0x14d960 - 0x14da10
void sub_0014D960_0x14d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D960_0x14d960");
#endif

    switch (ctx->pc) {
        case 0x14d994u: goto label_14d994;
        case 0x14d9ccu: goto label_14d9cc;
        case 0x14d9f4u: goto label_14d9f4;
        default: break;
    }

    ctx->pc = 0x14d960u;

    // 0x14d960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d964: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d96c: 0x8c6357e4  lw          $v1, 0x57E4($v1)
    ctx->pc = 0x14d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22500)));
    // 0x14d970: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14D970u;
    {
        const bool branch_taken_0x14d970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d970) {
            ctx->pc = 0x14D9A4u;
            goto label_14d9a4;
        }
    }
    ctx->pc = 0x14D978u;
    // 0x14d978: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d97c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d980: 0x8c635848  lw          $v1, 0x5848($v1)
    ctx->pc = 0x14d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22600)));
    // 0x14d984: 0x5064001f  beql        $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14D984u;
    {
        const bool branch_taken_0x14d984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14d984) {
            ctx->pc = 0x14D988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D984u;
            // 0x14d988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA04u;
            goto label_14da04;
        }
    }
    ctx->pc = 0x14D98Cu;
    // 0x14d98c: 0xc057250  jal         func_15C940
    ctx->pc = 0x14D98Cu;
    SET_GPR_U32(ctx, 31, 0x14D994u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D994u; }
        if (ctx->pc != 0x14D994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D994u; }
        if (ctx->pc != 0x14D994u) { return; }
    }
    ctx->pc = 0x14D994u;
label_14d994:
    // 0x14d994: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14d994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d998: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d99c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14D99Cu;
    {
        const bool branch_taken_0x14d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D99Cu;
            // 0x14d9a0: 0xac645848  sw          $a0, 0x5848($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d99c) {
            ctx->pc = 0x14DA00u;
            goto label_14da00;
        }
    }
    ctx->pc = 0x14D9A4u;
label_14d9a4:
    // 0x14d9a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d9a8: 0x8c6357e0  lw          $v1, 0x57E0($v1)
    ctx->pc = 0x14d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22496)));
    // 0x14d9ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14D9ACu;
    {
        const bool branch_taken_0x14d9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9ac) {
            ctx->pc = 0x14D9D8u;
            goto label_14d9d8;
        }
    }
    ctx->pc = 0x14D9B4u;
    // 0x14d9b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d9b8: 0x8c635848  lw          $v1, 0x5848($v1)
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22600)));
    // 0x14d9bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14D9BCu;
    {
        const bool branch_taken_0x14d9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9bc) {
            ctx->pc = 0x14DA00u;
            goto label_14da00;
        }
    }
    ctx->pc = 0x14D9C4u;
    // 0x14d9c4: 0xc057250  jal         func_15C940
    ctx->pc = 0x14D9C4u;
    SET_GPR_U32(ctx, 31, 0x14D9CCu);
    ctx->pc = 0x14D9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9C4u;
            // 0x14d9c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9CCu; }
        if (ctx->pc != 0x14D9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9CCu; }
        if (ctx->pc != 0x14D9CCu) { return; }
    }
    ctx->pc = 0x14D9CCu;
label_14d9cc:
    // 0x14d9cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d9d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14D9D0u;
    {
        const bool branch_taken_0x14d9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9D0u;
            // 0x14d9d4: 0xac605848  sw          $zero, 0x5848($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9d0) {
            ctx->pc = 0x14DA00u;
            goto label_14da00;
        }
    }
    ctx->pc = 0x14D9D8u;
label_14d9d8:
    // 0x14d9d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d9dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d9e0: 0x8c635848  lw          $v1, 0x5848($v1)
    ctx->pc = 0x14d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22600)));
    // 0x14d9e4: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D9E4u;
    {
        const bool branch_taken_0x14d9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14d9e4) {
            ctx->pc = 0x14DA00u;
            goto label_14da00;
        }
    }
    ctx->pc = 0x14D9ECu;
    // 0x14d9ec: 0xc057250  jal         func_15C940
    ctx->pc = 0x14D9ECu;
    SET_GPR_U32(ctx, 31, 0x14D9F4u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9F4u; }
        if (ctx->pc != 0x14D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9F4u; }
        if (ctx->pc != 0x14D9F4u) { return; }
    }
    ctx->pc = 0x14D9F4u;
label_14d9f4:
    // 0x14d9f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d9f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d9fc: 0xac645848  sw          $a0, 0x5848($v1)
    ctx->pc = 0x14d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 4));
label_14da00:
    // 0x14da00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14da04:
    // 0x14da04: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA04u;
            // 0x14da08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DA0Cu;
    // 0x14da0c: 0x0  nop
    ctx->pc = 0x14da0cu;
    // NOP
}
