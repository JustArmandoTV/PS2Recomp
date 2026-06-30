#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001801C8
// Address: 0x1801c8 - 0x180360
void sub_001801C8_0x1801c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001801C8_0x1801c8");
#endif

    switch (ctx->pc) {
        case 0x180210u: goto label_180210;
        case 0x18023cu: goto label_18023c;
        case 0x1802a8u: goto label_1802a8;
        case 0x1802b8u: goto label_1802b8;
        default: break;
    }

    ctx->pc = 0x1801c8u;

    // 0x1801c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1801cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1801ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1801d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1801d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1801d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1801d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1801d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1801dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1801e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1801e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1801e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1801e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1801e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1801ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1801f0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1801f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1801f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1801f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1801f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1801fc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1801FCu;
    {
        const bool branch_taken_0x1801fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x180200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801FCu;
            // 0x180200: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801fc) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x180204u;
    // 0x180204: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180208: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180208u;
    SET_GPR_U32(ctx, 31, 0x180210u);
    ctx->pc = 0x18020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180208u;
            // 0x18020c: 0x24846758  addiu       $a0, $a0, 0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180210u; }
        if (ctx->pc != 0x180210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180210u; }
        if (ctx->pc != 0x180210u) { return; }
    }
    ctx->pc = 0x180210u;
label_180210:
    // 0x180210: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x180210u;
    {
        const bool branch_taken_0x180210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180210u;
            // 0x180214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180210) {
            ctx->pc = 0x180338u;
            goto label_180338;
        }
    }
    ctx->pc = 0x180218u;
label_180218:
    // 0x180218: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x18021c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x18021cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x180220: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x180220u;
    {
        const bool branch_taken_0x180220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180220u;
            // 0x180224: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180220) {
            ctx->pc = 0x180338u;
            goto label_180338;
        }
    }
    ctx->pc = 0x180228u;
    // 0x180228: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x180228u;
    {
        const bool branch_taken_0x180228 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x180228) {
            ctx->pc = 0x18022Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180228u;
            // 0x18022c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180248u;
            goto label_180248;
        }
    }
    ctx->pc = 0x180230u;
    // 0x180230: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180234: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180234u;
    SET_GPR_U32(ctx, 31, 0x18023Cu);
    ctx->pc = 0x180238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180234u;
            // 0x180238: 0x24846788  addiu       $a0, $a0, 0x6788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18023Cu; }
        if (ctx->pc != 0x18023Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18023Cu; }
        if (ctx->pc != 0x18023Cu) { return; }
    }
    ctx->pc = 0x18023Cu;
label_18023c:
    // 0x18023c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18023Cu;
    {
        const bool branch_taken_0x18023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18023Cu;
            // 0x180240: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18023c) {
            ctx->pc = 0x180338u;
            goto label_180338;
        }
    }
    ctx->pc = 0x180244u;
    // 0x180244: 0x0  nop
    ctx->pc = 0x180244u;
    // NOP
label_180248:
    // 0x180248: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x18024c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x18024cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x180250: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x180250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180254: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x180258: 0x2467001e  addiu       $a3, $v1, 0x1E
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x18025c: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x18025cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x180260: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x180260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180264: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x180264u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x180268: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x180268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18026c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x180270: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x180270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x180274: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180278: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x180278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x18027c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x180280: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x180280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x180284: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x180288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18028c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x180290: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x180290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x180294: 0x684026  xor         $t0, $v1, $t0
    ctx->pc = 0x180294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x180298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18029c: 0x68980b  movn        $s3, $v1, $t0
    ctx->pc = 0x18029cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1802a0: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1802A0u;
    SET_GPR_U32(ctx, 31, 0x1802A8u);
    ctx->pc = 0x1802A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1802A0u;
            // 0x1802a4: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802A8u; }
        if (ctx->pc != 0x1802A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1802A8u; }
        if (ctx->pc != 0x1802A8u) { return; }
    }
    ctx->pc = 0x1802A8u;
label_1802a8:
    // 0x1802a8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1802a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1802ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1802acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802b0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1802B0u;
    {
        const bool branch_taken_0x1802b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802B0u;
            // 0x1802b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802b0) {
            ctx->pc = 0x1802D8u;
            goto label_1802d8;
        }
    }
    ctx->pc = 0x1802B8u;
label_1802b8:
    // 0x1802b8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1802b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1802bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1802c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1802c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1802c4: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x1802c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1802c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1802cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1802d0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1802D0u;
    {
        const bool branch_taken_0x1802d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1802D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802D0u;
            // 0x1802d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802d0) {
            ctx->pc = 0x1802B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1802b8;
        }
    }
    ctx->pc = 0x1802D8u;
label_1802d8:
    // 0x1802d8: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1802d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1802dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1802e0: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x1802e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x1802e4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1802e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1802e8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1802e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1802ec: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x1802ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x1802f0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1802f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1802f4: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1802f8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1802fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1802fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x180300: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x180300u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x180304: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x180304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180308: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x180308u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18030c: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x180310: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x180314: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x180318: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18031c: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x18031cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x180320: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180324: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180324u;
    {
        const bool branch_taken_0x180324 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x180328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180324u;
            // 0x180328: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180324) {
            ctx->pc = 0x180334u;
            goto label_180334;
        }
    }
    ctx->pc = 0x18032Cu;
    // 0x18032c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180330: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x180330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_180334:
    // 0x180334: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x180334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180338:
    // 0x180338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18033c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18033cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180340: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180344: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x180344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180348: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x180348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18034c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18034cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180350: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x180350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180354: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x180354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x180358: 0x3e00008  jr          $ra
    ctx->pc = 0x180358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180358u;
            // 0x18035c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180360u;
}
