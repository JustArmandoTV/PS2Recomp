#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050E990
// Address: 0x50e990 - 0x50ea30
void sub_0050E990_0x50e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050E990_0x50e990");
#endif

    switch (ctx->pc) {
        case 0x50e990u: goto label_50e990;
        case 0x50e994u: goto label_50e994;
        case 0x50e998u: goto label_50e998;
        case 0x50e99cu: goto label_50e99c;
        case 0x50e9a0u: goto label_50e9a0;
        case 0x50e9a4u: goto label_50e9a4;
        case 0x50e9a8u: goto label_50e9a8;
        case 0x50e9acu: goto label_50e9ac;
        case 0x50e9b0u: goto label_50e9b0;
        case 0x50e9b4u: goto label_50e9b4;
        case 0x50e9b8u: goto label_50e9b8;
        case 0x50e9bcu: goto label_50e9bc;
        case 0x50e9c0u: goto label_50e9c0;
        case 0x50e9c4u: goto label_50e9c4;
        case 0x50e9c8u: goto label_50e9c8;
        case 0x50e9ccu: goto label_50e9cc;
        case 0x50e9d0u: goto label_50e9d0;
        case 0x50e9d4u: goto label_50e9d4;
        case 0x50e9d8u: goto label_50e9d8;
        case 0x50e9dcu: goto label_50e9dc;
        case 0x50e9e0u: goto label_50e9e0;
        case 0x50e9e4u: goto label_50e9e4;
        case 0x50e9e8u: goto label_50e9e8;
        case 0x50e9ecu: goto label_50e9ec;
        case 0x50e9f0u: goto label_50e9f0;
        case 0x50e9f4u: goto label_50e9f4;
        case 0x50e9f8u: goto label_50e9f8;
        case 0x50e9fcu: goto label_50e9fc;
        case 0x50ea00u: goto label_50ea00;
        case 0x50ea04u: goto label_50ea04;
        case 0x50ea08u: goto label_50ea08;
        case 0x50ea0cu: goto label_50ea0c;
        case 0x50ea10u: goto label_50ea10;
        case 0x50ea14u: goto label_50ea14;
        case 0x50ea18u: goto label_50ea18;
        case 0x50ea1cu: goto label_50ea1c;
        case 0x50ea20u: goto label_50ea20;
        case 0x50ea24u: goto label_50ea24;
        case 0x50ea28u: goto label_50ea28;
        case 0x50ea2cu: goto label_50ea2c;
        default: break;
    }

    ctx->pc = 0x50e990u;

label_50e990:
    // 0x50e990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50e994:
    // 0x50e994: 0x3c023fed  lui         $v0, 0x3FED
    ctx->pc = 0x50e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16365 << 16));
label_50e998:
    // 0x50e998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50e99c:
    // 0x50e99c: 0x3446097b  ori         $a2, $v0, 0x97B
    ctx->pc = 0x50e99cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_50e9a0:
    // 0x50e9a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50e9a4:
    // 0x50e9a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50e9a8:
    // 0x50e9a8: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x50e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
label_50e9ac:
    // 0x50e9ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50e9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50e9b0:
    // 0x50e9b0: 0xac80013c  sw          $zero, 0x13C($a0)
    ctx->pc = 0x50e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
label_50e9b4:
    // 0x50e9b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50e9b8:
    // 0x50e9b8: 0xe48c0134  swc1        $f12, 0x134($a0)
    ctx->pc = 0x50e9b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 308), bits); }
label_50e9bc:
    // 0x50e9bc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x50e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_50e9c0:
    // 0x50e9c0: 0xac860138  sw          $a2, 0x138($a0)
    ctx->pc = 0x50e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 6));
label_50e9c4:
    // 0x50e9c4: 0xac85012c  sw          $a1, 0x12C($a0)
    ctx->pc = 0x50e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 5));
label_50e9c8:
    // 0x50e9c8: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x50e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_50e9cc:
    // 0x50e9cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50e9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50e9d0:
    // 0x50e9d0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x50e9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_50e9d4:
    // 0x50e9d4: 0x320f809  jalr        $t9
label_50e9d8:
    if (ctx->pc == 0x50E9D8u) {
        ctx->pc = 0x50E9D8u;
            // 0x50e9d8: 0x34651aae  ori         $a1, $v1, 0x1AAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6830);
        ctx->pc = 0x50E9DCu;
        goto label_50e9dc;
    }
    ctx->pc = 0x50E9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E9DCu);
        ctx->pc = 0x50E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E9D4u;
            // 0x50e9d8: 0x34651aae  ori         $a1, $v1, 0x1AAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6830);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E9DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E9DCu; }
            if (ctx->pc != 0x50E9DCu) { return; }
        }
        }
    }
    ctx->pc = 0x50E9DCu;
label_50e9dc:
    // 0x50e9dc: 0x8e060128  lw          $a2, 0x128($s0)
    ctx->pc = 0x50e9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_50e9e0:
    // 0x50e9e0: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x50e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_50e9e4:
    // 0x50e9e4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x50e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_50e9e8:
    // 0x50e9e8: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x50e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_50e9ec:
    // 0x50e9ec: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x50e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_50e9f0:
    // 0x50e9f0: 0x2484b760  addiu       $a0, $a0, -0x48A0
    ctx->pc = 0x50e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
label_50e9f4:
    // 0x50e9f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x50e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50e9f8:
    // 0x50e9f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x50e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_50e9fc:
    // 0x50e9fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x50e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_50ea00:
    // 0x50ea00: 0x8ca50d6c  lw          $a1, 0xD6C($a1)
    ctx->pc = 0x50ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_50ea04:
    // 0x50ea04: 0x90a50010  lbu         $a1, 0x10($a1)
    ctx->pc = 0x50ea04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_50ea08:
    // 0x50ea08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x50ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_50ea0c:
    // 0x50ea0c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x50ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_50ea10:
    // 0x50ea10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x50ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_50ea14:
    // 0x50ea14: 0xac6400cc  sw          $a0, 0xCC($v1)
    ctx->pc = 0x50ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
label_50ea18:
    // 0x50ea18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50ea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50ea1c:
    // 0x50ea1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50ea1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50ea20:
    // 0x50ea20: 0x3e00008  jr          $ra
label_50ea24:
    if (ctx->pc == 0x50EA24u) {
        ctx->pc = 0x50EA24u;
            // 0x50ea24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50EA28u;
        goto label_50ea28;
    }
    ctx->pc = 0x50EA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50EA20u;
            // 0x50ea24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50EA28u;
label_50ea28:
    // 0x50ea28: 0x0  nop
    ctx->pc = 0x50ea28u;
    // NOP
label_50ea2c:
    // 0x50ea2c: 0x0  nop
    ctx->pc = 0x50ea2cu;
    // NOP
}
