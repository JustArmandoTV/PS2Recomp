#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335F10
// Address: 0x335f10 - 0x335f90
void sub_00335F10_0x335f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335F10_0x335f10");
#endif

    ctx->pc = 0x335f10u;

    // 0x335f10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x335f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x335f14: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x335f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x335f18: 0x90420080  lbu         $v0, 0x80($v0)
    ctx->pc = 0x335f18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x335f1c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x335F1Cu;
    {
        const bool branch_taken_0x335f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335f1c) {
            ctx->pc = 0x335F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335F1Cu;
            // 0x335f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335F7Cu;
            goto label_335f7c;
        }
    }
    ctx->pc = 0x335F24u;
    // 0x335f24: 0x90850058  lbu         $a1, 0x58($a0)
    ctx->pc = 0x335f24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x335f28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x335f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x335f2c: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x335f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
    // 0x335f30: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x335f34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x335f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x335f38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x335f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x335f3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335f40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335f44: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x335f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x335f48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x335F48u;
    {
        const bool branch_taken_0x335f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f48) {
            ctx->pc = 0x335F78u;
            goto label_335f78;
        }
    }
    ctx->pc = 0x335F50u;
    // 0x335f50: 0x80860059  lb          $a2, 0x59($a0)
    ctx->pc = 0x335f50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
    // 0x335f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335f58: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x335f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x335f5c: 0xc0282a  slt         $a1, $a2, $zero
    ctx->pc = 0x335f5cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x335f60: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x335f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x335f64: 0x28c40003  slti        $a0, $a2, 0x3
    ctx->pc = 0x335f64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x335f68: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x335f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x335f6c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x335f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x335f70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335F70u;
    {
        const bool branch_taken_0x335f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335F70u;
            // 0x335f74: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f70) {
            ctx->pc = 0x335F7Cu;
            goto label_335f7c;
        }
    }
    ctx->pc = 0x335F78u;
label_335f78:
    // 0x335f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335f7c:
    // 0x335f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x335F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335F84u;
    // 0x335f84: 0x0  nop
    ctx->pc = 0x335f84u;
    // NOP
    // 0x335f88: 0x0  nop
    ctx->pc = 0x335f88u;
    // NOP
    // 0x335f8c: 0x0  nop
    ctx->pc = 0x335f8cu;
    // NOP
}
