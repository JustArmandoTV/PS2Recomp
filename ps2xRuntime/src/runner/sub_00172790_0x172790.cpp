#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172790
// Address: 0x172790 - 0x172b00
void sub_00172790_0x172790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172790_0x172790");
#endif

    switch (ctx->pc) {
        case 0x1727e0u: goto label_1727e0;
        case 0x17285cu: goto label_17285c;
        case 0x1728b0u: goto label_1728b0;
        case 0x1728f0u: goto label_1728f0;
        case 0x172904u: goto label_172904;
        case 0x172920u: goto label_172920;
        case 0x172948u: goto label_172948;
        case 0x172974u: goto label_172974;
        case 0x172988u: goto label_172988;
        case 0x172998u: goto label_172998;
        case 0x1729a8u: goto label_1729a8;
        case 0x1729bcu: goto label_1729bc;
        case 0x1729c4u: goto label_1729c4;
        case 0x172a28u: goto label_172a28;
        case 0x172a84u: goto label_172a84;
        case 0x172a90u: goto label_172a90;
        case 0x172a98u: goto label_172a98;
        case 0x172ad4u: goto label_172ad4;
        case 0x172ae0u: goto label_172ae0;
        case 0x172ae8u: goto label_172ae8;
        default: break;
    }

    ctx->pc = 0x172790u;

    // 0x172790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172794: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x172794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x172798: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x172798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x17279c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1727a0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x1727a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1727a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1727a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1727a8: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x1727a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1727ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1727acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1727b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1727b4: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1727b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1727b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1727bc: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1727BCu;
    {
        const bool branch_taken_0x1727bc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1727C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727BCu;
            // 0x1727c0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727bc) {
            ctx->pc = 0x1727D4u;
            goto label_1727d4;
        }
    }
    ctx->pc = 0x1727C4u;
    // 0x1727c4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1727C4u;
    {
        const bool branch_taken_0x1727c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1727c4) {
            ctx->pc = 0x1727C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1727C4u;
            // 0x1727c8: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1727D8u;
            goto label_1727d8;
        }
    }
    ctx->pc = 0x1727CCu;
    // 0x1727cc: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1727CCu;
    {
        const bool branch_taken_0x1727cc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1727D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727CCu;
            // 0x1727d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727cc) {
            ctx->pc = 0x1727E0u;
            goto label_1727e0;
        }
    }
    ctx->pc = 0x1727D4u;
label_1727d4:
    // 0x1727d4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1727d8:
    // 0x1727d8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1727D8u;
    {
        const bool branch_taken_0x1727d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1727DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727D8u;
            // 0x1727dc: 0x248440c8  addiu       $a0, $a0, 0x40C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727d8) {
            ctx->pc = 0x1728A8u;
            goto label_1728a8;
        }
    }
    ctx->pc = 0x1727E0u;
label_1727e0:
    // 0x1727e0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1727e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1727e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1727E4u;
    {
        const bool branch_taken_0x1727e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1727E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727E4u;
            // 0x1727e8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727e4) {
            ctx->pc = 0x172818u;
            goto label_172818;
        }
    }
    ctx->pc = 0x1727ECu;
    // 0x1727ec: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1727f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1727f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1727f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1727f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1727f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1727fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1727fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x172800: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x172804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x172804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172808: 0x80639d90  lb          $v1, -0x6270($v1)
    ctx->pc = 0x172808u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294942096)));
    // 0x17280c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x17280Cu;
    {
        const bool branch_taken_0x17280c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17280c) {
            ctx->pc = 0x172810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17280Cu;
            // 0x172810: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1727E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1727e0;
        }
    }
    ctx->pc = 0x172814u;
    // 0x172814: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x172814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_172818:
    // 0x172818: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172818u;
    {
        const bool branch_taken_0x172818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172818u;
            // 0x17281c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172818) {
            ctx->pc = 0x172830u;
            goto label_172830;
        }
    }
    ctx->pc = 0x172820u;
    // 0x172820: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x172820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x172824: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x172824u;
    {
        const bool branch_taken_0x172824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172824u;
            // 0x172828: 0x248440f0  addiu       $a0, $a0, 0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172824) {
            ctx->pc = 0x1728A8u;
            goto label_1728a8;
        }
    }
    ctx->pc = 0x17282Cu;
    // 0x17282c: 0x0  nop
    ctx->pc = 0x17282cu;
    // NOP
label_172830:
    // 0x172830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172834: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x172834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172838: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x172838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x17283c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17283cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x172840: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x172840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172844: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x172844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x172848: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x172848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x17284c: 0x26319d90  addiu       $s1, $s1, -0x6270
    ctx->pc = 0x17284cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942096));
    // 0x172850: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x172854: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x172854u;
    SET_GPR_U32(ctx, 31, 0x17285Cu);
    ctx->pc = 0x172858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172854u;
            // 0x172858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17285Cu; }
        if (ctx->pc != 0x17285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17285Cu; }
        if (ctx->pc != 0x17285Cu) { return; }
    }
    ctx->pc = 0x17285Cu;
label_17285c:
    // 0x17285c: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x17285cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x172860: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x172860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x172864: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x172864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x172868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17286c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x172870: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x172870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x172874: 0x2422023  subu        $a0, $s2, $v0
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x172878: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x172878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17287c: 0x2483fedc  addiu       $v1, $a0, -0x124
    ctx->pc = 0x17287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967004));
    // 0x172880: 0x248406db  addiu       $a0, $a0, 0x6DB
    ctx->pc = 0x172880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1755));
    // 0x172884: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x172884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x172888: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x172888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x17288c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x17288cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x172890: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x172894: 0x32ac0  sll         $a1, $v1, 11
    ctx->pc = 0x172894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x172898: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x172898u;
    {
        const bool branch_taken_0x172898 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172898u;
            // 0x17289c: 0xae250024  sw          $a1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172898) {
            ctx->pc = 0x1728B8u;
            goto label_1728b8;
        }
    }
    ctx->pc = 0x1728A0u;
    // 0x1728a0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1728a4: 0x24844120  addiu       $a0, $a0, 0x4120
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16672));
label_1728a8:
    // 0x1728a8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x1728A8u;
    SET_GPR_U32(ctx, 31, 0x1728B0u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728B0u; }
        if (ctx->pc != 0x1728B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728B0u; }
        if (ctx->pc != 0x1728B0u) { return; }
    }
    ctx->pc = 0x1728B0u;
label_1728b0:
    // 0x1728b0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1728B0u;
    {
        const bool branch_taken_0x1728b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1728B0u;
            // 0x1728b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728b0) {
            ctx->pc = 0x172A9Cu;
            goto label_172a9c;
        }
    }
    ctx->pc = 0x1728B8u;
label_1728b8:
    // 0x1728b8: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1728bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1728bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728c0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1728c4: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1728c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1728c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1728c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1728cc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1728ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1728d0: 0x24072060  addiu       $a3, $zero, 0x2060
    ctx->pc = 0x1728d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    // 0x1728d4: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x1728d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x1728d8: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x1728d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x1728dc: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1728dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1728e0: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x1728e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x1728e4: 0xae280028  sw          $t0, 0x28($s1)
    ctx->pc = 0x1728e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 8));
    // 0x1728e8: 0xc06156e  jal         func_1855B8
    ctx->pc = 0x1728E8u;
    SET_GPR_U32(ctx, 31, 0x1728F0u);
    ctx->pc = 0x1728ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1728E8u;
            // 0x1728ec: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728F0u; }
        if (ctx->pc != 0x1728F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728F0u; }
        if (ctx->pc != 0x1728F0u) { return; }
    }
    ctx->pc = 0x1728F0u;
label_1728f0:
    // 0x1728f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1728F0u;
    {
        const bool branch_taken_0x1728f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1728F0u;
            // 0x1728f4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728f0) {
            ctx->pc = 0x1729A0u;
            goto label_1729a0;
        }
    }
    ctx->pc = 0x1728F8u;
    // 0x1728f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1728f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728fc: 0xc05c1e8  jal         func_1707A0
    ctx->pc = 0x1728FCu;
    SET_GPR_U32(ctx, 31, 0x172904u);
    ctx->pc = 0x172900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1728FCu;
            // 0x172900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1707A0u;
    if (runtime->hasFunction(0x1707A0u)) {
        auto targetFn = runtime->lookupFunction(0x1707A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172904u; }
        if (ctx->pc != 0x172904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001707A0_0x1707a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172904u; }
        if (ctx->pc != 0x172904u) { return; }
    }
    ctx->pc = 0x172904u;
label_172904:
    // 0x172904: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x172904u;
    {
        const bool branch_taken_0x172904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172904u;
            // 0x172908: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172904) {
            ctx->pc = 0x1729A0u;
            goto label_1729a0;
        }
    }
    ctx->pc = 0x17290Cu;
    // 0x17290c: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x17290Cu;
    {
        const bool branch_taken_0x17290c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x172910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17290Cu;
            // 0x172910: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17290c) {
            ctx->pc = 0x172960u;
            goto label_172960;
        }
    }
    ctx->pc = 0x172914u;
    // 0x172914: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x172918: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x172918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17291c: 0x0  nop
    ctx->pc = 0x17291cu;
    // NOP
label_172920:
    // 0x172920: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x172920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x172924: 0xd02018  mult        $a0, $a2, $s0
    ctx->pc = 0x172924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x172928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x172928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17292c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x17292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x172930: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x172930u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x172934: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x172938: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17293c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x17293cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x172940: 0xc06156e  jal         func_1855B8
    ctx->pc = 0x172940u;
    SET_GPR_U32(ctx, 31, 0x172948u);
    ctx->pc = 0x172944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172940u;
            // 0x172944: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172948u; }
        if (ctx->pc != 0x172948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172948u; }
        if (ctx->pc != 0x172948u) { return; }
    }
    ctx->pc = 0x172948u;
label_172948:
    // 0x172948: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x172948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x17294c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17294cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x172950: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x172950u;
    {
        const bool branch_taken_0x172950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172950u;
            // 0x172954: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172950) {
            ctx->pc = 0x1729A0u;
            goto label_1729a0;
        }
    }
    ctx->pc = 0x172958u;
    // 0x172958: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x172958u;
    {
        const bool branch_taken_0x172958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172958) {
            ctx->pc = 0x17295Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172958u;
            // 0x17295c: 0x8e260034  lw          $a2, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172920;
        }
    }
    ctx->pc = 0x172960u;
label_172960:
    // 0x172960: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x172964: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x172964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x172968: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x172968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17296c: 0xc05bb5c  jal         func_16ED70
    ctx->pc = 0x17296Cu;
    SET_GPR_U32(ctx, 31, 0x172974u);
    ctx->pc = 0x172970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17296Cu;
            // 0x172970: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ED70u;
    if (runtime->hasFunction(0x16ED70u)) {
        auto targetFn = runtime->lookupFunction(0x16ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172974u; }
        if (ctx->pc != 0x172974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ED70_0x16ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172974u; }
        if (ctx->pc != 0x172974u) { return; }
    }
    ctx->pc = 0x172974u;
label_172974:
    // 0x172974: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172974u;
    {
        const bool branch_taken_0x172974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172974u;
            // 0x172978: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172974) {
            ctx->pc = 0x1729A0u;
            goto label_1729a0;
        }
    }
    ctx->pc = 0x17297Cu;
    // 0x17297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172980: 0xc05ba50  jal         func_16E940
    ctx->pc = 0x172980u;
    SET_GPR_U32(ctx, 31, 0x172988u);
    ctx->pc = 0x172984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172980u;
            // 0x172984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E940u;
    if (runtime->hasFunction(0x16E940u)) {
        auto targetFn = runtime->lookupFunction(0x16E940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172988u; }
        if (ctx->pc != 0x172988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E940_0x16e940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172988u; }
        if (ctx->pc != 0x172988u) { return; }
    }
    ctx->pc = 0x172988u;
label_172988:
    // 0x172988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172988u;
    {
        const bool branch_taken_0x172988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172988u;
            // 0x17298c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172988) {
            ctx->pc = 0x1729A0u;
            goto label_1729a0;
        }
    }
    ctx->pc = 0x172990u;
    // 0x172990: 0xc05ffb6  jal         func_17FED8
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 31, 0x172998u);
    ctx->pc = 0x172994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172990u;
            // 0x172994: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FED8u;
    if (runtime->hasFunction(0x17FED8u)) {
        auto targetFn = runtime->lookupFunction(0x17FED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172998u; }
        if (ctx->pc != 0x172998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FED8_0x17fed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172998u; }
        if (ctx->pc != 0x172998u) { return; }
    }
    ctx->pc = 0x172998u;
label_172998:
    // 0x172998: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172998u;
    {
        const bool branch_taken_0x172998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172998u;
            // 0x17299c: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172998) {
            ctx->pc = 0x1729B0u;
            goto label_1729b0;
        }
    }
    ctx->pc = 0x1729A0u;
label_1729a0:
    // 0x1729a0: 0xc05cb00  jal         func_172C00
    ctx->pc = 0x1729A0u;
    SET_GPR_U32(ctx, 31, 0x1729A8u);
    ctx->pc = 0x1729A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1729A0u;
            // 0x1729a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172C00u;
    if (runtime->hasFunction(0x172C00u)) {
        auto targetFn = runtime->lookupFunction(0x172C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729A8u; }
        if (ctx->pc != 0x1729A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172C00_0x172c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729A8u; }
        if (ctx->pc != 0x1729A8u) { return; }
    }
    ctx->pc = 0x1729A8u;
label_1729a8:
    // 0x1729a8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1729A8u;
    {
        const bool branch_taken_0x1729a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1729A8u;
            // 0x1729ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729a8) {
            ctx->pc = 0x172A9Cu;
            goto label_172a9c;
        }
    }
    ctx->pc = 0x1729B0u;
label_1729b0:
    // 0x1729b0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1729b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1729b4: 0xc060026  jal         func_180098
    ctx->pc = 0x1729B4u;
    SET_GPR_U32(ctx, 31, 0x1729BCu);
    ctx->pc = 0x1729B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1729B4u;
            // 0x1729b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180098u;
    if (runtime->hasFunction(0x180098u)) {
        auto targetFn = runtime->lookupFunction(0x180098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729BCu; }
        if (ctx->pc != 0x1729BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180098_0x180098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729BCu; }
        if (ctx->pc != 0x1729BCu) { return; }
    }
    ctx->pc = 0x1729BCu;
label_1729bc:
    // 0x1729bc: 0xc0599d2  jal         func_166748
    ctx->pc = 0x1729BCu;
    SET_GPR_U32(ctx, 31, 0x1729C4u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729C4u; }
        if (ctx->pc != 0x1729C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729C4u; }
        if (ctx->pc != 0x1729C4u) { return; }
    }
    ctx->pc = 0x1729C4u;
label_1729c4:
    // 0x1729c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1729c8: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x1729c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x1729cc: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1729d0: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x1729d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x1729d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1729d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1729d8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1729d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1729dc: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1729dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1729e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1729e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1729e4: 0x8cc53f24  lw          $a1, 0x3F24($a2)
    ctx->pc = 0x1729e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16164)));
    // 0x1729e8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1729ec: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x1729ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1729f0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1729f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1729f4: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x1729f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1729f8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1729f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1729fc: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1729fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x172a00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x172a08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x172a0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172a10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x172a14: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x172A14u;
    {
        const bool branch_taken_0x172a14 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x172A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A14u;
            // 0x172a18: 0xa622003e  sh          $v0, 0x3E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a14) {
            ctx->pc = 0x172A44u;
            goto label_172a44;
        }
    }
    ctx->pc = 0x172A1Cu;
    // 0x172a1c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x172a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a20: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x172a24: 0x26220042  addiu       $v0, $s1, 0x42
    ctx->pc = 0x172a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
label_172a28:
    // 0x172a28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x172a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x172a2c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x172a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x172a30: 0x0  nop
    ctx->pc = 0x172a30u;
    // NOP
    // 0x172a34: 0x0  nop
    ctx->pc = 0x172a34u;
    // NOP
    // 0x172a38: 0x0  nop
    ctx->pc = 0x172a38u;
    // NOP
    // 0x172a3c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x172A3Cu;
    {
        const bool branch_taken_0x172a3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x172A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A3Cu;
            // 0x172a40: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a3c) {
            ctx->pc = 0x172A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172a28;
        }
    }
    ctx->pc = 0x172A44u;
label_172a44:
    // 0x172a44: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x172a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a50: 0xa6200046  sh          $zero, 0x46($s1)
    ctx->pc = 0x172a50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x172a54: 0xa230006c  sb          $s0, 0x6C($s1)
    ctx->pc = 0x172a54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 16));
    // 0x172a58: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x172a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x172a5c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x172a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x172a60: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x172a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x172a64: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x172a64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x172a68: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x172a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x172a6c: 0xa6200068  sh          $zero, 0x68($s1)
    ctx->pc = 0x172a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x172a70: 0xa620006a  sh          $zero, 0x6A($s1)
    ctx->pc = 0x172a70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x172a74: 0xa230006d  sb          $s0, 0x6D($s1)
    ctx->pc = 0x172a74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 16));
    // 0x172a78: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x172a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x172a7c: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x172A7Cu;
    SET_GPR_U32(ctx, 31, 0x172A84u);
    ctx->pc = 0x172A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A7Cu;
            // 0x172a80: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A84u; }
        if (ctx->pc != 0x172A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175740_0x175740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A84u; }
        if (ctx->pc != 0x172A84u) { return; }
    }
    ctx->pc = 0x172A84u;
label_172a84:
    // 0x172a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a88: 0xc05d0ce  jal         func_174338
    ctx->pc = 0x172A88u;
    SET_GPR_U32(ctx, 31, 0x172A90u);
    ctx->pc = 0x172A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A88u;
            // 0x172a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174338u;
    if (runtime->hasFunction(0x174338u)) {
        auto targetFn = runtime->lookupFunction(0x174338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A90u; }
        if (ctx->pc != 0x172A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174338_0x174338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A90u; }
        if (ctx->pc != 0x172A90u) { return; }
    }
    ctx->pc = 0x172A90u;
label_172a90:
    // 0x172a90: 0xc0599d8  jal         func_166760
    ctx->pc = 0x172A90u;
    SET_GPR_U32(ctx, 31, 0x172A98u);
    ctx->pc = 0x172A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A90u;
            // 0x172a94: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A98u; }
        if (ctx->pc != 0x172A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A98u; }
        if (ctx->pc != 0x172A98u) { return; }
    }
    ctx->pc = 0x172A98u;
label_172a98:
    // 0x172a98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x172a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172a9c:
    // 0x172a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172aac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x172AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AB0u;
            // 0x172ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172AB8u;
    // 0x172ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172acc: 0xc0599de  jal         func_166778
    ctx->pc = 0x172ACCu;
    SET_GPR_U32(ctx, 31, 0x172AD4u);
    ctx->pc = 0x172AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172ACCu;
            // 0x172ad0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AD4u; }
        if (ctx->pc != 0x172AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AD4u; }
        if (ctx->pc != 0x172AD4u) { return; }
    }
    ctx->pc = 0x172AD4u;
label_172ad4:
    // 0x172ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ad8: 0xc05cac0  jal         func_172B00
    ctx->pc = 0x172AD8u;
    SET_GPR_U32(ctx, 31, 0x172AE0u);
    ctx->pc = 0x172ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172AD8u;
            // 0x172adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172B00u;
    if (runtime->hasFunction(0x172B00u)) {
        auto targetFn = runtime->lookupFunction(0x172B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AE0u; }
        if (ctx->pc != 0x172AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172B00_0x172b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AE0u; }
        if (ctx->pc != 0x172AE0u) { return; }
    }
    ctx->pc = 0x172AE0u;
label_172ae0:
    // 0x172ae0: 0xc0599e0  jal         func_166780
    ctx->pc = 0x172AE0u;
    SET_GPR_U32(ctx, 31, 0x172AE8u);
    ctx->pc = 0x172AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172AE0u;
            // 0x172ae4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AE8u; }
        if (ctx->pc != 0x172AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AE8u; }
        if (ctx->pc != 0x172AE8u) { return; }
    }
    ctx->pc = 0x172AE8u;
label_172ae8:
    // 0x172ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172af8: 0x3e00008  jr          $ra
    ctx->pc = 0x172AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AF8u;
            // 0x172afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172B00u;
}
