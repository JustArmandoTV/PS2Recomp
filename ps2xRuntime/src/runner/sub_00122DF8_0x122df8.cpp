#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122DF8
// Address: 0x122df8 - 0x122f10
void sub_00122DF8_0x122df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122DF8_0x122df8");
#endif

    switch (ctx->pc) {
        case 0x122e18u: goto label_122e18;
        case 0x122ea8u: goto label_122ea8;
        case 0x122ed0u: goto label_122ed0;
        default: break;
    }

    ctx->pc = 0x122df8u;

    // 0x122df8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122dfc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x122dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x122e00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x122e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x122e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122e10: 0xc048b5e  jal         func_122D78
    ctx->pc = 0x122E10u;
    SET_GPR_U32(ctx, 31, 0x122E18u);
    ctx->pc = 0x122E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122E10u;
            // 0x122e14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122D78u;
    if (runtime->hasFunction(0x122D78u)) {
        auto targetFn = runtime->lookupFunction(0x122D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122E18u; }
        if (ctx->pc != 0x122E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122D78_0x122d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122E18u; }
        if (ctx->pc != 0x122E18u) { return; }
    }
    ctx->pc = 0x122E18u;
label_122e18:
    // 0x122e18: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x122e18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122e1c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x122e1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122e20: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x122e20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x122e24: 0x624826  xor         $t1, $v1, $v0
    ctx->pc = 0x122e24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x122e28: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x122e28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x122e2c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x122e2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x122e30: 0x95103  sra         $t2, $t1, 4
    ctx->pc = 0x122e30u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 9), 4));
    // 0x122e34: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x122e34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x122e38: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x122e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x122e3c: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x122e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x122e40: 0x4a4026  xor         $t0, $v0, $t2
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x122e44: 0xc41826  xor         $v1, $a2, $a0
    ctx->pc = 0x122e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x122e48: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x122E48u;
    {
        const bool branch_taken_0x122e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E48u;
            // 0x122e4c: 0x653826  xor         $a3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e48) {
            ctx->pc = 0x122E60u;
            goto label_122e60;
        }
    }
    ctx->pc = 0x122E50u;
    // 0x122e50: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x122E50u;
    {
        const bool branch_taken_0x122e50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E50u;
            // 0x122e54: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e50) {
            ctx->pc = 0x122E64u;
            goto label_122e64;
        }
    }
    ctx->pc = 0x122E58u;
    // 0x122e58: 0x11200028  beqz        $t1, . + 4 + (0x28 << 2)
    ctx->pc = 0x122E58u;
    {
        const bool branch_taken_0x122e58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E58u;
            // 0x122e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e58) {
            ctx->pc = 0x122EFCu;
            goto label_122efc;
        }
    }
    ctx->pc = 0x122E60u;
label_122e60:
    // 0x122e60: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_122e64:
    // 0x122e64: 0x14e2000c  bne         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x122E64u;
    {
        const bool branch_taken_0x122e64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x122E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E64u;
            // 0x122e68: 0x82843  sra         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e64) {
            ctx->pc = 0x122E98u;
            goto label_122e98;
        }
    }
    ctx->pc = 0x122E6Cu;
    // 0x122e6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x122e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x122e70: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x122E70u;
    {
        const bool branch_taken_0x122e70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x122E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E70u;
            // 0x122e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e70) {
            ctx->pc = 0x122E9Cu;
            goto label_122e9c;
        }
    }
    ctx->pc = 0x122E78u;
    // 0x122e78: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x122e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x122e7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122e80: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x122e80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122e84: 0x1442004  sllv        $a0, $a0, $t2
    ctx->pc = 0x122e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x122e88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122e8c: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x122e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x122e90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x122E90u;
    {
        const bool branch_taken_0x122e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E90u;
            // 0x122e94: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e90) {
            ctx->pc = 0x122EFCu;
            goto label_122efc;
        }
    }
    ctx->pc = 0x122E98u;
label_122e98:
    // 0x122e98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x122e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122e9c:
    // 0x122e9c: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x122e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x122ea0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x122ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x122ea4: 0x0  nop
    ctx->pc = 0x122ea4u;
    // NOP
label_122ea8:
    // 0x122ea8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x122eac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122eb0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x122eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x122eb4: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x122eb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x122eb8: 0x0  nop
    ctx->pc = 0x122eb8u;
    // NOP
    // 0x122ebc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122EBCu;
    {
        const bool branch_taken_0x122ebc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x122ebc) {
            ctx->pc = 0x122EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122ea8;
        }
    }
    ctx->pc = 0x122EC4u;
    // 0x122ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122EC4u;
    {
        const bool branch_taken_0x122ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122EC4u;
            // 0x122ec8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ec4) {
            ctx->pc = 0x122ED8u;
            goto label_122ed8;
        }
    }
    ctx->pc = 0x122ECCu;
    // 0x122ecc: 0x0  nop
    ctx->pc = 0x122eccu;
    // NOP
label_122ed0:
    // 0x122ed0: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x122ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x122ed4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x122ed4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_122ed8:
    // 0x122ed8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x122ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x122edc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x122edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x122ee0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x122ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x122ee4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122EE4u;
    {
        const bool branch_taken_0x122ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ee4) {
            ctx->pc = 0x122ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122ed0;
        }
    }
    ctx->pc = 0x122EECu;
    // 0x122eec: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x122eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x122ef0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x122ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x122ef4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x122ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x122ef8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x122ef8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_122efc:
    // 0x122efc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x122efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122f00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x122f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x122f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122f08: 0x3e00008  jr          $ra
    ctx->pc = 0x122F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122F08u;
            // 0x122f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122F10u;
}
