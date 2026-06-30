#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497E90
// Address: 0x497e90 - 0x498030
void sub_00497E90_0x497e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497E90_0x497e90");
#endif

    switch (ctx->pc) {
        case 0x497f3cu: goto label_497f3c;
        case 0x497fdcu: goto label_497fdc;
        default: break;
    }

    ctx->pc = 0x497e90u;

    // 0x497e90: 0x54a60003  bnel        $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x497E90u;
    {
        const bool branch_taken_0x497e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x497e90) {
            ctx->pc = 0x497E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497E90u;
            // 0x497e94: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497EA0u;
            goto label_497ea0;
        }
    }
    ctx->pc = 0x497E98u;
    // 0x497e98: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x497E98u;
    {
        const bool branch_taken_0x497e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497E98u;
            // 0x497e9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497e98) {
            ctx->pc = 0x498024u;
            goto label_498024;
        }
    }
    ctx->pc = 0x497EA0u;
label_497ea0:
    // 0x497ea0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x497ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x497ea4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x497ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x497ea8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x497ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497eac: 0x666023  subu        $t4, $v1, $a2
    ctx->pc = 0x497eacu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x497eb0: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x497EB0u;
    {
        const bool branch_taken_0x497eb0 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x497EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497EB0u;
            // 0x497eb4: 0xc10c3  sra         $v0, $t4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497eb0) {
            ctx->pc = 0x497EC0u;
            goto label_497ec0;
        }
    }
    ctx->pc = 0x497EB8u;
    // 0x497eb8: 0x25820007  addiu       $v0, $t4, 0x7
    ctx->pc = 0x497eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 7));
    // 0x497ebc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x497ebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_497ec0:
    // 0x497ec0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x497EC0u;
    {
        const bool branch_taken_0x497ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x497ec0) {
            ctx->pc = 0x498000u;
            goto label_498000;
        }
    }
    ctx->pc = 0x497EC8u;
    // 0x497ec8: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x497ec8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497ecc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x497eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497ed0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x497ED0u;
    {
        const bool branch_taken_0x497ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497ED0u;
            // 0x497ed4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ed0) {
            ctx->pc = 0x498000u;
            goto label_498000;
        }
    }
    ctx->pc = 0x497ED8u;
    // 0x497ed8: 0x258b0007  addiu       $t3, $t4, 0x7
    ctx->pc = 0x497ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 7));
    // 0x497edc: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x497edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x497ee0: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x497EE0u;
    {
        const bool branch_taken_0x497ee0 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x497EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497EE0u;
            // 0x497ee4: 0xb48c3  sra         $t1, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ee0) {
            ctx->pc = 0x497EF0u;
            goto label_497ef0;
        }
    }
    ctx->pc = 0x497EE8u;
    // 0x497ee8: 0x25690007  addiu       $t1, $t3, 0x7
    ctx->pc = 0x497ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x497eec: 0x948c3  sra         $t1, $t1, 3
    ctx->pc = 0x497eecu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 3));
label_497ef0:
    // 0x497ef0: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x497ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x497ef4: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x497EF4u;
    {
        const bool branch_taken_0x497ef4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x497ef4) {
            ctx->pc = 0x497FD0u;
            goto label_497fd0;
        }
    }
    ctx->pc = 0x497EFCu;
    // 0x497efc: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x497efcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x497f00: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x497F00u;
    {
        const bool branch_taken_0x497f00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x497F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497F00u;
            // 0x497f04: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f00) {
            ctx->pc = 0x497F34u;
            goto label_497f34;
        }
    }
    ctx->pc = 0x497F08u;
    // 0x497f08: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x497f08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x497f0c: 0x18a4824  and         $t1, $t4, $t2
    ctx->pc = 0x497f0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x497f10: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x497F10u;
    {
        const bool branch_taken_0x497f10 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x497F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497F10u;
            // 0x497f14: 0x640d0001  daddiu      $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f10) {
            ctx->pc = 0x497F28u;
            goto label_497f28;
        }
    }
    ctx->pc = 0x497F18u;
    // 0x497f18: 0x16a4824  and         $t1, $t3, $t2
    ctx->pc = 0x497f18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x497f1c: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x497F1Cu;
    {
        const bool branch_taken_0x497f1c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x497f1c) {
            ctx->pc = 0x497F28u;
            goto label_497f28;
        }
    }
    ctx->pc = 0x497F24u;
    // 0x497f24: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x497f24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497f28:
    // 0x497f28: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x497F28u;
    {
        const bool branch_taken_0x497f28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x497f28) {
            ctx->pc = 0x497F34u;
            goto label_497f34;
        }
    }
    ctx->pc = 0x497F30u;
    // 0x497f30: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x497f30u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_497f34:
    // 0x497f34: 0x11c00026  beqz        $t6, . + 4 + (0x26 << 2)
    ctx->pc = 0x497F34u;
    {
        const bool branch_taken_0x497f34 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x497f34) {
            ctx->pc = 0x497FD0u;
            goto label_497fd0;
        }
    }
    ctx->pc = 0x497F3Cu;
label_497f3c:
    // 0x497f3c: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x497f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x497f40: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x497f40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x497f44: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x497f44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x497f48: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x497f48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x497f4c: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x497f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x497f50: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x497f50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x497f54: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x497f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x497f58: 0xace9000c  sw          $t1, 0xC($a3)
    ctx->pc = 0x497f58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 9));
    // 0x497f5c: 0x8d090010  lw          $t1, 0x10($t0)
    ctx->pc = 0x497f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x497f60: 0xace90010  sw          $t1, 0x10($a3)
    ctx->pc = 0x497f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 9));
    // 0x497f64: 0x8d090014  lw          $t1, 0x14($t0)
    ctx->pc = 0x497f64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x497f68: 0xace90014  sw          $t1, 0x14($a3)
    ctx->pc = 0x497f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 9));
    // 0x497f6c: 0x8d090018  lw          $t1, 0x18($t0)
    ctx->pc = 0x497f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x497f70: 0xace90018  sw          $t1, 0x18($a3)
    ctx->pc = 0x497f70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 9));
    // 0x497f74: 0x8d09001c  lw          $t1, 0x1C($t0)
    ctx->pc = 0x497f74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x497f78: 0xace9001c  sw          $t1, 0x1C($a3)
    ctx->pc = 0x497f78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 9));
    // 0x497f7c: 0x8d090020  lw          $t1, 0x20($t0)
    ctx->pc = 0x497f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x497f80: 0xace90020  sw          $t1, 0x20($a3)
    ctx->pc = 0x497f80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 9));
    // 0x497f84: 0x8d090024  lw          $t1, 0x24($t0)
    ctx->pc = 0x497f84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x497f88: 0xace90024  sw          $t1, 0x24($a3)
    ctx->pc = 0x497f88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 9));
    // 0x497f8c: 0x8d090028  lw          $t1, 0x28($t0)
    ctx->pc = 0x497f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x497f90: 0xace90028  sw          $t1, 0x28($a3)
    ctx->pc = 0x497f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 9));
    // 0x497f94: 0x8d09002c  lw          $t1, 0x2C($t0)
    ctx->pc = 0x497f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x497f98: 0xace9002c  sw          $t1, 0x2C($a3)
    ctx->pc = 0x497f98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 9));
    // 0x497f9c: 0x8d090030  lw          $t1, 0x30($t0)
    ctx->pc = 0x497f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x497fa0: 0xace90030  sw          $t1, 0x30($a3)
    ctx->pc = 0x497fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 9));
    // 0x497fa4: 0x8d090034  lw          $t1, 0x34($t0)
    ctx->pc = 0x497fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x497fa8: 0xace90034  sw          $t1, 0x34($a3)
    ctx->pc = 0x497fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 9));
    // 0x497fac: 0x8d090038  lw          $t1, 0x38($t0)
    ctx->pc = 0x497facu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x497fb0: 0xace90038  sw          $t1, 0x38($a3)
    ctx->pc = 0x497fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 9));
    // 0x497fb4: 0x8d09003c  lw          $t1, 0x3C($t0)
    ctx->pc = 0x497fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x497fb8: 0xace9003c  sw          $t1, 0x3C($a3)
    ctx->pc = 0x497fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 9));
    // 0x497fbc: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x497fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x497fc0: 0x102482b  sltu        $t1, $t0, $v0
    ctx->pc = 0x497fc0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x497fc4: 0x1520ffdd  bnez        $t1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x497FC4u;
    {
        const bool branch_taken_0x497fc4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x497FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497FC4u;
            // 0x497fc8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497fc4) {
            ctx->pc = 0x497F3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497f3c;
        }
    }
    ctx->pc = 0x497FCCu;
    // 0x497fcc: 0x0  nop
    ctx->pc = 0x497fccu;
    // NOP
label_497fd0:
    // 0x497fd0: 0x103082b  sltu        $at, $t0, $v1
    ctx->pc = 0x497fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497fd4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x497FD4u;
    {
        const bool branch_taken_0x497fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497fd4) {
            ctx->pc = 0x498000u;
            goto label_498000;
        }
    }
    ctx->pc = 0x497FDCu;
label_497fdc:
    // 0x497fdc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x497fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x497fe0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x497fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x497fe4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x497fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x497fe8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x497fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x497fec: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x497fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x497ff0: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x497ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497ff4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x497FF4u;
    {
        const bool branch_taken_0x497ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497FF4u;
            // 0x497ff8: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ff4) {
            ctx->pc = 0x497FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497fdc;
        }
    }
    ctx->pc = 0x497FFCu;
    // 0x497ffc: 0x0  nop
    ctx->pc = 0x497ffcu;
    // NOP
label_498000:
    // 0x498000: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x498000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x498004: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x498004u;
    {
        const bool branch_taken_0x498004 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x498008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498004u;
            // 0x498008: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498004) {
            ctx->pc = 0x498014u;
            goto label_498014;
        }
    }
    ctx->pc = 0x49800Cu;
    // 0x49800c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x49800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x498010: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x498010u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_498014:
    // 0x498014: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x498014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x498018: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x498018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49801c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x49801cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x498020: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x498020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_498024:
    // 0x498024: 0x3e00008  jr          $ra
    ctx->pc = 0x498024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49802Cu;
    // 0x49802c: 0x0  nop
    ctx->pc = 0x49802cu;
    // NOP
}
