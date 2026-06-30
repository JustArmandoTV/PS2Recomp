#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028BBF0
// Address: 0x28bbf0 - 0x28bc70
void sub_0028BBF0_0x28bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BBF0_0x28bbf0");
#endif

    switch (ctx->pc) {
        case 0x28bc30u: goto label_28bc30;
        default: break;
    }

    ctx->pc = 0x28bbf0u;

    // 0x28bbf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28bbf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28bbf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28bbfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bc00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28bc04: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x28bc04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x28bc08: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x28bc0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28bc10: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x28bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28bc14: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28bc18: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28bc1c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BC1Cu;
    {
        const bool branch_taken_0x28bc1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x28BC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC1Cu;
            // 0x28bc20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc1c) {
            ctx->pc = 0x28BC30u;
            goto label_28bc30;
        }
    }
    ctx->pc = 0x28BC24u;
    // 0x28bc24: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x28bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28bc28: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28BC28u;
    SET_GPR_U32(ctx, 31, 0x28BC30u);
    ctx->pc = 0x28BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC28u;
            // 0x28bc2c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC30u; }
        if (ctx->pc != 0x28BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC30u; }
        if (ctx->pc != 0x28BC30u) { return; }
    }
    ctx->pc = 0x28BC30u;
label_28bc30:
    // 0x28bc30: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x28bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28bc34: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28bc38: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x28bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x28bc3c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x28bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28bc40: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28bc44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28bc48: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x28bc48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x28bc4c: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x28bc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bc50: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x28bc50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bc54: 0xa4700006  sh          $s0, 0x6($v1)
    ctx->pc = 0x28bc54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x28bc58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28bc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bc5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bc5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bc60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bc60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bc64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bc68: 0x3e00008  jr          $ra
    ctx->pc = 0x28BC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC68u;
            // 0x28bc6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BC70u;
}
