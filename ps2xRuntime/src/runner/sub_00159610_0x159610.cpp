#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159610
// Address: 0x159610 - 0x159790
void sub_00159610_0x159610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159610_0x159610");
#endif

    switch (ctx->pc) {
        case 0x1596d8u: goto label_1596d8;
        case 0x159700u: goto label_159700;
        default: break;
    }

    ctx->pc = 0x159610u;

    // 0x159610: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x159610u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x159614: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x159614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x159618: 0x9487000c  lhu         $a3, 0xC($a0)
    ctx->pc = 0x159618u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15961c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159620: 0x9486000e  lhu         $a2, 0xE($a0)
    ctx->pc = 0x159620u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x159624: 0x3103fe00  andi        $v1, $t0, 0xFE00
    ctx->pc = 0x159624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65024);
    // 0x159628: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x159628u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x15962c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15962Cu;
    {
        const bool branch_taken_0x15962c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15962Cu;
            // 0x159630: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15962c) {
            ctx->pc = 0x15969Cu;
            goto label_15969c;
        }
    }
    ctx->pc = 0x159634u;
    // 0x159634: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x159638: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x159638u;
    {
        const bool branch_taken_0x159638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159638) {
            ctx->pc = 0x15963Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159638u;
            // 0x15963c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x159640u;
    // 0x159640: 0x24026a00  addiu       $v0, $zero, 0x6A00
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x159644: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x159644u;
    {
        const bool branch_taken_0x159644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159644) {
            ctx->pc = 0x159690u;
            goto label_159690;
        }
    }
    ctx->pc = 0x15964Cu;
    // 0x15964c: 0x24026400  addiu       $v0, $zero, 0x6400
    ctx->pc = 0x15964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    // 0x159650: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x159650u;
    {
        const bool branch_taken_0x159650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159650) {
            ctx->pc = 0x159690u;
            goto label_159690;
        }
    }
    ctx->pc = 0x159658u;
    // 0x159658: 0x24026800  addiu       $v0, $zero, 0x6800
    ctx->pc = 0x159658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x15965c: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15965Cu;
    {
        const bool branch_taken_0x15965c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15965c) {
            ctx->pc = 0x159660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15965Cu;
            // 0x159660: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x159664u;
    // 0x159664: 0x24026600  addiu       $v0, $zero, 0x6600
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x159668: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159668u;
    {
        const bool branch_taken_0x159668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159668) {
            ctx->pc = 0x159684u;
            goto label_159684;
        }
    }
    ctx->pc = 0x159670u;
    // 0x159670: 0x24026200  addiu       $v0, $zero, 0x6200
    ctx->pc = 0x159670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x159674: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159674u;
    {
        const bool branch_taken_0x159674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159674) {
            ctx->pc = 0x159684u;
            goto label_159684;
        }
    }
    ctx->pc = 0x15967Cu;
    // 0x15967c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15967Cu;
    {
        const bool branch_taken_0x15967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15967c) {
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x159684u;
label_159684:
    // 0x159684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159688: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x159688u;
    {
        const bool branch_taken_0x159688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159688) {
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x159690u;
label_159690:
    // 0x159690: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x159690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159694: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159694u;
    {
        const bool branch_taken_0x159694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159694) {
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x15969Cu;
label_15969c:
    // 0x15969c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x15969cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1596a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1596a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1596a4: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1596A4u;
    {
        const bool branch_taken_0x1596a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1596a4) {
            ctx->pc = 0x1596A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1596A4u;
            // 0x1596a8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x1596ACu;
    // 0x1596ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1596acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1596b0: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1596B0u;
    {
        const bool branch_taken_0x1596b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1596b0) {
            ctx->pc = 0x1596B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1596B0u;
            // 0x1596b4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x1596B8u;
    // 0x1596b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1596b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1596bc: 0x51020001  beql        $t0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1596BCu;
    {
        const bool branch_taken_0x1596bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1596bc) {
            ctx->pc = 0x1596C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1596BCu;
            // 0x1596c0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1596C4u;
            goto label_1596c4;
        }
    }
    ctx->pc = 0x1596C4u;
label_1596c4:
    // 0x1596c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1596c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596c8: 0x1880001d  blez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1596C8u;
    {
        const bool branch_taken_0x1596c8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1596CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596C8u;
            // 0x1596cc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596c8) {
            ctx->pc = 0x159740u;
            goto label_159740;
        }
    }
    ctx->pc = 0x1596D0u;
    // 0x1596d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1596d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1596d4: 0x240bfff0  addiu       $t3, $zero, -0x10
    ctx->pc = 0x1596d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1596d8:
    // 0x1596d8: 0xe64018  mult        $t0, $a3, $a2
    ctx->pc = 0x1596d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1596dc: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x1596dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x1596e0: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x1596e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x1596e4: 0xa84018  mult        $t0, $a1, $t0
    ctx->pc = 0x1596e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1596e8: 0x840c2  srl         $t0, $t0, 3
    ctx->pc = 0x1596e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x1596ec: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x1596ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x1596f0: 0x10b5024  and         $t2, $t0, $t3
    ctx->pc = 0x1596f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
    // 0x1596f4: 0x141082a  slt         $at, $t2, $at
    ctx->pc = 0x1596f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1596f8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1596F8u;
    {
        const bool branch_taken_0x1596f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1596FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596F8u;
            // 0x1596fc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596f8) {
            ctx->pc = 0x159720u;
            goto label_159720;
        }
    }
    ctx->pc = 0x159700u;
label_159700:
    // 0x159700: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x159700u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x159704: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x159704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x159708: 0x1aa4007  srav        $t0, $t2, $t5
    ctx->pc = 0x159708u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x15970c: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x15970cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x159710: 0x101082a  slt         $at, $t0, $at
    ctx->pc = 0x159710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x159714: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x159714u;
    {
        const bool branch_taken_0x159714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159714) {
            ctx->pc = 0x159700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_159700;
        }
    }
    ctx->pc = 0x15971Cu;
    // 0x15971c: 0x0  nop
    ctx->pc = 0x15971cu;
    // NOP
label_159720:
    // 0x159720: 0x1a94004  sllv        $t0, $t1, $t5
    ctx->pc = 0x159720u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x159724: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x159724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x159728: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x159728u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x15972c: 0x184402a  slt         $t0, $t4, $a0
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x159730: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x159730u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x159734: 0x1500ffe8  bnez        $t0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x159734u;
    {
        const bool branch_taken_0x159734 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x159738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159734u;
            // 0x159738: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159734) {
            ctx->pc = 0x1596D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1596d8;
        }
    }
    ctx->pc = 0x15973Cu;
    // 0x15973c: 0x0  nop
    ctx->pc = 0x15973cu;
    // NOP
label_159740:
    // 0x159740: 0x24046c00  addiu       $a0, $zero, 0x6C00
    ctx->pc = 0x159740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x159744: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x159744u;
    {
        const bool branch_taken_0x159744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x159744) {
            ctx->pc = 0x159748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159744u;
            // 0x159748: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15977Cu;
            goto label_15977c;
        }
    }
    ctx->pc = 0x15974Cu;
    // 0x15974c: 0x24046a00  addiu       $a0, $zero, 0x6A00
    ctx->pc = 0x15974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x159750: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159750u;
    {
        const bool branch_taken_0x159750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x159750) {
            ctx->pc = 0x159778u;
            goto label_159778;
        }
    }
    ctx->pc = 0x159758u;
    // 0x159758: 0x24046800  addiu       $a0, $zero, 0x6800
    ctx->pc = 0x159758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x15975c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15975Cu;
    {
        const bool branch_taken_0x15975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15975c) {
            ctx->pc = 0x159778u;
            goto label_159778;
        }
    }
    ctx->pc = 0x159764u;
    // 0x159764: 0x24046600  addiu       $a0, $zero, 0x6600
    ctx->pc = 0x159764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x159768: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159768u;
    {
        const bool branch_taken_0x159768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x159768) {
            ctx->pc = 0x159778u;
            goto label_159778;
        }
    }
    ctx->pc = 0x159770u;
    // 0x159770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159770u;
    {
        const bool branch_taken_0x159770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159770) {
            ctx->pc = 0x15977Cu;
            goto label_15977c;
        }
    }
    ctx->pc = 0x159778u;
label_159778:
    // 0x159778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15977c:
    // 0x15977c: 0x3e00008  jr          $ra
    ctx->pc = 0x15977Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159784u;
    // 0x159784: 0x0  nop
    ctx->pc = 0x159784u;
    // NOP
    // 0x159788: 0x0  nop
    ctx->pc = 0x159788u;
    // NOP
    // 0x15978c: 0x0  nop
    ctx->pc = 0x15978cu;
    // NOP
}
