#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166E08
// Address: 0x166e08 - 0x167068
void sub_00166E08_0x166e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166E08_0x166e08");
#endif

    switch (ctx->pc) {
        case 0x166e60u: goto label_166e60;
        default: break;
    }

    ctx->pc = 0x166e08u;

    // 0x166e08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166e0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x166e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x166e10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x166e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x166e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x166e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x166e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x166e20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x166e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e24: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x166e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x166e28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x166e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e2c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x166e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x166e30: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x166e30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e34: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x166e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x166e38: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x166e38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e3c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x166e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x166e40: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x166e40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e44: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x166e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x166e48: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x166e48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x166e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x166e50: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x166e54: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x166e54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x166e58: 0xc059ae4  jal         func_166B90
    ctx->pc = 0x166E58u;
    SET_GPR_U32(ctx, 31, 0x166E60u);
    ctx->pc = 0x166E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E58u;
            // 0x166e5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B90u;
    if (runtime->hasFunction(0x166B90u)) {
        auto targetFn = runtime->lookupFunction(0x166B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E60u; }
        if (ctx->pc != 0x166E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B90_0x166b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E60u; }
        if (ctx->pc != 0x166E60u) { return; }
    }
    ctx->pc = 0x166E60u;
label_166e60:
    // 0x166e60: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x166E60u;
    {
        const bool branch_taken_0x166e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166e60) {
            ctx->pc = 0x166E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166E60u;
            // 0x166e64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167040u;
            goto label_167040;
        }
    }
    ctx->pc = 0x166E68u;
    // 0x166e68: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x166e68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166e6c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x166e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x166e70: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x166e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x166e74: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x166e74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x166e78: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x166e78u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x166e7c: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x166e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x166e80: 0x5460006e  bnel        $v1, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x166E80u;
    {
        const bool branch_taken_0x166e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166e80) {
            ctx->pc = 0x166E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166E80u;
            // 0x166e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16703Cu;
            goto label_16703c;
        }
    }
    ctx->pc = 0x166E88u;
    // 0x166e88: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x166e88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166e8c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x166e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166e90: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x166e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166e94: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x166e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x166e98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166e9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x166e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166ea0: 0x14650027  bne         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x166EA0u;
    {
        const bool branch_taken_0x166ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x166EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166EA0u;
            // 0x166ea4: 0x240eff00  addiu       $t6, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ea0) {
            ctx->pc = 0x166F40u;
            goto label_166f40;
        }
    }
    ctx->pc = 0x166EA8u;
    // 0x166ea8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x166ea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x166eac: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x166eb0: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x166eb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x166eb4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x166eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x166eb8: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x166eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x166ebc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x166ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166ec0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x166ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x166ec4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x166ec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x166ec8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x166ec8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x166ecc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166ECCu;
    {
        const bool branch_taken_0x166ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166ECCu;
            // 0x166ed0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ecc) {
            ctx->pc = 0x166EE0u;
            goto label_166ee0;
        }
    }
    ctx->pc = 0x166ED4u;
    // 0x166ed4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x166ED4u;
    {
        const bool branch_taken_0x166ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166ED4u;
            // 0x166ed8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ed4) {
            ctx->pc = 0x16703Cu;
            goto label_16703c;
        }
    }
    ctx->pc = 0x166EDCu;
    // 0x166edc: 0x0  nop
    ctx->pc = 0x166edcu;
    // NOP
label_166ee0:
    // 0x166ee0: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x166ee0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x166ee4: 0x67680a  movz        $t5, $v1, $a3
    ctx->pc = 0x166ee4u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x166ee8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x166ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166eec: 0x20d3021  addu        $a2, $s0, $t5
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x166ef0: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x166ef0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x166ef4: 0x20d3821  addu        $a3, $s0, $t5
    ctx->pc = 0x166ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x166ef8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x166efc: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x166efcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166f00: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x166f00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x166f04: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x166f04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x166f08: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x166f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x166f0c: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x166f0cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x166f10: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x166f14: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x166f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x166f18: 0xae2824  and         $a1, $a1, $t6
    ctx->pc = 0x166f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x166f1c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x166f1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x166f20: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x166f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x166f24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x166f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x166f28: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x166f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x166f2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x166f2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x166f30: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x166f30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x166f34: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x166f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x166f38: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166F38u;
    {
        const bool branch_taken_0x166f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x166F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F38u;
            // 0x166f3c: 0xa6460000  sh          $a2, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f38) {
            ctx->pc = 0x166F48u;
            goto label_166f48;
        }
    }
    ctx->pc = 0x166F40u;
label_166f40:
    // 0x166f40: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x166F40u;
    {
        const bool branch_taken_0x166f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F40u;
            // 0x166f44: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f40) {
            ctx->pc = 0x16703Cu;
            goto label_16703c;
        }
    }
    ctx->pc = 0x166F48u;
label_166f48:
    // 0x166f48: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x166f48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x166f4c: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x166f50: 0x20d5021  addu        $t2, $s0, $t5
    ctx->pc = 0x166f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x166f54: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x166f54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x166f58: 0x20d1821  addu        $v1, $s0, $t5
    ctx->pc = 0x166f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x166f5c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x166f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x166f60: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x166f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166f64: 0x20d5821  addu        $t3, $s0, $t5
    ctx->pc = 0x166f64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x166f68: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x166f68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x166f6c: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x166f6cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x166f70: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x166f70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x166f74: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x166f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x166f78: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x166f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x166f7c: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x166f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x166f80: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x166f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x166f84: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x166f88: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x166f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x166f8c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x166f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x166f90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166f94: 0x20d6021  addu        $t4, $s0, $t5
    ctx->pc = 0x166f94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x166f98: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x166f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x166f9c: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x166f9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x166fa0: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x166fa0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x166fa4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x166fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x166fa8: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x166fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x166fac: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x166facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x166fb0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x166fb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x166fb4: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x166fb4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x166fb8: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x166fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x166fbc: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x166fbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x166fc0: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x166fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x166fc4: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x166fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x166fc8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x166fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x166fcc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x166fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x166fd0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x166fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x166fd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x166fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x166fd8: 0xa6c80000  sh          $t0, 0x0($s6)
    ctx->pc = 0x166fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x166fdc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x166fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x166fe0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x166fe4: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x166fe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x166fe8: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x166fec: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x166fecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x166ff0: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x166ff4: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x166ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x166ff8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x166ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x166ffc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x166ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x167000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x167000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x167004: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x167004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x167008: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x167008u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x16700c: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x16700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x167010: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x167010u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x167014: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x167014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x167018: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x167018u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x16701c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x16701cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x167020: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x167020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x167024: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x167028: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x167028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16702c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167030: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x167030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x167034: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x167034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x167038: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x167038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_16703c:
    // 0x16703c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16703cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167040:
    // 0x167040: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x167040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167044: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x167044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167048: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x167048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16704c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16704cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167050: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x167050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167054: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x167054u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167058: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x167058u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16705c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16705cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167060: 0x3e00008  jr          $ra
    ctx->pc = 0x167060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167060u;
            // 0x167064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167068u;
}
