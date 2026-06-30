#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1E30
// Address: 0x1b1e30 - 0x1b2048
void sub_001B1E30_0x1b1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1E30_0x1b1e30");
#endif

    switch (ctx->pc) {
        case 0x1b1ec0u: goto label_1b1ec0;
        case 0x1b1f28u: goto label_1b1f28;
        case 0x1b1f90u: goto label_1b1f90;
        case 0x1b1f98u: goto label_1b1f98;
        case 0x1b1fdcu: goto label_1b1fdc;
        case 0x1b1ffcu: goto label_1b1ffc;
        case 0x1b200cu: goto label_1b200c;
        case 0x1b2020u: goto label_1b2020;
        default: break;
    }

    ctx->pc = 0x1b1e30u;

    // 0x1b1e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1e34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b1e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b1e38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b1e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b1e3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b1e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b1e44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b1e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e48: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b1e4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e50: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b1e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b1e54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b1e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b1e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b1e64: 0x8e832030  lw          $v1, 0x2030($s4)
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8240)));
    // 0x1b1e68: 0x24711128  addiu       $s1, $v1, 0x1128
    ctx->pc = 0x1b1e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x1b1e6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b1e70: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b1e74: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b1e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b1e78: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x1b1e78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b1e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1e80: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1b1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b1e84: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1b1e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1b1e88: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b1e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1b1e8c: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x1b1e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b1e90: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x1b1e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x1b1e94: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x1b1e94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b1e98: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x1b1e98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1b1e9c: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x1b1e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b1ea0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1b1ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1ea4: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1b1ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b1ea8: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1b1eac: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x1b1eacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b1eb0: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x1b1eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1b1eb4: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x1b1eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b1eb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1EB8u;
    {
        const bool branch_taken_0x1b1eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EB8u;
            // 0x1b1ebc: 0x2a470004  slti        $a3, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1eb8) {
            ctx->pc = 0x1B1F14u;
            goto label_1b1f14;
        }
    }
    ctx->pc = 0x1B1EC0u;
label_1b1ec0:
    // 0x1b1ec0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1ec4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1EC4u;
    {
        const bool branch_taken_0x1b1ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EC4u;
            // 0x1b1ec8: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ec4) {
            ctx->pc = 0x1B1F10u;
            goto label_1b1f10;
        }
    }
    ctx->pc = 0x1B1ECCu;
    // 0x1b1ecc: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x1b1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1b1ed0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1ed4: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1ED4u;
    {
        const bool branch_taken_0x1b1ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ed4) {
            ctx->pc = 0x1B1ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1ED4u;
            // 0x1b1ed8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1F14u;
            goto label_1b1f14;
        }
    }
    ctx->pc = 0x1B1EDCu;
    // 0x1b1edc: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x1b1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1b1ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b1ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ee4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1b1ee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b1ee8: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1EE8u;
    {
        const bool branch_taken_0x1b1ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b1ee8) {
            ctx->pc = 0x1B1EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EE8u;
            // 0x1b1eec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1F14u;
            goto label_1b1f14;
        }
    }
    ctx->pc = 0x1B1EF0u;
    // 0x1b1ef0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1b1ef0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b1ef4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1EF4u;
    {
        const bool branch_taken_0x1b1ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EF4u;
            // 0x1b1ef8: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ef4) {
            ctx->pc = 0x1B1F60u;
            goto label_1b1f60;
        }
    }
    ctx->pc = 0x1B1EFCu;
    // 0x1b1efc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1EFCu;
    {
        const bool branch_taken_0x1b1efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1efc) {
            ctx->pc = 0x1B1F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EFCu;
            // 0x1b1f00: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1F14u;
            goto label_1b1f14;
        }
    }
    ctx->pc = 0x1B1F04u;
    // 0x1b1f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1F04u;
    {
        const bool branch_taken_0x1b1f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F04u;
            // 0x1b1f08: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f04) {
            ctx->pc = 0x1B1F28u;
            goto label_1b1f28;
        }
    }
    ctx->pc = 0x1B1F0Cu;
    // 0x1b1f0c: 0x0  nop
    ctx->pc = 0x1b1f0cu;
    // NOP
label_1b1f10:
    // 0x1b1f10: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b1f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f14:
    // 0x1b1f14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1f18: 0x247100b  movn        $v0, $s2, $a3
    ctx->pc = 0x1b1f18u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x1b1f1c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b1f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1f20: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B1F20u;
    {
        const bool branch_taken_0x1b1f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F20u;
            // 0x1b1f24: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f20) {
            ctx->pc = 0x1B1EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1ec0;
        }
    }
    ctx->pc = 0x1B1F28u;
label_1b1f28:
    // 0x1b1f28: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1b1f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b1f2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1F2Cu;
    {
        const bool branch_taken_0x1b1f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F2Cu;
            // 0x1b1f30: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f2c) {
            ctx->pc = 0x1B1F70u;
            goto label_1b1f70;
        }
    }
    ctx->pc = 0x1B1F34u;
    // 0x1b1f34: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x1b1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1b1f38: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1b1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1b1f3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1f3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1f40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b1f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f44: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x1b1f44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b1f48: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1b1f48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b1f4c: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x1b1f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b1f50: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1b1f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1b1f54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B1F54u;
    {
        const bool branch_taken_0x1b1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F54u;
            // 0x1b1f58: 0xa2230012  sb          $v1, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f54) {
            ctx->pc = 0x1B1FC4u;
            goto label_1b1fc4;
        }
    }
    ctx->pc = 0x1B1F5Cu;
    // 0x1b1f5c: 0x0  nop
    ctx->pc = 0x1b1f5cu;
    // NOP
label_1b1f60:
    // 0x1b1f60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b1f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1f68: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B1F68u;
    {
        const bool branch_taken_0x1b1f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F68u;
            // 0x1b1f6c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f68) {
            ctx->pc = 0x1B1F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1f28;
        }
    }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x9082fffd  lbu         $v0, -0x3($a0)
    ctx->pc = 0x1b1f70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x1b1f74: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1b1f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b1f78: 0x9083fffe  lbu         $v1, -0x2($a0)
    ctx->pc = 0x1b1f78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x1b1f7c: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1b1f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b1f80: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x1b1f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x1b1f84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B1F84u;
    {
        const bool branch_taken_0x1b1f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F84u;
            // 0x1b1f88: 0xa2220012  sb          $v0, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f84) {
            ctx->pc = 0x1B1FC4u;
            goto label_1b1fc4;
        }
    }
    ctx->pc = 0x1B1F8Cu;
    // 0x1b1f8c: 0x0  nop
    ctx->pc = 0x1b1f8cu;
    // NOP
label_1b1f90:
    // 0x1b1f90: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1B1F90u;
    SET_GPR_U32(ctx, 31, 0x1B1F98u);
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F98u; }
        if (ctx->pc != 0x1B1F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F98u; }
        if (ctx->pc != 0x1B1F98u) { return; }
    }
    ctx->pc = 0x1B1F98u;
label_1b1f98:
    // 0x1b1f98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1f9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1F9Cu;
    {
        const bool branch_taken_0x1b1f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f9c) {
            ctx->pc = 0x1B1FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F9Cu;
            // 0x1b1fa0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1FA4u;
    // 0x1b1fa4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b1fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1fac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b1facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1b1fb0:
    // 0x1b1fb0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b1fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b1fb4: 0x2131023  subu        $v0, $s0, $s3
    ctx->pc = 0x1b1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1b1fb8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1b1fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fbc: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1fc0: 0x2a470004  slti        $a3, $s2, 0x4
    ctx->pc = 0x1b1fc0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1b1fc4:
    // 0x1b1fc4: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1FC4u;
    {
        const bool branch_taken_0x1b1fc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FC4u;
            // 0x1b1fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc4) {
            ctx->pc = 0x1B1FECu;
            goto label_1b1fec;
        }
    }
    ctx->pc = 0x1B1FCCu;
    // 0x1b1fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b1fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fd4: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x1B1FD4u;
    SET_GPR_U32(ctx, 31, 0x1B1FDCu);
    ctx->pc = 0x1B1FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FD4u;
            // 0x1b1fd8: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FDCu; }
        if (ctx->pc != 0x1B1FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FDCu; }
        if (ctx->pc != 0x1B1FDCu) { return; }
    }
    ctx->pc = 0x1B1FDCu;
label_1b1fdc:
    // 0x1b1fdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fe0: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B1FE0u;
    {
        const bool branch_taken_0x1b1fe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FE0u;
            // 0x1b1fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fe0) {
            ctx->pc = 0x1B1F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1f90;
        }
    }
    ctx->pc = 0x1B1FE8u;
    // 0x1b1fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1fec:
    // 0x1b1fec: 0x56a2000d  bnel        $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1FECu;
    {
        const bool branch_taken_0x1b1fec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1fec) {
            ctx->pc = 0x1B1FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FECu;
            // 0x1b1ff0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2024u;
            goto label_1b2024;
        }
    }
    ctx->pc = 0x1B1FF4u;
    // 0x1b1ff4: 0xc069a18  jal         func_1A6860
    ctx->pc = 0x1B1FF4u;
    SET_GPR_U32(ctx, 31, 0x1B1FFCu);
    ctx->pc = 0x1B1FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FF4u;
            // 0x1b1ff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6860u;
    if (runtime->hasFunction(0x1A6860u)) {
        auto targetFn = runtime->lookupFunction(0x1A6860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FFCu; }
        if (ctx->pc != 0x1B1FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6860_0x1a6860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FFCu; }
        if (ctx->pc != 0x1B1FFCu) { return; }
    }
    ctx->pc = 0x1B1FFCu;
label_1b1ffc:
    // 0x1b1ffc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1FFCu;
    {
        const bool branch_taken_0x1b1ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ffc) {
            ctx->pc = 0x1B2000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FFCu;
            // 0x1b2000: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2024u;
            goto label_1b2024;
        }
    }
    ctx->pc = 0x1B2004u;
    // 0x1b2004: 0xc069a32  jal         func_1A68C8
    ctx->pc = 0x1B2004u;
    SET_GPR_U32(ctx, 31, 0x1B200Cu);
    ctx->pc = 0x1B2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2004u;
            // 0x1b2008: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C8u;
    if (runtime->hasFunction(0x1A68C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A68C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B200Cu; }
        if (ctx->pc != 0x1B200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A68C8_0x1a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B200Cu; }
        if (ctx->pc != 0x1B200Cu) { return; }
    }
    ctx->pc = 0x1B200Cu;
label_1b200c:
    // 0x1b200c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B200Cu;
    {
        const bool branch_taken_0x1b200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B200Cu;
            // 0x1b2010: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b200c) {
            ctx->pc = 0x1B2024u;
            goto label_1b2024;
        }
    }
    ctx->pc = 0x1B2014u;
    // 0x1b2014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2018: 0xc06c6d4  jal         func_1B1B50
    ctx->pc = 0x1B2018u;
    SET_GPR_U32(ctx, 31, 0x1B2020u);
    ctx->pc = 0x1B201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2018u;
            // 0x1b201c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B50u;
    if (runtime->hasFunction(0x1B1B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2020u; }
        if (ctx->pc != 0x1B2020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B50_0x1b1b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2020u; }
        if (ctx->pc != 0x1B2020u) { return; }
    }
    ctx->pc = 0x1B2020u;
label_1b2020:
    // 0x1b2020: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2024:
    // 0x1b2024: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b2024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b2028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b202c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b202cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2030: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b2030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2034: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b2034u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2038: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b203c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B203Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B203Cu;
            // 0x1b2040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2044u;
    // 0x1b2044: 0x0  nop
    ctx->pc = 0x1b2044u;
    // NOP
}
