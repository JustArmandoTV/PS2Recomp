#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5370
// Address: 0x1e5370 - 0x1e5400
void sub_001E5370_0x1e5370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5370_0x1e5370");
#endif

    switch (ctx->pc) {
        case 0x1e53ccu: goto label_1e53cc;
        default: break;
    }

    ctx->pc = 0x1e5370u;

    // 0x1e5370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e537c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e537cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5380: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5380u;
    {
        const bool branch_taken_0x1e5380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5380u;
            // 0x1e5384: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5380) {
            ctx->pc = 0x1E53E4u;
            goto label_1e53e4;
        }
    }
    ctx->pc = 0x1E5388u;
    // 0x1e5388: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e5388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e538c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e538cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e5390: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e5390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1e5394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e5394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e5398: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E5398u;
    {
        const bool branch_taken_0x1e5398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5398u;
            // 0x1e539c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5398) {
            ctx->pc = 0x1E53E4u;
            goto label_1e53e4;
        }
    }
    ctx->pc = 0x1E53A0u;
    // 0x1e53a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e53a4: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e53a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e53a8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e53ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e53b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e53b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e53b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E53B4u;
    {
        const bool branch_taken_0x1e53b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e53b4) {
            ctx->pc = 0x1E53B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53B4u;
            // 0x1e53b8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E53D0u;
            goto label_1e53d0;
        }
    }
    ctx->pc = 0x1E53BCu;
    // 0x1e53bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e53bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e53c4: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x1E53C4u;
    SET_GPR_U32(ctx, 31, 0x1E53CCu);
    ctx->pc = 0x1E53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53C4u;
            // 0x1e53c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53CCu; }
        if (ctx->pc != 0x1E53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53CCu; }
        if (ctx->pc != 0x1E53CCu) { return; }
    }
    ctx->pc = 0x1E53CCu;
label_1e53cc:
    // 0x1e53cc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e53d0:
    // 0x1e53d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e53d4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1e53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1e53d8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e53dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e53e0: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1e53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_1e53e4:
    // 0x1e53e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e53e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e53e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e53ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e53ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e53f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e53f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e53f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E53F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E53F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53F4u;
            // 0x1e53f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E53FCu;
    // 0x1e53fc: 0x0  nop
    ctx->pc = 0x1e53fcu;
    // NOP
}
