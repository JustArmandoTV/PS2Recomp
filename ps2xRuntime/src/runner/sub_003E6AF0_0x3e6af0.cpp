#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6AF0
// Address: 0x3e6af0 - 0x3e6b90
void sub_003E6AF0_0x3e6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6AF0_0x3e6af0");
#endif

    switch (ctx->pc) {
        case 0x3e6b18u: goto label_3e6b18;
        default: break;
    }

    ctx->pc = 0x3e6af0u;

    // 0x3e6af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e6af4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e6af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e6af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e6afc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e6b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e6b04: 0x24426ef8  addiu       $v0, $v0, 0x6EF8
    ctx->pc = 0x3e6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28408));
    // 0x3e6b08: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3e6b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e6b0c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3e6b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3e6b10: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x3E6B10u;
    SET_GPR_U32(ctx, 31, 0x3E6B18u);
    ctx->pc = 0x3E6B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6B10u;
            // 0x3e6b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6B18u; }
        if (ctx->pc != 0x3E6B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6B18u; }
        if (ctx->pc != 0x3E6B18u) { return; }
    }
    ctx->pc = 0x3E6B18u;
label_3e6b18:
    // 0x3e6b18: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e6b1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6b20: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3e6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x3e6b24: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x3e6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x3e6b28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3e6b28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3e6b2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6B2Cu;
    {
        const bool branch_taken_0x3e6b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6b2c) {
            ctx->pc = 0x3E6B3Cu;
            goto label_3e6b3c;
        }
    }
    ctx->pc = 0x3E6B34u;
    // 0x3e6b34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6b38: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3e6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_3e6b3c:
    // 0x3e6b3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6b40: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x3e6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3e6b44: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3e6b48: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3e6b48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3e6b4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6B4Cu;
    {
        const bool branch_taken_0x3e6b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6B4Cu;
            // 0x3e6b50: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b4c) {
            ctx->pc = 0x3E6B5Cu;
            goto label_3e6b5c;
        }
    }
    ctx->pc = 0x3E6B54u;
    // 0x3e6b54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6b58: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3e6b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3e6b5c:
    // 0x3e6b5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6b60: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3e6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e6b64: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3e6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3e6b68: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3e6b68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3e6b6c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6B6Cu;
    {
        const bool branch_taken_0x3e6b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6b6c) {
            ctx->pc = 0x3E6B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6B6Cu;
            // 0x3e6b70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6B80u;
            goto label_3e6b80;
        }
    }
    ctx->pc = 0x3E6B74u;
    // 0x3e6b74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6b78: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3e6b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x3e6b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e6b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6b80:
    // 0x3e6b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6b84: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6B84u;
            // 0x3e6b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6B8Cu;
    // 0x3e6b8c: 0x0  nop
    ctx->pc = 0x3e6b8cu;
    // NOP
}
