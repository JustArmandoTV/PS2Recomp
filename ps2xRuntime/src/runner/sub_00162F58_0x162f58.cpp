#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162F58
// Address: 0x162f58 - 0x1632e8
void sub_00162F58_0x162f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162F58_0x162f58");
#endif

    switch (ctx->pc) {
        case 0x163088u: goto label_163088;
        default: break;
    }

    ctx->pc = 0x162f58u;

    // 0x162f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162f5c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x162f5cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162f64: 0x3c104d52  lui         $s0, 0x4D52
    ctx->pc = 0x162f64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19794 << 16));
    // 0x162f68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162f6c: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x162f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x162f70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162f74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x162f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x162f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x162f7c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x162f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x162f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x162f84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x162f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x162f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x162f8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x162f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f90: 0x36104f46  ori         $s0, $s0, 0x4F46
    ctx->pc = 0x162f90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20294);
    // 0x162f94: 0x930f0000  lbu         $t7, 0x0($t8)
    ctx->pc = 0x162f94u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x162f98: 0x930e0003  lbu         $t6, 0x3($t8)
    ctx->pc = 0x162f98u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x162f9c: 0x930c0002  lbu         $t4, 0x2($t8)
    ctx->pc = 0x162f9cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x162fa0: 0x930d0001  lbu         $t5, 0x1($t8)
    ctx->pc = 0x162fa0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x162fa4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x162fa4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x162fa8: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x162fa8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x162fac: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x162facu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x162fb0: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x162fb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x162fb4: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x162fb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x162fb8: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x162fb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x162fbc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x162fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x162fc0: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x162fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x162fc4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x162fc8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x162fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x162fcc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x162fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x162fd0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x162fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x162fd4: 0x93050002  lbu         $a1, 0x2($t8)
    ctx->pc = 0x162fd4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x162fd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x162fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x162fdc: 0x930b0003  lbu         $t3, 0x3($t8)
    ctx->pc = 0x162fdcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x162fe0: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x162fe0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x162fe4: 0x930a0001  lbu         $t2, 0x1($t8)
    ctx->pc = 0x162fe4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x162fe8: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x162fec: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x162fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x162ff0: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x162ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x162ff4: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x162ff4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x162ff8: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x162ff8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x162ffc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x162ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x163000: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x163000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x163004: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x163004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163008: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x163008u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x16300c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x16300cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163010: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x163010u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x163014: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x163014u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163018: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x163018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16301c: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x16301cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x163020: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x163024: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x163024u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x163028: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x163028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x16302c: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x16302cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x163030: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x163030u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x163034: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x163034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x163038: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x163038u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x16303c: 0x82c825  or          $t9, $a0, $v0
    ctx->pc = 0x16303cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x163040: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x163040u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x163044: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x163044u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x163048: 0x15f0009e  bne         $t7, $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x163048u;
    {
        const bool branch_taken_0x163048 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x16304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163048u;
            // 0x16304c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163048) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x163050u;
    // 0x163050: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x163054: 0x34424941  ori         $v0, $v0, 0x4941
    ctx->pc = 0x163054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18753);
    // 0x163058: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163058u;
    {
        const bool branch_taken_0x163058 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x163058) {
            ctx->pc = 0x16305Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163058u;
            // 0x16305c: 0x3191021  addu        $v0, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163068u;
            goto label_163068;
        }
    }
    ctx->pc = 0x163060u;
    // 0x163060: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x163060u;
    {
        const bool branch_taken_0x163060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163060u;
            // 0x163064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163060) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x163068u;
label_163068:
    // 0x163068: 0x244bfffc  addiu       $t3, $v0, -0x4
    ctx->pc = 0x163068u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x16306c: 0x30b182b  sltu        $v1, $t8, $t3
    ctx->pc = 0x16306cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x163070: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x163070u;
    {
        const bool branch_taken_0x163070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163070u;
            // 0x163074: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163070) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x163078u;
    // 0x163078: 0x3c0c00ff  lui         $t4, 0xFF
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)255 << 16));
    // 0x16307c: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x16307cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x163080: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x163080u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x163084: 0x0  nop
    ctx->pc = 0x163084u;
    // NOP
label_163088:
    // 0x163088: 0x3c0a444e  lui         $t2, 0x444E
    ctx->pc = 0x163088u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17486 << 16));
    // 0x16308c: 0x93080003  lbu         $t0, 0x3($t8)
    ctx->pc = 0x16308cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x163090: 0x354a5353  ori         $t2, $t2, 0x5353
    ctx->pc = 0x163090u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21331);
    // 0x163094: 0x93060002  lbu         $a2, 0x2($t8)
    ctx->pc = 0x163094u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x163098: 0x93070001  lbu         $a3, 0x1($t8)
    ctx->pc = 0x163098u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x16309c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x16309cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1630a0: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x1630a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1630a4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1630a8: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x1630a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1630ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1630acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1630b0: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1630b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1630b4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1630b8: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1630b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1630bc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1630bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1630c0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1630c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1630c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1630c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1630cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1630ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1630d0: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x1630d0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1630d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1630d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1630d8: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x1630d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x1630dc: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x1630dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x1630e0: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x1630e4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1630e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1630e8: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1630e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1630ec: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x1630ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1630f0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1630f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1630f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1630f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1630f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1630f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1630fc: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x1630fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x163100: 0x1267825  or          $t7, $t1, $a2
    ctx->pc = 0x163100u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x163104: 0x11ea004c  beq         $t7, $t2, . + 4 + (0x4C << 2)
    ctx->pc = 0x163104u;
    {
        const bool branch_taken_0x163104 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x163108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163104u;
            // 0x163108: 0x82c825  or          $t9, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163104) {
            ctx->pc = 0x163238u;
            goto label_163238;
        }
    }
    ctx->pc = 0x16310Cu;
    // 0x16310c: 0x3c024d4d  lui         $v0, 0x4D4D
    ctx->pc = 0x16310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19789 << 16));
    // 0x163110: 0x34424f43  ori         $v0, $v0, 0x4F43
    ctx->pc = 0x163110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20291);
    // 0x163114: 0x15e20064  bne         $t7, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x163114u;
    {
        const bool branch_taken_0x163114 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x163118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163114u;
            // 0x163118: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163114) {
            ctx->pc = 0x1632A8u;
            goto label_1632a8;
        }
    }
    ctx->pc = 0x16311Cu;
    // 0x16311c: 0x15a00066  bnez        $t5, . + 4 + (0x66 << 2)
    ctx->pc = 0x16311Cu;
    {
        const bool branch_taken_0x16311c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x163120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16311Cu;
            // 0x163120: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16311c) {
            ctx->pc = 0x1632B8u;
            goto label_1632b8;
        }
    }
    ctx->pc = 0x163124u;
    // 0x163124: 0x2b220012  slti        $v0, $t9, 0x12
    ctx->pc = 0x163124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x163128: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x163128u;
    {
        const bool branch_taken_0x163128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163128u;
            // 0x16312c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163128) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x163130u;
    // 0x163130: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x163130u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x163134: 0x2406400e  addiu       $a2, $zero, 0x400E
    ctx->pc = 0x163134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x163138: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x163138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x16313c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x16313cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x163140: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x163144: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x163144u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163148: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x163148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16314c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x16314cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x163150: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x163150u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x163154: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x163154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x163158: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16315c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x16315cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x163160: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x163160u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x163164: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x163164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x163168: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x163168u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x16316c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x163170: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x163170u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x163174: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x163174u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x163178: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x16317c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x163180: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x163180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x163184: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x163184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x163188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x163188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16318c: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x163190: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x163194: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x163194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x163198: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x16319c: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x16319cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x1631a0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1631a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1631a4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1631a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1631a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1631a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1631ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1631acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1631b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1631b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1631b4: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1631b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1631b8: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1631b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1631bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x1631c0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1631c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1631c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1631c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1631c8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1631c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1631cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1631ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1631d0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1631d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1631d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1631d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1631d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1631d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1631dc: 0x93050000  lbu         $a1, 0x0($t8)
    ctx->pc = 0x1631dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1631e0: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1631e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1631e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x1631e8: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x1631e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1631ec: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1631ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1631f0: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x1631f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x1631f4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1631f8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1631fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1631fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x163200: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x163200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x163204: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x163208: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16320c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x16320cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x163210: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x163214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x163218: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x163218u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16321c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x163220: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x163224: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x163224u;
    {
        const bool branch_taken_0x163224 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x163228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163224u;
            // 0x163228: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163224) {
            ctx->pc = 0x1632B4u;
            goto label_1632b4;
        }
    }
    ctx->pc = 0x16322Cu;
    // 0x16322c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16322Cu;
    {
        const bool branch_taken_0x16322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16322Cu;
            // 0x163230: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16322c) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x163234u;
    // 0x163234: 0x0  nop
    ctx->pc = 0x163234u;
    // NOP
label_163238:
    // 0x163238: 0x15c0001f  bnez        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x163238u;
    {
        const bool branch_taken_0x163238 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x16323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163238u;
            // 0x16323c: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163238) {
            ctx->pc = 0x1632B8u;
            goto label_1632b8;
        }
    }
    ctx->pc = 0x163240u;
    // 0x163240: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x163240u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x163244: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163248: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x163248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x16324c: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x16324cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x163250: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x163250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x163254: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x163254u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x163258: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x163258u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x16325c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x16325cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x163260: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x163260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x163264: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x163264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x163268: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x163268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x16326c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x163270: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x163270u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x163274: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x163274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x163278: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x163278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x16327c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x16327cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x163280: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x163280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x163284: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x163284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x163288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x163288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16328c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x16328cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x163290: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x163290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163294: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x163294u;
    {
        const bool branch_taken_0x163294 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x163298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163294u;
            // 0x163298: 0x3028821  addu        $s1, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163294) {
            ctx->pc = 0x1632B4u;
            goto label_1632b4;
        }
    }
    ctx->pc = 0x16329Cu;
    // 0x16329c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16329Cu;
    {
        const bool branch_taken_0x16329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16329Cu;
            // 0x1632a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16329c) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x1632A4u;
    // 0x1632a4: 0x0  nop
    ctx->pc = 0x1632a4u;
    // NOP
label_1632a8:
    // 0x1632a8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1632a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1632ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1632acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1632b0: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_1632b4:
    // 0x1632b4: 0x30b102b  sltu        $v0, $t8, $t3
    ctx->pc = 0x1632b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_1632b8:
    // 0x1632b8: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x1632B8u;
    {
        const bool branch_taken_0x1632b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1632b8) {
            ctx->pc = 0x1632BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1632B8u;
            // 0x1632bc: 0x93090000  lbu         $t1, 0x0($t8) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163088;
        }
    }
    ctx->pc = 0x1632C0u;
    // 0x1632c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1632c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1632c4:
    // 0x1632c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1632c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1632c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1632c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1632cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1632ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1632d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1632d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1632d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1632d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1632d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1632d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1632dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1632DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1632E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1632DCu;
            // 0x1632e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1632E4u;
    // 0x1632e4: 0x0  nop
    ctx->pc = 0x1632e4u;
    // NOP
}
