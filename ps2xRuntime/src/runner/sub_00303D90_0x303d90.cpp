#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303D90
// Address: 0x303d90 - 0x303e10
void sub_00303D90_0x303d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303D90_0x303d90");
#endif

    switch (ctx->pc) {
        case 0x303ddcu: goto label_303ddc;
        case 0x303df8u: goto label_303df8;
        default: break;
    }

    ctx->pc = 0x303d90u;

    // 0x303d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303d94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x303d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x303d98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303da4: 0x8c900d74  lw          $s0, 0xD74($a0)
    ctx->pc = 0x303da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
    // 0x303da8: 0x8c63f288  lw          $v1, -0xD78($v1)
    ctx->pc = 0x303da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963848)));
    // 0x303dac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x303dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x303db0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x303db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x303db4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x303db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x303db8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x303DB8u;
    {
        const bool branch_taken_0x303db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303db8) {
            ctx->pc = 0x303DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303DB8u;
            // 0x303dbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303DFCu;
            goto label_303dfc;
        }
    }
    ctx->pc = 0x303DC0u;
    // 0x303dc0: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x303dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x303dc4: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x303dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x303dc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x303dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x303dcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x303dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x303dd0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x303dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x303dd4: 0xc0a545c  jal         func_295170
    ctx->pc = 0x303DD4u;
    SET_GPR_U32(ctx, 31, 0x303DDCu);
    ctx->pc = 0x303DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303DD4u;
            // 0x303dd8: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DDCu; }
        if (ctx->pc != 0x303DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DDCu; }
        if (ctx->pc != 0x303DDCu) { return; }
    }
    ctx->pc = 0x303DDCu;
label_303ddc:
    // 0x303ddc: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x303ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x303de0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x303de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x303de4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x303de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x303de8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x303de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x303dec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x303decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x303df0: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x303DF0u;
    SET_GPR_U32(ctx, 31, 0x303DF8u);
    ctx->pc = 0x303DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303DF0u;
            // 0x303df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DF8u; }
        if (ctx->pc != 0x303DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303DF8u; }
        if (ctx->pc != 0x303DF8u) { return; }
    }
    ctx->pc = 0x303DF8u;
label_303df8:
    // 0x303df8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_303dfc:
    // 0x303dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303e04: 0x3e00008  jr          $ra
    ctx->pc = 0x303E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303E04u;
            // 0x303e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303E0Cu;
    // 0x303e0c: 0x0  nop
    ctx->pc = 0x303e0cu;
    // NOP
}
