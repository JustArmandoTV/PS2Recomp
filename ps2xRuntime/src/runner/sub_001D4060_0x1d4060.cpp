#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4060
// Address: 0x1d4060 - 0x1d41f0
void sub_001D4060_0x1d4060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4060_0x1d4060");
#endif

    switch (ctx->pc) {
        case 0x1d4090u: goto label_1d4090;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d4108u: goto label_1d4108;
        case 0x1d4174u: goto label_1d4174;
        case 0x1d41ccu: goto label_1d41cc;
        default: break;
    }

    ctx->pc = 0x1d4060u;

    // 0x1d4060: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x1d4060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1d4064: 0x2c610401  sltiu       $at, $v1, 0x401
    ctx->pc = 0x1d4064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1d4068: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D4068u;
    {
        const bool branch_taken_0x1d4068 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4068) {
            ctx->pc = 0x1D4138u;
            goto label_1d4138;
        }
    }
    ctx->pc = 0x1D4070u;
    // 0x1d4070: 0x240dfc00  addiu       $t5, $zero, -0x400
    ctx->pc = 0x1d4070u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x1d4074: 0x3c061001  lui         $a2, 0x1001
    ctx->pc = 0x1d4074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4097 << 16));
    // 0x1d4078: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d407c: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x1d407cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d4080: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x1d4084: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d4088: 0x24090101  addiu       $t1, $zero, 0x101
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1d408c: 0xaccde020  sw          $t5, -0x1FE0($a2)
    ctx->pc = 0x1d408cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 13));
label_1d4090:
    // 0x1d4090: 0xaccce010  sw          $t4, -0x1FF0($a2)
    ctx->pc = 0x1d4090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959120), GPR_U32(ctx, 12));
    // 0x1d4094: 0xacc5d410  sw          $a1, -0x2BF0($a2)
    ctx->pc = 0x1d4094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956048), GPR_U32(ctx, 5));
    // 0x1d4098: 0xaccbd420  sw          $t3, -0x2BE0($a2)
    ctx->pc = 0x1d4098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956064), GPR_U32(ctx, 11));
    // 0x1d409c: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x1d409cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x1d40a0: 0xaccad480  sw          $t2, -0x2B80($a2)
    ctx->pc = 0x1d40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956160), GPR_U32(ctx, 10));
    // 0x1d40a4: 0x8cc7e020  lw          $a3, -0x1FE0($a2)
    ctx->pc = 0x1d40a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959136)));
    // 0x1d40a8: 0x34e70200  ori         $a3, $a3, 0x200
    ctx->pc = 0x1d40a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)512);
    // 0x1d40ac: 0xacc7e020  sw          $a3, -0x1FE0($a2)
    ctx->pc = 0x1d40acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 7));
    // 0x1d40b0: 0xacc9d400  sw          $t1, -0x2C00($a2)
    ctx->pc = 0x1d40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956032), GPR_U32(ctx, 9));
    // 0x1d40b4: 0xf  sync
    ctx->pc = 0x1d40b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1d40b8:
    // 0x1d40b8: 0x0  nop
    ctx->pc = 0x1d40b8u;
    // NOP
    // 0x1d40bc: 0x0  nop
    ctx->pc = 0x1d40bcu;
    // NOP
    // 0x1d40c0: 0x0  nop
    ctx->pc = 0x1d40c0u;
    // NOP
    // 0x1d40c4: 0x0  nop
    ctx->pc = 0x1d40c4u;
    // NOP
    // 0x1d40c8: 0x0  nop
    ctx->pc = 0x1d40c8u;
    // NOP
    // 0x1d40cc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D40CCu;
    {
        const bool branch_taken_0x1d40cc = (false);
        if (branch_taken_0x1d40cc) {
            ctx->pc = 0x1D40B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d40b8;
        }
    }
    ctx->pc = 0x1D40D4u;
    // 0x1d40d4: 0x0  nop
    ctx->pc = 0x1d40d4u;
    // NOP
    // 0x1d40d8: 0xaccde020  sw          $t5, -0x1FE0($a2)
    ctx->pc = 0x1d40d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 13));
    // 0x1d40dc: 0xacc8e010  sw          $t0, -0x1FF0($a2)
    ctx->pc = 0x1d40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959120), GPR_U32(ctx, 8));
    // 0x1d40e0: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x1d40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x1d40e4: 0xacc4d010  sw          $a0, -0x2FF0($a2)
    ctx->pc = 0x1d40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955024), GPR_U32(ctx, 4));
    // 0x1d40e8: 0xaccbd020  sw          $t3, -0x2FE0($a2)
    ctx->pc = 0x1d40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955040), GPR_U32(ctx, 11));
    // 0x1d40ec: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x1d40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x1d40f0: 0xaccad080  sw          $t2, -0x2F80($a2)
    ctx->pc = 0x1d40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955136), GPR_U32(ctx, 10));
    // 0x1d40f4: 0x8cc7e020  lw          $a3, -0x1FE0($a2)
    ctx->pc = 0x1d40f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959136)));
    // 0x1d40f8: 0x34e70100  ori         $a3, $a3, 0x100
    ctx->pc = 0x1d40f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
    // 0x1d40fc: 0xacc7e020  sw          $a3, -0x1FE0($a2)
    ctx->pc = 0x1d40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 7));
    // 0x1d4100: 0xacc8d000  sw          $t0, -0x3000($a2)
    ctx->pc = 0x1d4100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955008), GPR_U32(ctx, 8));
    // 0x1d4104: 0xf  sync
    ctx->pc = 0x1d4104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1d4108:
    // 0x1d4108: 0x0  nop
    ctx->pc = 0x1d4108u;
    // NOP
    // 0x1d410c: 0x0  nop
    ctx->pc = 0x1d410cu;
    // NOP
    // 0x1d4110: 0x0  nop
    ctx->pc = 0x1d4110u;
    // NOP
    // 0x1d4114: 0x0  nop
    ctx->pc = 0x1d4114u;
    // NOP
    // 0x1d4118: 0x0  nop
    ctx->pc = 0x1d4118u;
    // NOP
    // 0x1d411c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D411Cu;
    {
        const bool branch_taken_0x1d411c = (false);
        if (branch_taken_0x1d411c) {
            ctx->pc = 0x1D4108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4108;
        }
    }
    ctx->pc = 0x1D4124u;
    // 0x1d4124: 0x0  nop
    ctx->pc = 0x1d4124u;
    // NOP
    // 0x1d4128: 0x2c610401  sltiu       $at, $v1, 0x401
    ctx->pc = 0x1d4128u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1d412c: 0x5020ffd8  beql        $at, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D412Cu;
    {
        const bool branch_taken_0x1d412c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d412c) {
            ctx->pc = 0x1D4130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D412Cu;
            // 0x1d4130: 0xaccde020  sw          $t5, -0x1FE0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4090;
        }
    }
    ctx->pc = 0x1D4134u;
    // 0x1d4134: 0x0  nop
    ctx->pc = 0x1d4134u;
    // NOP
label_1d4138:
    // 0x1d4138: 0x2408fc00  addiu       $t0, $zero, -0x400
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x1d413c: 0x3c061001  lui         $a2, 0x1001
    ctx->pc = 0x1d413cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4097 << 16));
    // 0x1d4140: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1d4140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d4144: 0xacc8e020  sw          $t0, -0x1FE0($a2)
    ctx->pc = 0x1d4144u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 8)); // MMIO: 0x1000e020
    // 0x1d4148: 0xacc7e010  sw          $a3, -0x1FF0($a2)
    ctx->pc = 0x1d4148u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4294959120), GPR_U32(ctx, 7)); // MMIO: 0x1000e010
    // 0x1d414c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x1d4150: 0xacc5d410  sw          $a1, -0x2BF0($a2)
    ctx->pc = 0x1d4150u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4294956048), GPR_U32(ctx, 5)); // MMIO: 0x1000d410
    // 0x1d4154: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x1d4154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1d4158: 0xacc3d420  sw          $v1, -0x2BE0($a2)
    ctx->pc = 0x1d4158u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956064), GPR_U32(ctx, 3));
    // 0x1d415c: 0xacc8d480  sw          $t0, -0x2B80($a2)
    ctx->pc = 0x1d415cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956160), GPR_U32(ctx, 8));
    // 0x1d4160: 0x8cc5e020  lw          $a1, -0x1FE0($a2)
    ctx->pc = 0x1d4160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959136)));
    // 0x1d4164: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1d4164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1d4168: 0xacc5e020  sw          $a1, -0x1FE0($a2)
    ctx->pc = 0x1d4168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959136), GPR_U32(ctx, 5));
    // 0x1d416c: 0xacc7d400  sw          $a3, -0x2C00($a2)
    ctx->pc = 0x1d416cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956032), GPR_U32(ctx, 7));
    // 0x1d4170: 0xf  sync
    ctx->pc = 0x1d4170u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1d4174:
    // 0x1d4174: 0x0  nop
    ctx->pc = 0x1d4174u;
    // NOP
    // 0x1d4178: 0x0  nop
    ctx->pc = 0x1d4178u;
    // NOP
    // 0x1d417c: 0x0  nop
    ctx->pc = 0x1d417cu;
    // NOP
    // 0x1d4180: 0x0  nop
    ctx->pc = 0x1d4180u;
    // NOP
    // 0x1d4184: 0x0  nop
    ctx->pc = 0x1d4184u;
    // NOP
    // 0x1d4188: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4188u;
    {
        const bool branch_taken_0x1d4188 = (false);
        if (branch_taken_0x1d4188) {
            ctx->pc = 0x1D4174u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4174;
        }
    }
    ctx->pc = 0x1D4190u;
    // 0x1d4190: 0x0  nop
    ctx->pc = 0x1d4190u;
    // NOP
    // 0x1d4194: 0x2406fc00  addiu       $a2, $zero, -0x400
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x1d4198: 0x3c051001  lui         $a1, 0x1001
    ctx->pc = 0x1d4198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
    // 0x1d419c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1d419cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d41a0: 0xaca6e020  sw          $a2, -0x1FE0($a1)
    ctx->pc = 0x1d41a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 4294959136), GPR_U32(ctx, 6)); // MMIO: 0x1000e020
    // 0x1d41a4: 0xaca7e010  sw          $a3, -0x1FF0($a1)
    ctx->pc = 0x1d41a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 4294959120), GPR_U32(ctx, 7)); // MMIO: 0x1000e010
    // 0x1d41a8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1d41ac: 0xaca4d010  sw          $a0, -0x2FF0($a1)
    ctx->pc = 0x1d41acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 4294955024), GPR_U32(ctx, 4)); // MMIO: 0x1000d010
    // 0x1d41b0: 0xaca3d020  sw          $v1, -0x2FE0($a1)
    ctx->pc = 0x1d41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955040), GPR_U32(ctx, 3));
    // 0x1d41b4: 0xaca6d080  sw          $a2, -0x2F80($a1)
    ctx->pc = 0x1d41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955136), GPR_U32(ctx, 6));
    // 0x1d41b8: 0x8ca3e020  lw          $v1, -0x1FE0($a1)
    ctx->pc = 0x1d41b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959136)));
    // 0x1d41bc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1d41bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1d41c0: 0xaca3e020  sw          $v1, -0x1FE0($a1)
    ctx->pc = 0x1d41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294959136), GPR_U32(ctx, 3));
    // 0x1d41c4: 0xaca7d000  sw          $a3, -0x3000($a1)
    ctx->pc = 0x1d41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294955008), GPR_U32(ctx, 7));
    // 0x1d41c8: 0xf  sync
    ctx->pc = 0x1d41c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1d41cc:
    // 0x1d41cc: 0x0  nop
    ctx->pc = 0x1d41ccu;
    // NOP
    // 0x1d41d0: 0x0  nop
    ctx->pc = 0x1d41d0u;
    // NOP
    // 0x1d41d4: 0x0  nop
    ctx->pc = 0x1d41d4u;
    // NOP
    // 0x1d41d8: 0x0  nop
    ctx->pc = 0x1d41d8u;
    // NOP
    // 0x1d41dc: 0x0  nop
    ctx->pc = 0x1d41dcu;
    // NOP
    // 0x1d41e0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D41E0u;
    {
        const bool branch_taken_0x1d41e0 = (false);
        if (branch_taken_0x1d41e0) {
            ctx->pc = 0x1D41CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d41cc;
        }
    }
    ctx->pc = 0x1D41E8u;
    // 0x1d41e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D41E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D41F0u;
}
