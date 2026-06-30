#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108F98
// Address: 0x108f98 - 0x109068
void sub_00108F98_0x108f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108F98_0x108f98");
#endif

    ctx->pc = 0x108f98u;

    // 0x108f98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x108f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x108f9c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x108f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x108fa0: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x108fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x108fa4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x108fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x108fa8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x108fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x108fac: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x108facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x108fb0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x108fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108fb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x108fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x108fb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x108fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x108fbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x108fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x108fc0: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x108fc4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x108FC4u;
    {
        const bool branch_taken_0x108fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108FC4u;
            // 0x108fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fc4) {
            ctx->pc = 0x10900Cu;
            goto label_10900c;
        }
    }
    ctx->pc = 0x108FCCu;
    // 0x108fcc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x108fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x108fd0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x108fd4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x108fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x108fd8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x108fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x108fdc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x108fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x108fe0: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x108fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x108fe4: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x108fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x108fe8: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x108fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x108fec: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x108fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x108ff0: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x108ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x108ff4: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x108ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x108ff8: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x108ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x108ffc: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x108ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x109000: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x109000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x109004: 0x3e00008  jr          $ra
    ctx->pc = 0x109004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109004u;
            // 0x109008: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10900Cu;
    {
        const bool branch_taken_0x10900c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10900Cu;
            // 0x109010: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10900c) {
            ctx->pc = 0x109058u;
            goto label_109058;
        }
    }
    ctx->pc = 0x109014u;
    // 0x109014: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x109014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x109018: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x10901c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109020: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x109024: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x109024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x109028: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x109028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10902c: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x109030: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x109030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x109034: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x109034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x109038: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x109038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10903c: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x10903cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x109040: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x109040u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x109044: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x109044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x109048: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x109048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x10904c: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x10904cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x109050: 0x3e00008  jr          $ra
    ctx->pc = 0x109050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109050u;
            // 0x109054: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109058u;
label_109058:
    // 0x109058: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x109058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10905c: 0x8042e16  j           func_10B858
    ctx->pc = 0x10905Cu;
    ctx->pc = 0x109060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10905Cu;
            // 0x109060: 0x24a5e990  addiu       $a1, $a1, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010B858_0x10b858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x109064u;
    // 0x109064: 0x0  nop
    ctx->pc = 0x109064u;
    // NOP
}
