#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00495EB0
// Address: 0x495eb0 - 0x496040
void sub_00495EB0_0x495eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495EB0_0x495eb0");
#endif

    switch (ctx->pc) {
        case 0x495f5cu: goto label_495f5c;
        case 0x495ffcu: goto label_495ffc;
        default: break;
    }

    ctx->pc = 0x495eb0u;

    // 0x495eb0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x495eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x495eb4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x495eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x495eb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x495eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x495ebc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x495ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x495ec0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x495ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x495ec4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x495EC4u;
    {
        const bool branch_taken_0x495ec4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x495EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495EC4u;
            // 0x495ec8: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ec4) {
            ctx->pc = 0x495ED4u;
            goto label_495ed4;
        }
    }
    ctx->pc = 0x495ECCu;
    // 0x495ecc: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x495eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x495ed0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x495ed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_495ed4:
    // 0x495ed4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x495ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x495ed8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x495ED8u;
    {
        const bool branch_taken_0x495ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495ed8) {
            ctx->pc = 0x496020u;
            goto label_496020;
        }
    }
    ctx->pc = 0x495EE0u;
    // 0x495ee0: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x495ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x495ee4: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x495ee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x495ee8: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x495EE8u;
    {
        const bool branch_taken_0x495ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x495EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495EE8u;
            // 0x495eec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495ee8) {
            ctx->pc = 0x496020u;
            goto label_496020;
        }
    }
    ctx->pc = 0x495EF0u;
    // 0x495ef0: 0x675823  subu        $t3, $v1, $a3
    ctx->pc = 0x495ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x495ef4: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x495ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x495ef8: 0x256a0007  addiu       $t2, $t3, 0x7
    ctx->pc = 0x495ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x495efc: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x495EFCu;
    {
        const bool branch_taken_0x495efc = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x495F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495EFCu;
            // 0x495f00: 0xa40c3  sra         $t0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495efc) {
            ctx->pc = 0x495F0Cu;
            goto label_495f0c;
        }
    }
    ctx->pc = 0x495F04u;
    // 0x495f04: 0x25480007  addiu       $t0, $t2, 0x7
    ctx->pc = 0x495f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x495f08: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x495f08u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_495f0c:
    // 0x495f0c: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x495f0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x495f10: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x495F10u;
    {
        const bool branch_taken_0x495f10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x495f10) {
            ctx->pc = 0x495FF0u;
            goto label_495ff0;
        }
    }
    ctx->pc = 0x495F18u;
    // 0x495f18: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x495f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x495f1c: 0x68082b  sltu        $at, $v1, $t0
    ctx->pc = 0x495f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x495f20: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x495F20u;
    {
        const bool branch_taken_0x495f20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x495F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495F20u;
            // 0x495f24: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495f20) {
            ctx->pc = 0x495F54u;
            goto label_495f54;
        }
    }
    ctx->pc = 0x495F28u;
    // 0x495f28: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x495f28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x495f2c: 0x1694024  and         $t0, $t3, $t1
    ctx->pc = 0x495f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x495f30: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x495F30u;
    {
        const bool branch_taken_0x495f30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x495F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495F30u;
            // 0x495f34: 0x640c0001  daddiu      $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495f30) {
            ctx->pc = 0x495F48u;
            goto label_495f48;
        }
    }
    ctx->pc = 0x495F38u;
    // 0x495f38: 0x1494024  and         $t0, $t2, $t1
    ctx->pc = 0x495f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x495f3c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x495F3Cu;
    {
        const bool branch_taken_0x495f3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x495f3c) {
            ctx->pc = 0x495F48u;
            goto label_495f48;
        }
    }
    ctx->pc = 0x495F44u;
    // 0x495f44: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x495f44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495f48:
    // 0x495f48: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x495F48u;
    {
        const bool branch_taken_0x495f48 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x495f48) {
            ctx->pc = 0x495F54u;
            goto label_495f54;
        }
    }
    ctx->pc = 0x495F50u;
    // 0x495f50: 0x640d0001  daddiu      $t5, $zero, 0x1
    ctx->pc = 0x495f50u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_495f54:
    // 0x495f54: 0x11a00026  beqz        $t5, . + 4 + (0x26 << 2)
    ctx->pc = 0x495F54u;
    {
        const bool branch_taken_0x495f54 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x495f54) {
            ctx->pc = 0x495FF0u;
            goto label_495ff0;
        }
    }
    ctx->pc = 0x495F5Cu;
label_495f5c:
    // 0x495f5c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x495f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x495f60: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x495f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x495f64: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x495f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x495f68: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x495f68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x495f6c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x495f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x495f70: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x495f70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x495f74: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x495f74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x495f78: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x495f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x495f7c: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x495f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x495f80: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x495f80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
    // 0x495f84: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x495f84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x495f88: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x495f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
    // 0x495f8c: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x495f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x495f90: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x495f90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x495f94: 0x8ce8001c  lw          $t0, 0x1C($a3)
    ctx->pc = 0x495f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x495f98: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x495f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
    // 0x495f9c: 0x8ce80020  lw          $t0, 0x20($a3)
    ctx->pc = 0x495f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x495fa0: 0xacc80020  sw          $t0, 0x20($a2)
    ctx->pc = 0x495fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 8));
    // 0x495fa4: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x495fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x495fa8: 0xacc80024  sw          $t0, 0x24($a2)
    ctx->pc = 0x495fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 8));
    // 0x495fac: 0x8ce80028  lw          $t0, 0x28($a3)
    ctx->pc = 0x495facu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x495fb0: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x495fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
    // 0x495fb4: 0x8ce8002c  lw          $t0, 0x2C($a3)
    ctx->pc = 0x495fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x495fb8: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x495fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
    // 0x495fbc: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x495fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x495fc0: 0xacc80030  sw          $t0, 0x30($a2)
    ctx->pc = 0x495fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 8));
    // 0x495fc4: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x495fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x495fc8: 0xacc80034  sw          $t0, 0x34($a2)
    ctx->pc = 0x495fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 8));
    // 0x495fcc: 0x8ce80038  lw          $t0, 0x38($a3)
    ctx->pc = 0x495fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x495fd0: 0xacc80038  sw          $t0, 0x38($a2)
    ctx->pc = 0x495fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 8));
    // 0x495fd4: 0x8ce8003c  lw          $t0, 0x3C($a3)
    ctx->pc = 0x495fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x495fd8: 0xacc8003c  sw          $t0, 0x3C($a2)
    ctx->pc = 0x495fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 8));
    // 0x495fdc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x495fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x495fe0: 0xe2402b  sltu        $t0, $a3, $v0
    ctx->pc = 0x495fe0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x495fe4: 0x1500ffdd  bnez        $t0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x495FE4u;
    {
        const bool branch_taken_0x495fe4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x495FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x495FE4u;
            // 0x495fe8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495fe4) {
            ctx->pc = 0x495F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495f5c;
        }
    }
    ctx->pc = 0x495FECu;
    // 0x495fec: 0x0  nop
    ctx->pc = 0x495fecu;
    // NOP
label_495ff0:
    // 0x495ff0: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x495ff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x495ff4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x495FF4u;
    {
        const bool branch_taken_0x495ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x495ff4) {
            ctx->pc = 0x496020u;
            goto label_496020;
        }
    }
    ctx->pc = 0x495FFCu;
label_495ffc:
    // 0x495ffc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x495ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496000: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x496000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x496004: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x496004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x496008: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x496008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x49600c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x49600cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x496010: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x496010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496014: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x496014u;
    {
        const bool branch_taken_0x496014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496014u;
            // 0x496018: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496014) {
            ctx->pc = 0x495FFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_495ffc;
        }
    }
    ctx->pc = 0x49601Cu;
    // 0x49601c: 0x0  nop
    ctx->pc = 0x49601cu;
    // NOP
label_496020:
    // 0x496020: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x496020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x496024: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x496024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496028: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x496028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49602c: 0x3e00008  jr          $ra
    ctx->pc = 0x49602Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49602Cu;
            // 0x496030: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x496034u;
    // 0x496034: 0x0  nop
    ctx->pc = 0x496034u;
    // NOP
    // 0x496038: 0x0  nop
    ctx->pc = 0x496038u;
    // NOP
    // 0x49603c: 0x0  nop
    ctx->pc = 0x49603cu;
    // NOP
}
