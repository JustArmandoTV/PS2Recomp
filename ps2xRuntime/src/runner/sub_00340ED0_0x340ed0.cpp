#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340ED0
// Address: 0x340ed0 - 0x341070
void sub_00340ED0_0x340ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340ED0_0x340ed0");
#endif

    ctx->pc = 0x340ed0u;

    // 0x340ed0: 0x8c830d44  lw          $v1, 0xD44($a0)
    ctx->pc = 0x340ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x340ed4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340ED4u;
    {
        const bool branch_taken_0x340ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340ED4u;
            // 0x340ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ed4) {
            ctx->pc = 0x340EE4u;
            goto label_340ee4;
        }
    }
    ctx->pc = 0x340EDCu;
    // 0x340edc: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x340EDCu;
    {
        const bool branch_taken_0x340edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340EDCu;
            // 0x340ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340edc) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340EE4u;
label_340ee4:
    // 0x340ee4: 0x90860ce4  lbu         $a2, 0xCE4($a0)
    ctx->pc = 0x340ee4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3300)));
    // 0x340ee8: 0x2cc10014  sltiu       $at, $a2, 0x14
    ctx->pc = 0x340ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x340eec: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x340EECu;
    {
        const bool branch_taken_0x340eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340eec) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340EF4u;
    // 0x340ef4: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x340ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x340ef8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x340ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x340efc: 0x24e700e0  addiu       $a3, $a3, 0xE0
    ctx->pc = 0x340efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
    // 0x340f00: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x340f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x340f04: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x340f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x340f08: 0xc00008  jr          $a2
    ctx->pc = 0x340F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x340F10u: goto label_340f10;
            case 0x340FA0u: goto label_340fa0;
            case 0x340FB4u: goto label_340fb4;
            case 0x341044u: goto label_341044;
            case 0x341058u: goto label_341058;
            case 0x34105Cu: goto label_34105c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x340F10u;
label_340f10:
    // 0x340f10: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x340f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x340f14: 0x8c870784  lw          $a3, 0x784($a0)
    ctx->pc = 0x340f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x340f18: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x340F18u;
    {
        const bool branch_taken_0x340f18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340F18u;
            // 0x340f1c: 0x8cc60e84  lw          $a2, 0xE84($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f18) {
            ctx->pc = 0x340F8Cu;
            goto label_340f8c;
        }
    }
    ctx->pc = 0x340F20u;
    // 0x340f20: 0x80c80e3f  lb          $t0, 0xE3F($a2)
    ctx->pc = 0x340f20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 3647)));
    // 0x340f24: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x340f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340f28: 0x51070009  beql        $t0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x340F28u;
    {
        const bool branch_taken_0x340f28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x340f28) {
            ctx->pc = 0x340F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340F28u;
            // 0x340f2c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340F50u;
            goto label_340f50;
        }
    }
    ctx->pc = 0x340F30u;
    // 0x340f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x340f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340f34: 0x51060005  beql        $t0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x340F34u;
    {
        const bool branch_taken_0x340f34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x340f34) {
            ctx->pc = 0x340F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340F34u;
            // 0x340f38: 0x74e3c  dsll32      $t1, $a3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340F4Cu;
            goto label_340f4c;
        }
    }
    ctx->pc = 0x340F3Cu;
    // 0x340f3c: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x340F3Cu;
    {
        const bool branch_taken_0x340f3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x340f3c) {
            ctx->pc = 0x340F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340F3Cu;
            // 0x340f40: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340F50u;
            goto label_340f50;
        }
    }
    ctx->pc = 0x340F44u;
    // 0x340f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x340F44u;
    {
        const bool branch_taken_0x340f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340F44u;
            // 0x340f48: 0x8c860d48  lw          $a2, 0xD48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f44) {
            ctx->pc = 0x340F54u;
            goto label_340f54;
        }
    }
    ctx->pc = 0x340F4Cu;
label_340f4c:
    // 0x340f4c: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x340f4cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_340f50:
    // 0x340f50: 0x8c860d48  lw          $a2, 0xD48($a0)
    ctx->pc = 0x340f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3400)));
label_340f54:
    // 0x340f54: 0x9263c  dsll32      $a0, $t1, 24
    ctx->pc = 0x340f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 24));
    // 0x340f58: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x340f58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x340f5c: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x340f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x340f60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x340F60u;
    {
        const bool branch_taken_0x340f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x340f60) {
            ctx->pc = 0x340F70u;
            goto label_340f70;
        }
    }
    ctx->pc = 0x340F68u;
    // 0x340f68: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x340F68u;
    {
        const bool branch_taken_0x340f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340F68u;
            // 0x340f6c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f68) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340F70u;
label_340f70:
    // 0x340f70: 0x1486003a  bne         $a0, $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x340F70u;
    {
        const bool branch_taken_0x340f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x340f70) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340F78u;
    // 0x340f78: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x340f78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x340f7c: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x340F7Cu;
    {
        const bool branch_taken_0x340f7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x340f7c) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340F84u;
    // 0x340f84: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x340F84u;
    {
        const bool branch_taken_0x340f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340F84u;
            // 0x340f88: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f84) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340F8Cu;
label_340f8c:
    // 0x340f8c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x340f8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x340f90: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x340F90u;
    {
        const bool branch_taken_0x340f90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x340f90) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340F98u;
    // 0x340f98: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x340F98u;
    {
        const bool branch_taken_0x340f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340F98u;
            // 0x340f9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f98) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340FA0u;
label_340fa0:
    // 0x340fa0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x340fa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x340fa4: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x340FA4u;
    {
        const bool branch_taken_0x340fa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x340fa4) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340FACu;
    // 0x340fac: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x340FACu;
    {
        const bool branch_taken_0x340fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340FACu;
            // 0x340fb0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340fac) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x340FB4u;
label_340fb4:
    // 0x340fb4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x340fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x340fb8: 0x8c870784  lw          $a3, 0x784($a0)
    ctx->pc = 0x340fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x340fbc: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x340FBCu;
    {
        const bool branch_taken_0x340fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x340FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340FBCu;
            // 0x340fc0: 0x8cc60e84  lw          $a2, 0xE84($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340fbc) {
            ctx->pc = 0x341030u;
            goto label_341030;
        }
    }
    ctx->pc = 0x340FC4u;
    // 0x340fc4: 0x80c80e3f  lb          $t0, 0xE3F($a2)
    ctx->pc = 0x340fc4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 3647)));
    // 0x340fc8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x340fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340fcc: 0x51070009  beql        $t0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x340FCCu;
    {
        const bool branch_taken_0x340fcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x340fcc) {
            ctx->pc = 0x340FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340FCCu;
            // 0x340fd0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340FF4u;
            goto label_340ff4;
        }
    }
    ctx->pc = 0x340FD4u;
    // 0x340fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x340fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340fd8: 0x51060005  beql        $t0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x340FD8u;
    {
        const bool branch_taken_0x340fd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x340fd8) {
            ctx->pc = 0x340FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340FD8u;
            // 0x340fdc: 0x74e3c  dsll32      $t1, $a3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340FF0u;
            goto label_340ff0;
        }
    }
    ctx->pc = 0x340FE0u;
    // 0x340fe0: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x340FE0u;
    {
        const bool branch_taken_0x340fe0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fe0) {
            ctx->pc = 0x340FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340FE0u;
            // 0x340fe4: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340FF4u;
            goto label_340ff4;
        }
    }
    ctx->pc = 0x340FE8u;
    // 0x340fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x340FE8u;
    {
        const bool branch_taken_0x340fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340FE8u;
            // 0x340fec: 0x8c860d48  lw          $a2, 0xD48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340fe8) {
            ctx->pc = 0x340FF8u;
            goto label_340ff8;
        }
    }
    ctx->pc = 0x340FF0u;
label_340ff0:
    // 0x340ff0: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x340ff0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_340ff4:
    // 0x340ff4: 0x8c860d48  lw          $a2, 0xD48($a0)
    ctx->pc = 0x340ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3400)));
label_340ff8:
    // 0x340ff8: 0x9263c  dsll32      $a0, $t1, 24
    ctx->pc = 0x340ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 24));
    // 0x340ffc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x340ffcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x341000: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x341000u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x341004: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x341004u;
    {
        const bool branch_taken_0x341004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341004) {
            ctx->pc = 0x341014u;
            goto label_341014;
        }
    }
    ctx->pc = 0x34100Cu;
    // 0x34100c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x34100Cu;
    {
        const bool branch_taken_0x34100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34100Cu;
            // 0x341010: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34100c) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x341014u;
label_341014:
    // 0x341014: 0x14860011  bne         $a0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x341014u;
    {
        const bool branch_taken_0x341014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x341014) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x34101Cu;
    // 0x34101c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x34101cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x341020: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x341020u;
    {
        const bool branch_taken_0x341020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341020) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x341028u;
    // 0x341028: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x341028u;
    {
        const bool branch_taken_0x341028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341028u;
            // 0x34102c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341028) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x341030u;
label_341030:
    // 0x341030: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x341030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x341034: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x341034u;
    {
        const bool branch_taken_0x341034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341034) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x34103Cu;
    // 0x34103c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34103Cu;
    {
        const bool branch_taken_0x34103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34103Cu;
            // 0x341040: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34103c) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x341044u;
label_341044:
    // 0x341044: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x341044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x341048: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x341048u;
    {
        const bool branch_taken_0x341048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341048) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x341050u;
    // 0x341050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x341050u;
    {
        const bool branch_taken_0x341050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341050u;
            // 0x341054: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341050) {
            ctx->pc = 0x34105Cu;
            goto label_34105c;
        }
    }
    ctx->pc = 0x341058u;
label_341058:
    // 0x341058: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x341058u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_34105c:
    // 0x34105c: 0x3e00008  jr          $ra
    ctx->pc = 0x34105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341064u;
    // 0x341064: 0x0  nop
    ctx->pc = 0x341064u;
    // NOP
    // 0x341068: 0x0  nop
    ctx->pc = 0x341068u;
    // NOP
    // 0x34106c: 0x0  nop
    ctx->pc = 0x34106cu;
    // NOP
}
