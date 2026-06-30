#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167068
// Address: 0x167068 - 0x167288
void sub_00167068_0x167068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167068_0x167068");
#endif

    switch (ctx->pc) {
        case 0x1670b0u: goto label_1670b0;
        default: break;
    }

    ctx->pc = 0x167068u;

    // 0x167068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16706c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167070: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x167070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167074: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x167074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x167078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16707c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x167080: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167084: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x167084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x167088: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x167088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16708c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x167090: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x167090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167094: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x167094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x167098: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x167098u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16709c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1670a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1670a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670a4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1670a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1670a8: 0xc059ae4  jal         func_166B90
    ctx->pc = 0x1670A8u;
    SET_GPR_U32(ctx, 31, 0x1670B0u);
    ctx->pc = 0x1670ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1670A8u;
            // 0x1670ac: 0x27a70001  addiu       $a3, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B90u;
    if (runtime->hasFunction(0x166B90u)) {
        auto targetFn = runtime->lookupFunction(0x166B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670B0u; }
        if (ctx->pc != 0x1670B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B90_0x166b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670B0u; }
        if (ctx->pc != 0x1670B0u) { return; }
    }
    ctx->pc = 0x1670B0u;
label_1670b0:
    // 0x1670b0: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1670B0u;
    {
        const bool branch_taken_0x1670b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1670b0) {
            ctx->pc = 0x1670B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1670B0u;
            // 0x1670b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167264u;
            goto label_167264;
        }
    }
    ctx->pc = 0x1670B8u;
    // 0x1670b8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1670b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1670bc: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1670bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1670c0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1670c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1670c4: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x1670c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1670c8: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x1670c8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x1670cc: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1670d0: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x1670D0u;
    {
        const bool branch_taken_0x1670d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1670d0) {
            ctx->pc = 0x1670D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1670D0u;
            // 0x1670d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167260u;
            goto label_167260;
        }
    }
    ctx->pc = 0x1670D8u;
    // 0x1670d8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1670d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1670dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1670dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1670e0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1670e4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1670e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1670e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1670ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1670ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1670f0: 0x1465002b  bne         $v1, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1670F0u;
    {
        const bool branch_taken_0x1670f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1670F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670F0u;
            // 0x1670f4: 0x240aff00  addiu       $t2, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670f0) {
            ctx->pc = 0x1671A0u;
            goto label_1671a0;
        }
    }
    ctx->pc = 0x1670F8u;
    // 0x1670f8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1670f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1670fc: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x167100: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x167100u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x167104: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x167108: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x167108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x16710c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16710cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x167110: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x167114: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x167118: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x167118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16711c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16711Cu;
    {
        const bool branch_taken_0x16711c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16711Cu;
            // 0x167120: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16711c) {
            ctx->pc = 0x167130u;
            goto label_167130;
        }
    }
    ctx->pc = 0x167124u;
    // 0x167124: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x167124u;
    {
        const bool branch_taken_0x167124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167124u;
            // 0x167128: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167124) {
            ctx->pc = 0x167260u;
            goto label_167260;
        }
    }
    ctx->pc = 0x16712Cu;
    // 0x16712c: 0x0  nop
    ctx->pc = 0x16712cu;
    // NOP
label_167130:
    // 0x167130: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x167130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x167134: 0x67480a  movz        $t1, $v1, $a3
    ctx->pc = 0x167134u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x167138: 0x3c084149  lui         $t0, 0x4149
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16713 << 16));
    // 0x16713c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x167140: 0x35084e46  ori         $t0, $t0, 0x4E46
    ctx->pc = 0x167140u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20038);
    // 0x167144: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x167144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x167148: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x16714c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16714cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167150: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x167154: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x167154u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x167158: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x167158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x16715c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x16715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x167160: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x167164: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x167168: 0xc4480b  movn        $t1, $a2, $a0
    ctx->pc = 0x167168u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x16716c: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x16716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x167170: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x167170u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x167174: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x167174u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167178: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x167178u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x16717c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x16717cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x167180: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x167180u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x167184: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x167188: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x16718c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x16718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x167190: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x167190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x167194: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x167194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x167198: 0x10680003  beq         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167198u;
    {
        const bool branch_taken_0x167198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x16719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167198u;
            // 0x16719c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167198) {
            ctx->pc = 0x1671A8u;
            goto label_1671a8;
        }
    }
    ctx->pc = 0x1671A0u;
label_1671a0:
    // 0x1671a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1671A0u;
    {
        const bool branch_taken_0x1671a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671A0u;
            // 0x1671a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671a0) {
            ctx->pc = 0x167260u;
            goto label_167260;
        }
    }
    ctx->pc = 0x1671A8u;
label_1671a8:
    // 0x1671a8: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x1671a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1671ac: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1671acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1671b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1671b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1671b4: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x1671b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x1671b8: 0x2094021  addu        $t0, $s0, $t1
    ctx->pc = 0x1671b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1671bc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1671bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1671c0: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1671c4: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1671c8: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x1671c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1671cc: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1671ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1671d0: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1671d4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1671d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1671d8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1671d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1671dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1671dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1671e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1671e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1671e4: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x1671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1671e8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1671e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1671ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1671ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1671f0: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x1671f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1671f4: 0x1303821  addu        $a3, $t1, $s0
    ctx->pc = 0x1671f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1671f8: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1671f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1671fc: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1671fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x167200: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x167200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x167204: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x167204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x167208: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x167208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16720c: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x16720cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x167210: 0xb284000f  sdl         $a0, 0xF($s4)
    ctx->pc = 0x167210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x167214: 0xb6840008  sdr         $a0, 0x8($s4)
    ctx->pc = 0x167214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x167218: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x167218u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16721c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x16721cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x167220: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x167224: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x167224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x167228: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16722c: 0xa6a40000  sh          $a0, 0x0($s5)
    ctx->pc = 0x16722cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x167230: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x167230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167234: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x167234u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x167238: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x16723c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x16723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x167240: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x167244: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x167244u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x167248: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x167248u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x16724c: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x16724cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x167250: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x167250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x167254: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x167254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x167258: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16725c: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x16725cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
label_167260:
    // 0x167260: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x167260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167264:
    // 0x167264: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x167264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167268: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x167268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16726c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16726cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167270: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x167270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167274: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x167274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167278: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x167278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16727c: 0x3e00008  jr          $ra
    ctx->pc = 0x16727Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16727Cu;
            // 0x167280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167284u;
    // 0x167284: 0x0  nop
    ctx->pc = 0x167284u;
    // NOP
}
