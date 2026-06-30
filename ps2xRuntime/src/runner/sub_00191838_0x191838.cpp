#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00191838
// Address: 0x191838 - 0x1924a0
void sub_00191838_0x191838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191838_0x191838");
#endif

    switch (ctx->pc) {
        case 0x191af0u: goto label_191af0;
        default: break;
    }

    ctx->pc = 0x191838u;

    // 0x191838: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x191838u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19183c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x191840: 0x25820003  addiu       $v0, $t4, 0x3
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x191844: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x191844u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191848: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x191848u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19184c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x19184cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191850: 0x1891823  subu        $v1, $t4, $t1
    ctx->pc = 0x191850u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x191854: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191858: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19185c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x19185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x191860: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x191860u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191864: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191868: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x191868u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19186c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19186cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191870: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x191870u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191874: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191878: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19187c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191880: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191884: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191888: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x19188c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x19188cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191890: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x191890u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x191894: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x191894u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191898: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x19189c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x19189cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1918a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1918a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1918a4: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x1918a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x1918a8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1918a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1918ac: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1918acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1918b0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1918b4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1918b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1918b8: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1918b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1918bc: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1918bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1918c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1918c4: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1918c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1918c8: 0x248700a8  addiu       $a3, $a0, 0xA8
    ctx->pc = 0x1918c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x1918cc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1918ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1918d0: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x1918d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1918d4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1918D4u;
    {
        const bool branch_taken_0x1918d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1918D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1918D4u;
            // 0x1918d8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918d4) {
            ctx->pc = 0x191948u;
            goto label_191948;
        }
    }
    ctx->pc = 0x1918DCu;
    // 0x1918dc: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1918e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1918E0u;
    {
        const bool branch_taken_0x1918e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1918E0u;
            // 0x1918e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918e0) {
            ctx->pc = 0x191900u;
            goto label_191900;
        }
    }
    ctx->pc = 0x1918E8u;
    // 0x1918e8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1918ec: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1918f0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1918f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1918f4: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1918f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1918F8u;
    {
        const bool branch_taken_0x1918f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1918F8u;
            // 0x1918fc: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918f8) {
            ctx->pc = 0x191908u;
            goto label_191908;
        }
    }
    ctx->pc = 0x191900u;
label_191900:
    // 0x191900: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x191904: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_191908:
    // 0x191908: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191908u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19190c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19190cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191910: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191914: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191918: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191918u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19191c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x19191cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191920: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191924: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191928: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19192c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x19192cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191930: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191934: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191938: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19193c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19193Cu;
    {
        const bool branch_taken_0x19193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19193Cu;
            // 0x191940: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19193c) {
            ctx->pc = 0x191954u;
            goto label_191954;
        }
    }
    ctx->pc = 0x191944u;
    // 0x191944: 0x0  nop
    ctx->pc = 0x191944u;
    // NOP
label_191948:
    // 0x191948: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x191948u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x19194c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x19194cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x191950: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_191954:
    // 0x191954: 0x24a3ff20  addiu       $v1, $a1, -0xE0
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x191958: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x191958u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x19195c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x19195cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x191960: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191960u;
    {
        const bool branch_taken_0x191960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191960u;
            // 0x191964: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191960) {
            ctx->pc = 0x1919B8u;
            goto label_1919b8;
        }
    }
    ctx->pc = 0x191968u;
    // 0x191968: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x19196c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x19196cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x191970: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x191970u;
    {
        const bool branch_taken_0x191970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191970u;
            // 0x191974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191970) {
            ctx->pc = 0x1919B8u;
            goto label_1919b8;
        }
    }
    ctx->pc = 0x191978u;
    // 0x191978: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x191978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x19197c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19197Cu;
    {
        const bool branch_taken_0x19197c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x191980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19197Cu;
            // 0x191980: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19197c) {
            ctx->pc = 0x191990u;
            goto label_191990;
        }
    }
    ctx->pc = 0x191984u;
    // 0x191984: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191988u;
    {
        const bool branch_taken_0x191988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191988u;
            // 0x19198c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191988) {
            ctx->pc = 0x1919B8u;
            goto label_1919b8;
        }
    }
    ctx->pc = 0x191990u;
label_191990:
    // 0x191990: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191990u;
    {
        const bool branch_taken_0x191990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x191994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191990u;
            // 0x191994: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191990) {
            ctx->pc = 0x1919A8u;
            goto label_1919a8;
        }
    }
    ctx->pc = 0x191998u;
    // 0x191998: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19199c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19199Cu;
    {
        const bool branch_taken_0x19199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19199Cu;
            // 0x1919a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19199c) {
            ctx->pc = 0x1919B8u;
            goto label_1919b8;
        }
    }
    ctx->pc = 0x1919A4u;
    // 0x1919a4: 0x0  nop
    ctx->pc = 0x1919a4u;
    // NOP
label_1919a8:
    // 0x1919a8: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1919A8u;
    {
        const bool branch_taken_0x1919a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1919a8) {
            ctx->pc = 0x1919ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1919A8u;
            // 0x1919ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1919B4u;
            goto label_1919b4;
        }
    }
    ctx->pc = 0x1919B0u;
    // 0x1919b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1919b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1919b4:
    // 0x1919b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1919b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1919b8:
    // 0x1919b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1919b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1919bc: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1919bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1919c0: 0x15620027  bne         $t3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1919C0u;
    {
        const bool branch_taken_0x1919c0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x1919C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919C0u;
            // 0x1919c4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919c0) {
            ctx->pc = 0x191A60u;
            goto label_191a60;
        }
    }
    ctx->pc = 0x1919C8u;
    // 0x1919c8: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1919c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1919cc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1919CCu;
    {
        const bool branch_taken_0x1919cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1919D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919CCu;
            // 0x1919d0: 0xa1402  srl         $v0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919cc) {
            ctx->pc = 0x191A48u;
            goto label_191a48;
        }
    }
    ctx->pc = 0x1919D4u;
    // 0x1919d4: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1919d8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1919D8u;
    {
        const bool branch_taken_0x1919d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919D8u;
            // 0x1919dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d8) {
            ctx->pc = 0x191A00u;
            goto label_191a00;
        }
    }
    ctx->pc = 0x1919E0u;
    // 0x1919e0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1919e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1919e4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1919e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1919e8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1919e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1919ec: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1919f0: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1919f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1919F4u;
    {
        const bool branch_taken_0x1919f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919F4u;
            // 0x1919f8: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f4) {
            ctx->pc = 0x191A0Cu;
            goto label_191a0c;
        }
    }
    ctx->pc = 0x1919FCu;
    // 0x1919fc: 0x0  nop
    ctx->pc = 0x1919fcu;
    // NOP
label_191a00:
    // 0x191a00: 0xa1402  srl         $v0, $t2, 16
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x191a04: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191a04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a08: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x191a08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_191a0c:
    // 0x191a0c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191a0cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191a10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191a14: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191a14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191a18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191a1c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191a20: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191a20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191a24: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191a24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191a28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191a2c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191a30: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191a30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191a34: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191a34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191a38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191a3c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191a40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191A40u;
    {
        const bool branch_taken_0x191a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A40u;
            // 0x191a44: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a40) {
            ctx->pc = 0x191A54u;
            goto label_191a54;
        }
    }
    ctx->pc = 0x191A48u;
label_191a48:
    // 0x191a48: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x191a48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x191a4c: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x191a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x191a50: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_191a54:
    // 0x191a54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x191A54u;
    {
        const bool branch_taken_0x191a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A54u;
            // 0x191a58: 0x240d0006  addiu       $t5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a54) {
            ctx->pc = 0x191AC4u;
            goto label_191ac4;
        }
    }
    ctx->pc = 0x191A5Cu;
    // 0x191a5c: 0x0  nop
    ctx->pc = 0x191a5cu;
    // NOP
label_191a60:
    // 0x191a60: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x191A60u;
    {
        const bool branch_taken_0x191a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A60u;
            // 0x191a64: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a60) {
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A68u;
    // 0x191a68: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191a6c: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x191a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x191a70: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191a70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191a74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191A74u;
    {
        const bool branch_taken_0x191a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A74u;
            // 0x191a78: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a74) {
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x191A7Cu;
    // 0x191a7c: 0x0  nop
    ctx->pc = 0x191a7cu;
    // NOP
label_191a80:
    // 0x191a80: 0xacea001c  sw          $t2, 0x1C($a3)
    ctx->pc = 0x191a80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 10));
    // 0x191a84: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191a84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_191a88:
    // 0x191a88: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191a88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191a8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191a90: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191a90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191a94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191a98: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191a98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191a9c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191a9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191aa0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191aa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191aa4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191aa8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191aac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191aacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191ab0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191ab0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191ab4: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191ab8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191abc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191ac0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191ac4:
    // 0x191ac4: 0x24a2ff42  addiu       $v0, $a1, -0xBE
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x191ac8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x191ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x191acc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x191ACCu;
    {
        const bool branch_taken_0x191acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191acc) {
            ctx->pc = 0x191AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191ACCu;
            // 0x191ad0: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191AE8u;
            goto label_191ae8;
        }
    }
    ctx->pc = 0x191AD4u;
    // 0x191ad4: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x191ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x191ad8: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x191adc: 0x3e00008  jr          $ra
    ctx->pc = 0x191ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191ADCu;
            // 0x191ae0: 0xace20024  sw          $v0, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191AE4u;
    // 0x191ae4: 0x0  nop
    ctx->pc = 0x191ae4u;
    // NOP
label_191ae8:
    // 0x191ae8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x191AE8u;
    {
        const bool branch_taken_0x191ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191AE8u;
            // 0x191aec: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ae8) {
            ctx->pc = 0x191B40u;
            goto label_191b40;
        }
    }
    ctx->pc = 0x191AF0u;
label_191af0:
    // 0x191af0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x191af4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191af8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191AF8u;
    {
        const bool branch_taken_0x191af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191af8) {
            ctx->pc = 0x191AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191AF8u;
            // 0x191afc: 0xa5200  sll         $t2, $t2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191B40u;
            goto label_191b40;
        }
    }
    ctx->pc = 0x191B00u;
    // 0x191b00: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191b04: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191b04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191b08: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191b08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191b0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191b10: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191b10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191b14: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191b18: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191b18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191b1c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191b20: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191b20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191b24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191b28: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191b28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191b2c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191b2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191b30: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191b34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191b38: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191b38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191b3c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191b3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191b40:
    // 0x191b40: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x191b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x191b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191B44u;
    {
        const bool branch_taken_0x191b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B44u;
            // 0x191b48: 0xa1e02  srl         $v1, $t2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b44) {
            ctx->pc = 0x191B58u;
            goto label_191b58;
        }
    }
    ctx->pc = 0x191B4Cu;
    // 0x191b4c: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x191b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x191b50: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191b54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x191b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_191b58:
    // 0x191b58: 0x1064ffe5  beq         $v1, $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x191B58u;
    {
        const bool branch_taken_0x191b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x191B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B58u;
            // 0x191b5c: 0x28c2001f  slti        $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b58) {
            ctx->pc = 0x191AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_191af0;
        }
    }
    ctx->pc = 0x191B60u;
    // 0x191b60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191B60u;
    {
        const bool branch_taken_0x191b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B60u;
            // 0x191b64: 0xa1f82  srl         $v1, $t2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b60) {
            ctx->pc = 0x191B78u;
            goto label_191b78;
        }
    }
    ctx->pc = 0x191B68u;
    // 0x191b68: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x191b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x191b6c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191b70: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191b74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x191b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_191b78:
    // 0x191b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191b7c: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x191B7Cu;
    {
        const bool branch_taken_0x191b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B7Cu;
            // 0x191b80: 0x28c2001d  slti        $v0, $a2, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b7c) {
            ctx->pc = 0x191CBCu;
            goto label_191cbc;
        }
    }
    ctx->pc = 0x191B84u;
    // 0x191b84: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x191b88: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191b8c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191B8Cu;
    {
        const bool branch_taken_0x191b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b8c) {
            ctx->pc = 0x191B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191B8Cu;
            // 0x191b90: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191BD4u;
            goto label_191bd4;
        }
    }
    ctx->pc = 0x191B94u;
    // 0x191b94: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191b98: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191b9c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191b9cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191ba0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191ba4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191ba4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191ba8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191bac: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191bacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191bb0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191bb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191bb4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191bb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191bb8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191bbc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191bc0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191bc4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191bc8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191bcc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191bccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191bd0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191bd4:
    // 0x191bd4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x191bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x191bd8: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x191BD8u;
    {
        const bool branch_taken_0x191bd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x191BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191BD8u;
            // 0x191bdc: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bd8) {
            ctx->pc = 0x191C28u;
            goto label_191c28;
        }
    }
    ctx->pc = 0x191BE0u;
    // 0x191be0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191be0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191be4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191be4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191be8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191be8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bf0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191bf4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191bf8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191bfc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191c00: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191c00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191c04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191c08: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191c08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191c0c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191c10: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191c10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191c14: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191c18: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191c18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191C1Cu;
    {
        const bool branch_taken_0x191c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C1Cu;
            // 0x191c20: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c1c) {
            ctx->pc = 0x191C30u;
            goto label_191c30;
        }
    }
    ctx->pc = 0x191C24u;
    // 0x191c24: 0x0  nop
    ctx->pc = 0x191c24u;
    // NOP
label_191c28:
    // 0x191c28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x191c2c: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_191c30:
    // 0x191c30: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x191c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x191c34: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191C34u;
    {
        const bool branch_taken_0x191c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C34u;
            // 0x191c38: 0xa24c2  srl         $a0, $t2, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c34) {
            ctx->pc = 0x191CA0u;
            goto label_191ca0;
        }
    }
    ctx->pc = 0x191C3Cu;
    // 0x191c3c: 0x24c6ffed  addiu       $a2, $a2, -0x13
    ctx->pc = 0x191c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
    // 0x191c40: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x191C40u;
    {
        const bool branch_taken_0x191c40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C40u;
            // 0x191c44: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c40) {
            ctx->pc = 0x191C60u;
            goto label_191c60;
        }
    }
    ctx->pc = 0x191C48u;
    // 0x191c48: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191c4c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191c50: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x191c50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x191c54: 0xa24c2  srl         $a0, $t2, 19
    ctx->pc = 0x191c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
    // 0x191c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191C58u;
    {
        const bool branch_taken_0x191c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C58u;
            // 0x191c5c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c58) {
            ctx->pc = 0x191C64u;
            goto label_191c64;
        }
    }
    ctx->pc = 0x191C60u;
label_191c60:
    // 0x191c60: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191c60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_191c64:
    // 0x191c64: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191c64u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191c68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191c68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191c6c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191c70: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191c74: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191c78: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191c7c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191c7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191c80: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191c84: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191c84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191c88: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191c8c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191c90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191c94: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191c94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191C98u;
    {
        const bool branch_taken_0x191c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C98u;
            // 0x191c9c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c98) {
            ctx->pc = 0x191CA8u;
            goto label_191ca8;
        }
    }
    ctx->pc = 0x191CA0u;
label_191ca0:
    // 0x191ca0: 0xa5340  sll         $t2, $t2, 13
    ctx->pc = 0x191ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 13));
    // 0x191ca4: 0x24c6000d  addiu       $a2, $a2, 0xD
    ctx->pc = 0x191ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
label_191ca8:
    // 0x191ca8: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x191cac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x191cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x191cb0: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x191cb0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x191cb4: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x191cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x191cb8: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x191cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
label_191cbc:
    // 0x191cbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191CBCu;
    {
        const bool branch_taken_0x191cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CBCu;
            // 0x191cc0: 0xa1f02  srl         $v1, $t2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cbc) {
            ctx->pc = 0x191CD4u;
            goto label_191cd4;
        }
    }
    ctx->pc = 0x191CC4u;
    // 0x191cc4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x191cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x191cc8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191ccc: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191cd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x191cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_191cd4:
    // 0x191cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191cd8: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x191CD8u;
    {
        const bool branch_taken_0x191cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CD8u;
            // 0x191cdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cd8) {
            ctx->pc = 0x191F30u;
            goto label_191f30;
        }
    }
    ctx->pc = 0x191CE0u;
    // 0x191ce0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x191ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x191ce4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191ce8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191CE8u;
    {
        const bool branch_taken_0x191ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191ce8) {
            ctx->pc = 0x191CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191CE8u;
            // 0x191cec: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191D30u;
            goto label_191d30;
        }
    }
    ctx->pc = 0x191CF0u;
    // 0x191cf0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191cf4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191cf8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191cfc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d00: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d08: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191d08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191d0c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191d0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d10: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191d10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191d14: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d18: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191d18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191d1c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191d1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d20: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191d24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d28: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191d28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191d2c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191d2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191d30:
    // 0x191d30: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x191d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x191d34: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191D34u;
    {
        const bool branch_taken_0x191d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D34u;
            // 0x191d38: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d34) {
            ctx->pc = 0x191DA0u;
            goto label_191da0;
        }
    }
    ctx->pc = 0x191D3Cu;
    // 0x191d3c: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x191d40: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x191D40u;
    {
        const bool branch_taken_0x191d40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D40u;
            // 0x191d44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d40) {
            ctx->pc = 0x191D60u;
            goto label_191d60;
        }
    }
    ctx->pc = 0x191D48u;
    // 0x191d48: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191d4c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191d50: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x191d50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x191d54: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x191d54u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x191d58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191D58u;
    {
        const bool branch_taken_0x191d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D58u;
            // 0x191d5c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d58) {
            ctx->pc = 0x191D64u;
            goto label_191d64;
        }
    }
    ctx->pc = 0x191D60u;
label_191d60:
    // 0x191d60: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191d60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_191d64:
    // 0x191d64: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d6c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d70: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d74: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191d74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191d78: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191d78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d7c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191d80: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d84: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191d84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191d88: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191d8c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191d90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191d94: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191d98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191D98u;
    {
        const bool branch_taken_0x191d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D98u;
            // 0x191d9c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d98) {
            ctx->pc = 0x191DA8u;
            goto label_191da8;
        }
    }
    ctx->pc = 0x191DA0u;
label_191da0:
    // 0x191da0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x191da4: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_191da8:
    // 0x191da8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x191dac: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191db0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191DB0u;
    {
        const bool branch_taken_0x191db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191db0) {
            ctx->pc = 0x191DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191DB0u;
            // 0x191db4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191DF8u;
            goto label_191df8;
        }
    }
    ctx->pc = 0x191DB8u;
    // 0x191db8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191dbc: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191dc0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191dc0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191dc4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191dc8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191dc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191dcc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191dd0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191dd4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191dd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191dd8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191dd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191ddc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191de0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191de0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191de4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191de4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191de8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191de8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191dec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191df0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191df4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191df4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191df8:
    // 0x191df8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x191df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x191dfc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191DFCu;
    {
        const bool branch_taken_0x191dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191DFCu;
            // 0x191e00: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191dfc) {
            ctx->pc = 0x191E68u;
            goto label_191e68;
        }
    }
    ctx->pc = 0x191E04u;
    // 0x191e04: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x191e08: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x191E08u;
    {
        const bool branch_taken_0x191e08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E08u;
            // 0x191e0c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e08) {
            ctx->pc = 0x191E28u;
            goto label_191e28;
        }
    }
    ctx->pc = 0x191E10u;
    // 0x191e10: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191e14: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191e18: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x191e18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x191e1c: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x191e20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191E20u;
    {
        const bool branch_taken_0x191e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E20u;
            // 0x191e24: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e20) {
            ctx->pc = 0x191E2Cu;
            goto label_191e2c;
        }
    }
    ctx->pc = 0x191E28u;
label_191e28:
    // 0x191e28: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191e28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_191e2c:
    // 0x191e2c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191e2cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191e30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191e34: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191e34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191e38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191e3c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191e40: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191e40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191e44: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191e44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191e48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191e4c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191e50: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191e54: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191e58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191e5c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191e60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191E60u;
    {
        const bool branch_taken_0x191e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E60u;
            // 0x191e64: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e60) {
            ctx->pc = 0x191E70u;
            goto label_191e70;
        }
    }
    ctx->pc = 0x191E68u;
label_191e68:
    // 0x191e68: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x191e6c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x191e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_191e70:
    // 0x191e70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x191e74: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191e78: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191E78u;
    {
        const bool branch_taken_0x191e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191e78) {
            ctx->pc = 0x191E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191E78u;
            // 0x191e7c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191EC0u;
            goto label_191ec0;
        }
    }
    ctx->pc = 0x191E80u;
    // 0x191e80: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191e84: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191e84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191e88: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191e8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191e90: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191e94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191e98: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191e9c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191e9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191ea0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191ea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191ea4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191ea8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191eac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191eacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191eb0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191eb4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191eb8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191ebc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191ec0:
    // 0x191ec0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x191ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x191ec4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x191EC4u;
    {
        const bool branch_taken_0x191ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EC4u;
            // 0x191ec8: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ec4) {
            ctx->pc = 0x191EF0u;
            goto label_191ef0;
        }
    }
    ctx->pc = 0x191ECCu;
    // 0x191ecc: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x191eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x191ed0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x191ED0u;
    {
        const bool branch_taken_0x191ed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191ED0u;
            // 0x191ed4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ed0) {
            ctx->pc = 0x191EE8u;
            goto label_191ee8;
        }
    }
    ctx->pc = 0x191ED8u;
    // 0x191ed8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191edc: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191ee0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x191ee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x191ee4: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x191ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_191ee8:
    // 0x191ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191EE8u;
    {
        const bool branch_taken_0x191ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EE8u;
            // 0x191eec: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ee8) {
            ctx->pc = 0x191EF4u;
            goto label_191ef4;
        }
    }
    ctx->pc = 0x191EF0u;
label_191ef0:
    // 0x191ef0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_191ef4:
    // 0x191ef4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x191ef8: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191efc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191EFCu;
    {
        const bool branch_taken_0x191efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EFCu;
            // 0x191f00: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191efc) {
            ctx->pc = 0x191F0Cu;
            goto label_191f0c;
        }
    }
    ctx->pc = 0x191F04u;
    // 0x191f04: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191f08: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_191f0c:
    // 0x191f0c: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x191f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x191f10: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x191f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x191f14: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x191f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x191f18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191f20: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x191f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x191f24: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x191f24u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x191f28: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x191F28u;
    {
        const bool branch_taken_0x191f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F28u;
            // 0x191f2c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f28) {
            ctx->pc = 0x192470u;
            goto label_192470;
        }
    }
    ctx->pc = 0x191F30u;
label_191f30:
    // 0x191f30: 0x54620149  bnel        $v1, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x191F30u;
    {
        const bool branch_taken_0x191f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191f30) {
            ctx->pc = 0x191F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191F30u;
            // 0x191f34: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192458u;
            goto label_192458;
        }
    }
    ctx->pc = 0x191F38u;
    // 0x191f38: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x191f3c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x191f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x191f40: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x191F40u;
    {
        const bool branch_taken_0x191f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191f40) {
            ctx->pc = 0x191F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191F40u;
            // 0x191f44: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191F88u;
            goto label_191f88;
        }
    }
    ctx->pc = 0x191F48u;
    // 0x191f48: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x191f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x191f4c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x191f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x191f50: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191f54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191f58: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191f58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191f5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191f60: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191f64: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191f64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191f68: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191f68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191f6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191f70: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191f74: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191f74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191f78: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191f78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191f7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191f80: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191f84: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191f84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_191f88:
    // 0x191f88: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x191f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x191f8c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191F8Cu;
    {
        const bool branch_taken_0x191f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F8Cu;
            // 0x191f90: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f8c) {
            ctx->pc = 0x191FF8u;
            goto label_191ff8;
        }
    }
    ctx->pc = 0x191F94u;
    // 0x191f94: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x191f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x191f98: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x191F98u;
    {
        const bool branch_taken_0x191f98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F98u;
            // 0x191f9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f98) {
            ctx->pc = 0x191FB8u;
            goto label_191fb8;
        }
    }
    ctx->pc = 0x191FA0u;
    // 0x191fa0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x191fa4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x191fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x191fa8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x191fa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x191fac: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x191facu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x191fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191FB0u;
    {
        const bool branch_taken_0x191fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FB0u;
            // 0x191fb4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fb0) {
            ctx->pc = 0x191FBCu;
            goto label_191fbc;
        }
    }
    ctx->pc = 0x191FB8u;
label_191fb8:
    // 0x191fb8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_191fbc:
    // 0x191fbc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x191fbcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191fc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191fc4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191fc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191fc8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191fcc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191fd0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x191fd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191fd4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191fd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191fd8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191fdc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191fe0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x191fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x191fe4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x191fe4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x191fe8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x191fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x191fec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x191ff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191FF0u;
    {
        const bool branch_taken_0x191ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FF0u;
            // 0x191ff4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ff0) {
            ctx->pc = 0x192000u;
            goto label_192000;
        }
    }
    ctx->pc = 0x191FF8u;
label_191ff8:
    // 0x191ff8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x191ffc: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x191ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_192000:
    // 0x192000: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x192000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x192004: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x192004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x192008: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x192008u;
    {
        const bool branch_taken_0x192008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192008) {
            ctx->pc = 0x19200Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192008u;
            // 0x19200c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192050u;
            goto label_192050;
        }
    }
    ctx->pc = 0x192010u;
    // 0x192010: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x192010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x192014: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x192018: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x192018u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19201c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19201cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192020: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192024: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192028: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19202c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x19202cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192030: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x192030u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x192034: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192038: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192038u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19203c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x19203cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192040: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x192040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x192044: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192048: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192048u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19204c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x19204cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_192050:
    // 0x192050: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x192050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x192054: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x192054u;
    {
        const bool branch_taken_0x192054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192054u;
            // 0x192058: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192054) {
            ctx->pc = 0x1920C0u;
            goto label_1920c0;
        }
    }
    ctx->pc = 0x19205Cu;
    // 0x19205c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x192060: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x192060u;
    {
        const bool branch_taken_0x192060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192060u;
            // 0x192064: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192060) {
            ctx->pc = 0x192080u;
            goto label_192080;
        }
    }
    ctx->pc = 0x192068u;
    // 0x192068: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x192068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19206c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x19206cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x192070: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x192070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x192074: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x192078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192078u;
    {
        const bool branch_taken_0x192078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192078u;
            // 0x19207c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192078) {
            ctx->pc = 0x192084u;
            goto label_192084;
        }
    }
    ctx->pc = 0x192080u;
label_192080:
    // 0x192080: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x192080u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_192084:
    // 0x192084: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192088: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19208c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x19208cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192090: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192094: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192094u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192098: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x192098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19209c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x19209cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1920a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1920a4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1920a8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1920a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1920ac: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1920acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1920b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1920b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1920b4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1920b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1920b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1920B8u;
    {
        const bool branch_taken_0x1920b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1920B8u;
            // 0x1920bc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920b8) {
            ctx->pc = 0x1920C8u;
            goto label_1920c8;
        }
    }
    ctx->pc = 0x1920C0u;
label_1920c0:
    // 0x1920c0: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1920c4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1920c8:
    // 0x1920c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1920cc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1920ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1920d0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1920D0u;
    {
        const bool branch_taken_0x1920d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1920d0) {
            ctx->pc = 0x1920D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1920D0u;
            // 0x1920d4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192118u;
            goto label_192118;
        }
    }
    ctx->pc = 0x1920D8u;
    // 0x1920d8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1920dc: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1920e0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1920e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1920e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1920e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1920e8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1920e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1920ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1920ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1920f0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1920f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1920f4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1920f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1920f8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1920f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1920fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1920fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192100: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192100u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192104: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192108: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x192108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x19210c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19210cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192110: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192110u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192114: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x192114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_192118:
    // 0x192118: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x192118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x19211c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19211Cu;
    {
        const bool branch_taken_0x19211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19211Cu;
            // 0x192120: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19211c) {
            ctx->pc = 0x192188u;
            goto label_192188;
        }
    }
    ctx->pc = 0x192124u;
    // 0x192124: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x192124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x192128: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x192128u;
    {
        const bool branch_taken_0x192128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192128u;
            // 0x19212c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192128) {
            ctx->pc = 0x192148u;
            goto label_192148;
        }
    }
    ctx->pc = 0x192130u;
    // 0x192130: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x192134: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x192138: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x192138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19213c: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x192140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192140u;
    {
        const bool branch_taken_0x192140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192140u;
            // 0x192144: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192140) {
            ctx->pc = 0x19214Cu;
            goto label_19214c;
        }
    }
    ctx->pc = 0x192148u;
label_192148:
    // 0x192148: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x192148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19214c:
    // 0x19214c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192150: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192154: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192158: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19215c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192160: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x192160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192164: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x192164u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x192168: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19216c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x19216cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192170: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192174: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x192174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x192178: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19217c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x19217cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192180u;
    {
        const bool branch_taken_0x192180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192180u;
            // 0x192184: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192180) {
            ctx->pc = 0x192190u;
            goto label_192190;
        }
    }
    ctx->pc = 0x192188u;
label_192188:
    // 0x192188: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x192188u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x19218c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x19218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_192190:
    // 0x192190: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x192190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x192194: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x192194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x192198: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x192198u;
    {
        const bool branch_taken_0x192198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192198) {
            ctx->pc = 0x19219Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192198u;
            // 0x19219c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1921E0u;
            goto label_1921e0;
        }
    }
    ctx->pc = 0x1921A0u;
    // 0x1921a0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1921a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1921a4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1921a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1921a8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1921a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1921ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1921acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1921b0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1921b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1921b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1921b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1921b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1921b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1921bc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1921bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1921c0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1921c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1921c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1921c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1921c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1921cc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1921ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1921d0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1921d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1921d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1921d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1921d8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1921d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1921dc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1921dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1921e0:
    // 0x1921e0: 0x31620007  andi        $v0, $t3, 0x7
    ctx->pc = 0x1921e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x1921e4: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1921e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1921e8: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1921e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1921ec: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1921ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1921f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1921f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1921f4: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1921f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1921f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1921f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1921fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1921fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x192200: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x192200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x192204: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x192204u;
    {
        const bool branch_taken_0x192204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192204u;
            // 0x192208: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192204) {
            ctx->pc = 0x192250u;
            goto label_192250;
        }
    }
    ctx->pc = 0x19220Cu;
    // 0x19220c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x19220cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x192210: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x192214: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192218: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19221c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x19221cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192220: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192224: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192224u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192228: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x192228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19222c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x19222cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x192230: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192234: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192238: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192238u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19223c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x19223cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x192240: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192244: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192244u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192248u;
    {
        const bool branch_taken_0x192248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192248u;
            // 0x19224c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192248) {
            ctx->pc = 0x192254u;
            goto label_192254;
        }
    }
    ctx->pc = 0x192250u;
label_192250:
    // 0x192250: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x192250u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_192254:
    // 0x192254: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x192254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x192258: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x192258u;
    {
        const bool branch_taken_0x192258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192258u;
            // 0x19225c: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192258) {
            ctx->pc = 0x1922C8u;
            goto label_1922c8;
        }
    }
    ctx->pc = 0x192260u;
    // 0x192260: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x192264: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x192264u;
    {
        const bool branch_taken_0x192264 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192264u;
            // 0x192268: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192264) {
            ctx->pc = 0x192288u;
            goto label_192288;
        }
    }
    ctx->pc = 0x19226Cu;
    // 0x19226c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x19226cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x192270: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x192270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x192274: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x192274u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x192278: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x192278u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x19227c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19227Cu;
    {
        const bool branch_taken_0x19227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19227Cu;
            // 0x192280: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19227c) {
            ctx->pc = 0x19228Cu;
            goto label_19228c;
        }
    }
    ctx->pc = 0x192284u;
    // 0x192284: 0x0  nop
    ctx->pc = 0x192284u;
    // NOP
label_192288:
    // 0x192288: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x192288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19228c:
    // 0x19228c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192290: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192294: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192298: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19229c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x19229cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1922a0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1922a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1922a4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1922a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1922a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1922a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1922ac: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1922acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1922b0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1922b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1922b4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1922b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1922b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1922b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1922bc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1922bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1922c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1922C0u;
    {
        const bool branch_taken_0x1922c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922C0u;
            // 0x1922c4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922c0) {
            ctx->pc = 0x1922D0u;
            goto label_1922d0;
        }
    }
    ctx->pc = 0x1922C8u;
label_1922c8:
    // 0x1922c8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1922c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1922cc: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1922ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1922d0:
    // 0x1922d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1922d4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1922d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1922d8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1922D8u;
    {
        const bool branch_taken_0x1922d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1922d8) {
            ctx->pc = 0x1922DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1922D8u;
            // 0x1922dc: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x1922E0u;
    // 0x1922e0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1922e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1922e4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1922e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1922e8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1922e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1922ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1922f0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1922f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1922f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1922f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1922f8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1922fc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1922fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192300: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x192300u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x192304: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192308: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192308u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19230c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x19230cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192310: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x192310u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x192314: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192318: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192318u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x19231c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x19231cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_192320:
    // 0x192320: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x192320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x192324: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x192324u;
    {
        const bool branch_taken_0x192324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192324u;
            // 0x192328: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192324) {
            ctx->pc = 0x192390u;
            goto label_192390;
        }
    }
    ctx->pc = 0x19232Cu;
    // 0x19232c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x19232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x192330: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x192330u;
    {
        const bool branch_taken_0x192330 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192330u;
            // 0x192334: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192330) {
            ctx->pc = 0x192350u;
            goto label_192350;
        }
    }
    ctx->pc = 0x192338u;
    // 0x192338: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x192338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19233c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x19233cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x192340: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x192340u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x192344: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x192344u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x192348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192348u;
    {
        const bool branch_taken_0x192348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192348u;
            // 0x19234c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192348) {
            ctx->pc = 0x192354u;
            goto label_192354;
        }
    }
    ctx->pc = 0x192350u;
label_192350:
    // 0x192350: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x192350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_192354:
    // 0x192354: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x192354u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192358: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19235c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x19235cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192360: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192364: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192368: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x192368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19236c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x19236cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x192370: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192374: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192374u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192378: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x192378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19237c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x19237cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x192380: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x192384: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x192384u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x192388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192388u;
    {
        const bool branch_taken_0x192388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192388u;
            // 0x19238c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192388) {
            ctx->pc = 0x192398u;
            goto label_192398;
        }
    }
    ctx->pc = 0x192390u;
label_192390:
    // 0x192390: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x192390u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x192394: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_192398:
    // 0x192398: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19239c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x19239cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1923a0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1923A0u;
    {
        const bool branch_taken_0x1923a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1923a0) {
            ctx->pc = 0x1923A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1923A0u;
            // 0x1923a4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1923E8u;
            goto label_1923e8;
        }
    }
    ctx->pc = 0x1923A8u;
    // 0x1923a8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1923a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1923ac: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1923acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1923b0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1923b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1923b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1923b8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1923b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1923bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1923bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1923c0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1923c4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1923c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1923c8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1923c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1923cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1923d0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1923d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1923d4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1923d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1923d8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1923d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1923dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1923dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1923e0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1923e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1923e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1923e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1923e8:
    // 0x1923e8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1923e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1923ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1923ECu;
    {
        const bool branch_taken_0x1923ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1923F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923ECu;
            // 0x1923f0: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923ec) {
            ctx->pc = 0x192418u;
            goto label_192418;
        }
    }
    ctx->pc = 0x1923F4u;
    // 0x1923f4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1923f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1923f8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1923F8u;
    {
        const bool branch_taken_0x1923f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923F8u;
            // 0x1923fc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923f8) {
            ctx->pc = 0x192410u;
            goto label_192410;
        }
    }
    ctx->pc = 0x192400u;
    // 0x192400: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x192404: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x192408: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x192408u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19240c: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_192410:
    // 0x192410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192410u;
    {
        const bool branch_taken_0x192410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192410u;
            // 0x192414: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192410) {
            ctx->pc = 0x19241Cu;
            goto label_19241c;
        }
    }
    ctx->pc = 0x192418u;
label_192418:
    // 0x192418: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x192418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_19241c:
    // 0x19241c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x192420: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x192420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x192424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192424u;
            // 0x192428: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192424) {
            ctx->pc = 0x192434u;
            goto label_192434;
        }
    }
    ctx->pc = 0x19242Cu;
    // 0x19242c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x192430: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_192434:
    // 0x192434: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x192434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x192438: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x192438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x19243c: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x19243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x192440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192444: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x192448: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x192448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19244c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19244Cu;
    {
        const bool branch_taken_0x19244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19244Cu;
            // 0x192450: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19244c) {
            ctx->pc = 0x192474u;
            goto label_192474;
        }
    }
    ctx->pc = 0x192454u;
    // 0x192454: 0x0  nop
    ctx->pc = 0x192454u;
    // NOP
label_192458:
    // 0x192458: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x192458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19245c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19245Cu;
    {
        const bool branch_taken_0x19245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19245Cu;
            // 0x192460: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19245c) {
            ctx->pc = 0x19246Cu;
            goto label_19246c;
        }
    }
    ctx->pc = 0x192464u;
    // 0x192464: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x192468: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_19246c:
    // 0x19246c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x19246cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_192470:
    // 0x192470: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x192470u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_192474:
    // 0x192474: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x192474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x192478: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x192478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19247c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x19247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x192480: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x192484: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x192484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x192488: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x192488u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x19248c: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x19248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x192490: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x192494: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192498: 0x3e00008  jr          $ra
    ctx->pc = 0x192498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192498u;
            // 0x19249c: 0xace30024  sw          $v1, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1924A0u;
}
