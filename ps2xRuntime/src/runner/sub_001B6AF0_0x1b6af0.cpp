#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6AF0
// Address: 0x1b6af0 - 0x1b6b78
void sub_001B6AF0_0x1b6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6AF0_0x1b6af0");
#endif

    switch (ctx->pc) {
        case 0x1b6b18u: goto label_1b6b18;
        default: break;
    }

    ctx->pc = 0x1b6af0u;

    // 0x1b6af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6af8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6afc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1b6afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1b6b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6b08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b6b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6b10: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B6B10u;
    SET_GPR_U32(ctx, 31, 0x1B6B18u);
    ctx->pc = 0x1B6B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B10u;
            // 0x1b6b14: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B18u; }
        if (ctx->pc != 0x1B6B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B18u; }
        if (ctx->pc != 0x1B6B18u) { return; }
    }
    ctx->pc = 0x1B6B18u;
label_1b6b18:
    // 0x1b6b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b1c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B48u;
            goto label_1b6b48;
        }
    }
    ctx->pc = 0x1B6B24u;
    // 0x1b6b24: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1b6b28: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1b6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1b6b2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6b30: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b6b34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b6b38: 0x8c629b3c  lw          $v0, -0x64C4($v1)
    ctx->pc = 0x1b6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941500)));
    // 0x1b6b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6B3Cu;
    {
        const bool branch_taken_0x1b6b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B3Cu;
            // 0x1b6b40: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b3c) {
            ctx->pc = 0x1B6B60u;
            goto label_1b6b60;
        }
    }
    ctx->pc = 0x1B6B44u;
    // 0x1b6b44: 0x0  nop
    ctx->pc = 0x1b6b44u;
    // NOP
label_1b6b48:
    // 0x1b6b48: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1b6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1b6b4c: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x1b6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1b6b50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6b54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b6b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b6b58: 0x8e0302e8  lw          $v1, 0x2E8($s0)
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1b6b5c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1b6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1b6b60:
    // 0x1b6b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6b6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B70u;
            // 0x1b6b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6B78u;
}
