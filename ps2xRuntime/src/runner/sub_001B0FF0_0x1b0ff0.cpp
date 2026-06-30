#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0FF0
// Address: 0x1b0ff0 - 0x1b10f0
void sub_001B0FF0_0x1b0ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0FF0_0x1b0ff0");
#endif

    switch (ctx->pc) {
        case 0x1b1008u: goto label_1b1008;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b10dcu: goto label_1b10dc;
        default: break;
    }

    ctx->pc = 0x1b0ff0u;

    // 0x1b0ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ffc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1000: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B1000u;
    SET_GPR_U32(ctx, 31, 0x1B1008u);
    ctx->pc = 0x1B1004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1000u;
            // 0x1b1004: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1008u; }
        if (ctx->pc != 0x1B1008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1008u; }
        if (ctx->pc != 0x1B1008u) { return; }
    }
    ctx->pc = 0x1B1008u;
label_1b1008:
    // 0x1b1008: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1b1008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1b100c: 0xc06c27a  jal         func_1B09E8
    ctx->pc = 0x1B100Cu;
    SET_GPR_U32(ctx, 31, 0x1B1014u);
    ctx->pc = 0x1B1010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B100Cu;
            // 0x1b1010: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B09E8u;
    if (runtime->hasFunction(0x1B09E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B09E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1014u; }
        if (ctx->pc != 0x1B1014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09E8_0x1b09e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1014u; }
        if (ctx->pc != 0x1B1014u) { return; }
    }
    ctx->pc = 0x1B1014u;
label_1b1014:
    // 0x1b1014: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b1014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1018: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1b1018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1b101c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b101cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1020: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1b1024: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1b1024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1b1028: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b1028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b102c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1b102cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1030: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b1030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1b1034: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x1b1034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x1b1038: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x1b1038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x1b103c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1b103cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1040: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b1040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1044: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x1b1044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x1b1048: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b1048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1b104c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1050: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b1050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1b1054: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1058: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1b1058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1b105c: 0x0  nop
    ctx->pc = 0x1b105cu;
    // NOP
label_1b1060:
    // 0x1b1060: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b1064: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1b1064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1b1068: 0x0  nop
    ctx->pc = 0x1b1068u;
    // NOP
    // 0x1b106c: 0x0  nop
    ctx->pc = 0x1b106cu;
    // NOP
    // 0x1b1070: 0x0  nop
    ctx->pc = 0x1b1070u;
    // NOP
    // 0x1b1074: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1074u;
    {
        const bool branch_taken_0x1b1074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1074) {
            ctx->pc = 0x1B1060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1060;
        }
    }
    ctx->pc = 0x1B107Cu;
    // 0x1b107c: 0xc06c260  jal         func_1B0980
    ctx->pc = 0x1B107Cu;
    SET_GPR_U32(ctx, 31, 0x1B1084u);
    ctx->pc = 0x1B1080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B107Cu;
            // 0x1b1080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0980u;
    if (runtime->hasFunction(0x1B0980u)) {
        auto targetFn = runtime->lookupFunction(0x1B0980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1084u; }
        if (ctx->pc != 0x1B1084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0980_0x1b0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1084u; }
        if (ctx->pc != 0x1B1084u) { return; }
    }
    ctx->pc = 0x1B1084u;
label_1b1084:
    // 0x1b1084: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1088: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1b1088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1b108c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1090: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1b1094: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1b1094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1b1098: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1b109c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1b10a0: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1b10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1b10a4: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x1b10a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x1b10a8: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x1b10ac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b10b0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1b10b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b10b4: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x1b10b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x1b10b8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b10bc: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x1b10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x1b10c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b10c4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1b10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1b10c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1b10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b10cc: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1b10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1b10d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b10d4: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x1B10D4u;
    SET_GPR_U32(ctx, 31, 0x1B10DCu);
    ctx->pc = 0x1B10D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10D4u;
            // 0x1b10d8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10DCu; }
        if (ctx->pc != 0x1B10DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10DCu; }
        if (ctx->pc != 0x1B10DCu) { return; }
    }
    ctx->pc = 0x1B10DCu;
label_1b10dc:
    // 0x1b10dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b10e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b10e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b10e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b10e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b10e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B10E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B10ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10E8u;
            // 0x1b10ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B10F0u;
}
