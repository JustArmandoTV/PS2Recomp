#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3F00
// Address: 0x1d3f00 - 0x1d4060
void sub_001D3F00_0x1d3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3F00_0x1d3f00");
#endif

    switch (ctx->pc) {
        case 0x1d3f48u: goto label_1d3f48;
        case 0x1d4028u: goto label_1d4028;
        default: break;
    }

    ctx->pc = 0x1d3f00u;

    // 0x1d3f00: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d3f04: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d3f08: 0x18c00051  blez        $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D3F08u;
    {
        const bool branch_taken_0x1d3f08 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D3F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F08u;
            // 0x1d3f0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f08) {
            ctx->pc = 0x1D4050u;
            goto label_1d4050;
        }
    }
    ctx->pc = 0x1D3F10u;
    // 0x1d3f10: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1d3f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d3f14: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D3F14u;
    {
        const bool branch_taken_0x1d3f14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F14u;
            // 0x1d3f18: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f14) {
            ctx->pc = 0x1D4018u;
            goto label_1d4018;
        }
    }
    ctx->pc = 0x1D3F1Cu;
    // 0x1d3f1c: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3F1Cu;
    {
        const bool branch_taken_0x1d3f1c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1D3F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F1Cu;
            // 0x1d3f20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f1c) {
            ctx->pc = 0x1D3F3Cu;
            goto label_1d3f3c;
        }
    }
    ctx->pc = 0x1D3F24u;
    // 0x1d3f24: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d3f28: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d3f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d3f2c: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x1d3f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d3f30: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3F30u;
    {
        const bool branch_taken_0x1d3f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f30) {
            ctx->pc = 0x1D3F3Cu;
            goto label_1d3f3c;
        }
    }
    ctx->pc = 0x1D3F38u;
    // 0x1d3f38: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d3f38u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d3f3c:
    // 0x1d3f3c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D3F3Cu;
    {
        const bool branch_taken_0x1d3f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f3c) {
            ctx->pc = 0x1D4018u;
            goto label_1d4018;
        }
    }
    ctx->pc = 0x1D3F44u;
    // 0x1d3f44: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3f48:
    // 0x1d3f48: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d3f4c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d3f50: 0x105482a  slt         $t1, $t0, $a1
    ctx->pc = 0x1d3f50u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d3f54: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3f54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3f58: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3f5c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3f60: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3f64: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3f68: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d3f6c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3f6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3f70: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3f70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3f74: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3f74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3f78: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3f7c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3f80: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d3f84: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3f84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3f88: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3f8c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3f90: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3f94: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3f98: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d3f9c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3f9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3fa0: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3fa4: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3fa8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3fac: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3facu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3fb0: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x1d3fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1d3fb4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3fb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3fb8: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3fbc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3fc0: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3fc4: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3fc8: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x1d3fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d3fcc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3fccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3fd0: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3fd4: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3fd8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3fdc: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3fe0: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1d3fe4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3fe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3fe8: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d3fe8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d3fec: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3ff0: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d3ff4: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3ff8: 0x8cea001c  lw          $t2, 0x1C($a3)
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d3ffc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3ffcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d4000: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1d4000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1d4004: 0x8a5821  addu        $t3, $a0, $t2
    ctx->pc = 0x1d4004u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1d4008: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d400c: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1d400cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1d4010: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D4010u;
    {
        const bool branch_taken_0x1d4010 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4010u;
            // 0x1d4014: 0xad6a0000  sw          $t2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4010) {
            ctx->pc = 0x1D3F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3f48;
        }
    }
    ctx->pc = 0x1D4018u;
label_1d4018:
    // 0x1d4018: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x1d4018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d401c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D401Cu;
    {
        const bool branch_taken_0x1d401c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d401c) {
            ctx->pc = 0x1D4050u;
            goto label_1d4050;
        }
    }
    ctx->pc = 0x1D4024u;
    // 0x1d4024: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d4028:
    // 0x1d4028: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d4028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d402c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d402cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4030: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1d4030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d4034: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x1d4034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x1d4038: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d403c: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d4040: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d4044: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d4044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d4048: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D4048u;
    {
        const bool branch_taken_0x1d4048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4048u;
            // 0x1d404c: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4048) {
            ctx->pc = 0x1D4028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4028;
        }
    }
    ctx->pc = 0x1D4050u;
label_1d4050:
    // 0x1d4050: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4058u;
    // 0x1d4058: 0x0  nop
    ctx->pc = 0x1d4058u;
    // NOP
    // 0x1d405c: 0x0  nop
    ctx->pc = 0x1d405cu;
    // NOP
}
