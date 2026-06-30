#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028BC70
// Address: 0x28bc70 - 0x28bd50
void sub_0028BC70_0x28bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BC70_0x28bc70");
#endif

    switch (ctx->pc) {
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bd04u: goto label_28bd04;
        default: break;
    }

    ctx->pc = 0x28bc70u;

    // 0x28bc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28bc74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28bc78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28bc7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28bc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28bc80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28bc80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28bc88: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x28bc88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x28bc8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28bc90: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x28bc94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28bc98: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x28bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28bc9c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28bc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28bca0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28bca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28bca4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BCA4u;
    {
        const bool branch_taken_0x28bca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x28BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCA4u;
            // 0x28bca8: 0x30d1ffff  andi        $s1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bca4) {
            ctx->pc = 0x28BCB8u;
            goto label_28bcb8;
        }
    }
    ctx->pc = 0x28BCACu;
    // 0x28bcac: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x28bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x28bcb0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28BCB0u;
    SET_GPR_U32(ctx, 31, 0x28BCB8u);
    ctx->pc = 0x28BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCB0u;
            // 0x28bcb4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCB8u; }
        if (ctx->pc != 0x28BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCB8u; }
        if (ctx->pc != 0x28BCB8u) { return; }
    }
    ctx->pc = 0x28BCB8u;
label_28bcb8:
    // 0x28bcb8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x28bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28bcbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bcc0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28bcc4: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x28bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x28bcc8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x28bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28bccc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x28bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28bcd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28bcd4: 0xa4920000  sh          $s2, 0x0($a0)
    ctx->pc = 0x28bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x28bcd8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x28bcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x28bcdc: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x28bcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28bce0: 0xa4900006  sh          $s0, 0x6($a0)
    ctx->pc = 0x28bce0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x28bce4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x28bce8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28bcec: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28bcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28bcf0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28bcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28bcf4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BCF4u;
    {
        const bool branch_taken_0x28bcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28BCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCF4u;
            // 0x28bcf8: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcf4) {
            ctx->pc = 0x28BD08u;
            goto label_28bd08;
        }
    }
    ctx->pc = 0x28BCFCu;
    // 0x28bcfc: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28BCFCu;
    SET_GPR_U32(ctx, 31, 0x28BD04u);
    ctx->pc = 0x28BD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCFCu;
            // 0x28bd00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BD04u; }
        if (ctx->pc != 0x28BD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BD04u; }
        if (ctx->pc != 0x28BD04u) { return; }
    }
    ctx->pc = 0x28BD04u;
label_28bd04:
    // 0x28bd04: 0x0  nop
    ctx->pc = 0x28bd04u;
    // NOP
label_28bd08:
    // 0x28bd08: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28bd0c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28bd10: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x28bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x28bd14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x28bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28bd18: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28bd1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28bd20: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x28bd20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x28bd24: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x28bd24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bd28: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x28bd28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bd2c: 0xa4700006  sh          $s0, 0x6($v1)
    ctx->pc = 0x28bd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x28bd30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bd34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28bd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bd38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bd38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bd3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bd3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bd40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bd44: 0x3e00008  jr          $ra
    ctx->pc = 0x28BD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD44u;
            // 0x28bd48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BD4Cu;
    // 0x28bd4c: 0x0  nop
    ctx->pc = 0x28bd4cu;
    // NOP
}
