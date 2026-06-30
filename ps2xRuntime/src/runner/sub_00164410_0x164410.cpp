#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164410
// Address: 0x164410 - 0x164668
void sub_00164410_0x164410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164410_0x164410");
#endif

    switch (ctx->pc) {
        case 0x164454u: goto label_164454;
        case 0x164488u: goto label_164488;
        case 0x1644e8u: goto label_1644e8;
        case 0x164548u: goto label_164548;
        case 0x1645fcu: goto label_1645fc;
        case 0x164618u: goto label_164618;
        case 0x164658u: goto label_164658;
        default: break;
    }

    ctx->pc = 0x164410u;

label_164410:
    // 0x164410: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x164414: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164418: 0x8c4361dc  lw          $v1, 0x61DC($v0)
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25052)));
    // 0x16441c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16441cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164420: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x164428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16442c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164430: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x164430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164438: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x164438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16443c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16443cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x164440: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x164440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164444: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164444u;
    {
        const bool branch_taken_0x164444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164444u;
            // 0x164448: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164444) {
            ctx->pc = 0x164454u;
            goto label_164454;
        }
    }
    ctx->pc = 0x16444Cu;
    // 0x16444c: 0xc0590f4  jal         func_1643D0
    ctx->pc = 0x16444Cu;
    SET_GPR_U32(ctx, 31, 0x164454u);
    ctx->pc = 0x1643D0u;
    if (runtime->hasFunction(0x1643D0u)) {
        auto targetFn = runtime->lookupFunction(0x1643D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164454u; }
        if (ctx->pc != 0x164454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001643D0_0x1643d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164454u; }
        if (ctx->pc != 0x164454u) { return; }
    }
    ctx->pc = 0x164454u;
label_164454:
    // 0x164454: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x164454u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x164458: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x164458u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x16445c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16445Cu;
    {
        const bool branch_taken_0x16445c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x164460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16445Cu;
            // 0x164460: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16445c) {
            ctx->pc = 0x16446Cu;
            goto label_16446c;
        }
    }
    ctx->pc = 0x164464u;
    // 0x164464: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x164464u;
    {
        const bool branch_taken_0x164464 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x164468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164464u;
            // 0x164468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164464) {
            ctx->pc = 0x1645A4u;
            goto label_1645a4;
        }
    }
    ctx->pc = 0x16446Cu;
label_16446c:
    // 0x16446c: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x16446cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
    // 0x164470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x164470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164474: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x164474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x164478: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x164478u;
    {
        const bool branch_taken_0x164478 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x16447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164478u;
            // 0x16447c: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164478) {
            ctx->pc = 0x1644DCu;
            goto label_1644dc;
        }
    }
    ctx->pc = 0x164480u;
    // 0x164480: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x164480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164484: 0x0  nop
    ctx->pc = 0x164484u;
    // NOP
label_164488:
    // 0x164488: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x16448c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16448cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x164490: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164494: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x164494u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x164498: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16449c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1644a0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1644a4: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x1644a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1644a8: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x1644a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1644ac: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1644acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1644b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1644b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644b4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x1644b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1644b8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1644bc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1644c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1644c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1644c8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1644cc: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1644CCu;
    {
        const bool branch_taken_0x1644cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1644D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1644CCu;
            // 0x1644d0: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644cc) {
            ctx->pc = 0x164488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164488;
        }
    }
    ctx->pc = 0x1644D4u;
    // 0x1644d4: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x1644d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x1644d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1644d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1644dc:
    // 0x1644dc: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1644DCu;
    {
        const bool branch_taken_0x1644dc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1644E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1644DCu;
            // 0x1644e0: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644dc) {
            ctx->pc = 0x164534u;
            goto label_164534;
        }
    }
    ctx->pc = 0x1644E4u;
    // 0x1644e4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1644e8:
    // 0x1644e8: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1644ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1644f0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1644f4: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x1644f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1644f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1644fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1644fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x164500: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x164504: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x164504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164508: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x16450c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x16450cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x164510: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x164510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164514: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x164514u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x164518: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x164518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x16451c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x16451cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x164520: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164524: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164528: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x16452c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16452Cu;
    {
        const bool branch_taken_0x16452c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16452Cu;
            // 0x164530: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16452c) {
            ctx->pc = 0x1644E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1644e8;
        }
    }
    ctx->pc = 0x164534u;
label_164534:
    // 0x164534: 0x25622a38  addiu       $v0, $t3, 0x2A38
    ctx->pc = 0x164534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
    // 0x164538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x164538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16453c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16453Cu;
    {
        const bool branch_taken_0x16453c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x164540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16453Cu;
            // 0x164540: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16453c) {
            ctx->pc = 0x164594u;
            goto label_164594;
        }
    }
    ctx->pc = 0x164544u;
    // 0x164544: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x164544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164548:
    // 0x164548: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x16454c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16454cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x164550: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x164550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164554: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x164554u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x164558: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16455c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x164560: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x164560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x164564: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x164564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164568: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x164568u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16456c: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x16456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x164570: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x164570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164574: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x164574u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x164578: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x16457c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x164580: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164584: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164588: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x16458c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16458Cu;
    {
        const bool branch_taken_0x16458c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x164590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16458Cu;
            // 0x164590: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16458c) {
            ctx->pc = 0x164548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164548;
        }
    }
    ctx->pc = 0x164594u;
label_164594:
    // 0x164594: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x164594u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x164598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16459c: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x16459cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1645a0: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x1645a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_1645a4:
    // 0x1645a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1645a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1645ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1645acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1645b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1645b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1645b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1645b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1645bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1645BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1645C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1645BCu;
            // 0x1645c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1645C4u;
    // 0x1645c4: 0x0  nop
    ctx->pc = 0x1645c4u;
    // NOP
    // 0x1645c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1645c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1645cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1645ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1645d0: 0x8c4361dc  lw          $v1, 0x61DC($v0)
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25052)));
    // 0x1645d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1645d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1645d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1645dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1645e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1645e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1645e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1645e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1645e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1645ECu;
    {
        const bool branch_taken_0x1645ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1645ECu;
            // 0x1645f0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645ec) {
            ctx->pc = 0x1645FCu;
            goto label_1645fc;
        }
    }
    ctx->pc = 0x1645F4u;
    // 0x1645f4: 0xc0590f4  jal         func_1643D0
    ctx->pc = 0x1645F4u;
    SET_GPR_U32(ctx, 31, 0x1645FCu);
    ctx->pc = 0x1643D0u;
    if (runtime->hasFunction(0x1643D0u)) {
        auto targetFn = runtime->lookupFunction(0x1643D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645FCu; }
        if (ctx->pc != 0x1645FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001643D0_0x1643d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645FCu; }
        if (ctx->pc != 0x1645FCu) { return; }
    }
    ctx->pc = 0x1645FCu;
label_1645fc:
    // 0x1645fc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1645fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x164600: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x164600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164604: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x164604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164608: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x164608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16460c: 0x24843238  addiu       $a0, $a0, 0x3238
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12856));
    // 0x164610: 0xc059104  jal         func_164410
    ctx->pc = 0x164610u;
    SET_GPR_U32(ctx, 31, 0x164618u);
    ctx->pc = 0x164614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164610u;
            // 0x164614: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164410u;
    goto label_164410;
    ctx->pc = 0x164618u;
label_164618:
    // 0x164618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16461c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16461cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164628: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16462c: 0x3e00008  jr          $ra
    ctx->pc = 0x16462Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16462Cu;
            // 0x164630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164634u;
    // 0x164634: 0x0  nop
    ctx->pc = 0x164634u;
    // NOP
    // 0x164638: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x164638u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16463c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16463cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164640: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x164640u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164644: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x164644u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x164648: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x164648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16464c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x164650: 0x3e00008  jr          $ra
    ctx->pc = 0x164650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164650u;
            // 0x164654: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164658u;
label_164658:
    // 0x164658: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16465c: 0x3e00008  jr          $ra
    ctx->pc = 0x16465Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16465Cu;
            // 0x164660: 0xac4461fc  sw          $a0, 0x61FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25084), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164664u;
    // 0x164664: 0x0  nop
    ctx->pc = 0x164664u;
    // NOP
}
