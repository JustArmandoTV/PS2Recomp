#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00526850
// Address: 0x526850 - 0x526b00
void sub_00526850_0x526850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00526850_0x526850");
#endif

    switch (ctx->pc) {
        case 0x526850u: goto label_526850;
        case 0x526854u: goto label_526854;
        case 0x526858u: goto label_526858;
        case 0x52685cu: goto label_52685c;
        case 0x526860u: goto label_526860;
        case 0x526864u: goto label_526864;
        case 0x526868u: goto label_526868;
        case 0x52686cu: goto label_52686c;
        case 0x526870u: goto label_526870;
        case 0x526874u: goto label_526874;
        case 0x526878u: goto label_526878;
        case 0x52687cu: goto label_52687c;
        case 0x526880u: goto label_526880;
        case 0x526884u: goto label_526884;
        case 0x526888u: goto label_526888;
        case 0x52688cu: goto label_52688c;
        case 0x526890u: goto label_526890;
        case 0x526894u: goto label_526894;
        case 0x526898u: goto label_526898;
        case 0x52689cu: goto label_52689c;
        case 0x5268a0u: goto label_5268a0;
        case 0x5268a4u: goto label_5268a4;
        case 0x5268a8u: goto label_5268a8;
        case 0x5268acu: goto label_5268ac;
        case 0x5268b0u: goto label_5268b0;
        case 0x5268b4u: goto label_5268b4;
        case 0x5268b8u: goto label_5268b8;
        case 0x5268bcu: goto label_5268bc;
        case 0x5268c0u: goto label_5268c0;
        case 0x5268c4u: goto label_5268c4;
        case 0x5268c8u: goto label_5268c8;
        case 0x5268ccu: goto label_5268cc;
        case 0x5268d0u: goto label_5268d0;
        case 0x5268d4u: goto label_5268d4;
        case 0x5268d8u: goto label_5268d8;
        case 0x5268dcu: goto label_5268dc;
        case 0x5268e0u: goto label_5268e0;
        case 0x5268e4u: goto label_5268e4;
        case 0x5268e8u: goto label_5268e8;
        case 0x5268ecu: goto label_5268ec;
        case 0x5268f0u: goto label_5268f0;
        case 0x5268f4u: goto label_5268f4;
        case 0x5268f8u: goto label_5268f8;
        case 0x5268fcu: goto label_5268fc;
        case 0x526900u: goto label_526900;
        case 0x526904u: goto label_526904;
        case 0x526908u: goto label_526908;
        case 0x52690cu: goto label_52690c;
        case 0x526910u: goto label_526910;
        case 0x526914u: goto label_526914;
        case 0x526918u: goto label_526918;
        case 0x52691cu: goto label_52691c;
        case 0x526920u: goto label_526920;
        case 0x526924u: goto label_526924;
        case 0x526928u: goto label_526928;
        case 0x52692cu: goto label_52692c;
        case 0x526930u: goto label_526930;
        case 0x526934u: goto label_526934;
        case 0x526938u: goto label_526938;
        case 0x52693cu: goto label_52693c;
        case 0x526940u: goto label_526940;
        case 0x526944u: goto label_526944;
        case 0x526948u: goto label_526948;
        case 0x52694cu: goto label_52694c;
        case 0x526950u: goto label_526950;
        case 0x526954u: goto label_526954;
        case 0x526958u: goto label_526958;
        case 0x52695cu: goto label_52695c;
        case 0x526960u: goto label_526960;
        case 0x526964u: goto label_526964;
        case 0x526968u: goto label_526968;
        case 0x52696cu: goto label_52696c;
        case 0x526970u: goto label_526970;
        case 0x526974u: goto label_526974;
        case 0x526978u: goto label_526978;
        case 0x52697cu: goto label_52697c;
        case 0x526980u: goto label_526980;
        case 0x526984u: goto label_526984;
        case 0x526988u: goto label_526988;
        case 0x52698cu: goto label_52698c;
        case 0x526990u: goto label_526990;
        case 0x526994u: goto label_526994;
        case 0x526998u: goto label_526998;
        case 0x52699cu: goto label_52699c;
        case 0x5269a0u: goto label_5269a0;
        case 0x5269a4u: goto label_5269a4;
        case 0x5269a8u: goto label_5269a8;
        case 0x5269acu: goto label_5269ac;
        case 0x5269b0u: goto label_5269b0;
        case 0x5269b4u: goto label_5269b4;
        case 0x5269b8u: goto label_5269b8;
        case 0x5269bcu: goto label_5269bc;
        case 0x5269c0u: goto label_5269c0;
        case 0x5269c4u: goto label_5269c4;
        case 0x5269c8u: goto label_5269c8;
        case 0x5269ccu: goto label_5269cc;
        case 0x5269d0u: goto label_5269d0;
        case 0x5269d4u: goto label_5269d4;
        case 0x5269d8u: goto label_5269d8;
        case 0x5269dcu: goto label_5269dc;
        case 0x5269e0u: goto label_5269e0;
        case 0x5269e4u: goto label_5269e4;
        case 0x5269e8u: goto label_5269e8;
        case 0x5269ecu: goto label_5269ec;
        case 0x5269f0u: goto label_5269f0;
        case 0x5269f4u: goto label_5269f4;
        case 0x5269f8u: goto label_5269f8;
        case 0x5269fcu: goto label_5269fc;
        case 0x526a00u: goto label_526a00;
        case 0x526a04u: goto label_526a04;
        case 0x526a08u: goto label_526a08;
        case 0x526a0cu: goto label_526a0c;
        case 0x526a10u: goto label_526a10;
        case 0x526a14u: goto label_526a14;
        case 0x526a18u: goto label_526a18;
        case 0x526a1cu: goto label_526a1c;
        case 0x526a20u: goto label_526a20;
        case 0x526a24u: goto label_526a24;
        case 0x526a28u: goto label_526a28;
        case 0x526a2cu: goto label_526a2c;
        case 0x526a30u: goto label_526a30;
        case 0x526a34u: goto label_526a34;
        case 0x526a38u: goto label_526a38;
        case 0x526a3cu: goto label_526a3c;
        case 0x526a40u: goto label_526a40;
        case 0x526a44u: goto label_526a44;
        case 0x526a48u: goto label_526a48;
        case 0x526a4cu: goto label_526a4c;
        case 0x526a50u: goto label_526a50;
        case 0x526a54u: goto label_526a54;
        case 0x526a58u: goto label_526a58;
        case 0x526a5cu: goto label_526a5c;
        case 0x526a60u: goto label_526a60;
        case 0x526a64u: goto label_526a64;
        case 0x526a68u: goto label_526a68;
        case 0x526a6cu: goto label_526a6c;
        case 0x526a70u: goto label_526a70;
        case 0x526a74u: goto label_526a74;
        case 0x526a78u: goto label_526a78;
        case 0x526a7cu: goto label_526a7c;
        case 0x526a80u: goto label_526a80;
        case 0x526a84u: goto label_526a84;
        case 0x526a88u: goto label_526a88;
        case 0x526a8cu: goto label_526a8c;
        case 0x526a90u: goto label_526a90;
        case 0x526a94u: goto label_526a94;
        case 0x526a98u: goto label_526a98;
        case 0x526a9cu: goto label_526a9c;
        case 0x526aa0u: goto label_526aa0;
        case 0x526aa4u: goto label_526aa4;
        case 0x526aa8u: goto label_526aa8;
        case 0x526aacu: goto label_526aac;
        case 0x526ab0u: goto label_526ab0;
        case 0x526ab4u: goto label_526ab4;
        case 0x526ab8u: goto label_526ab8;
        case 0x526abcu: goto label_526abc;
        case 0x526ac0u: goto label_526ac0;
        case 0x526ac4u: goto label_526ac4;
        case 0x526ac8u: goto label_526ac8;
        case 0x526accu: goto label_526acc;
        case 0x526ad0u: goto label_526ad0;
        case 0x526ad4u: goto label_526ad4;
        case 0x526ad8u: goto label_526ad8;
        case 0x526adcu: goto label_526adc;
        case 0x526ae0u: goto label_526ae0;
        case 0x526ae4u: goto label_526ae4;
        case 0x526ae8u: goto label_526ae8;
        case 0x526aecu: goto label_526aec;
        case 0x526af0u: goto label_526af0;
        case 0x526af4u: goto label_526af4;
        case 0x526af8u: goto label_526af8;
        case 0x526afcu: goto label_526afc;
        default: break;
    }

    ctx->pc = 0x526850u;

label_526850:
    // 0x526850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x526850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_526854:
    // 0x526854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x526854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_526858:
    // 0x526858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52685c:
    // 0x52685c: 0xc131a24  jal         func_4C6890
label_526860:
    if (ctx->pc == 0x526860u) {
        ctx->pc = 0x526860u;
            // 0x526860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526864u;
        goto label_526864;
    }
    ctx->pc = 0x52685Cu;
    SET_GPR_U32(ctx, 31, 0x526864u);
    ctx->pc = 0x526860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52685Cu;
            // 0x526860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6890u;
    if (runtime->hasFunction(0x4C6890u)) {
        auto targetFn = runtime->lookupFunction(0x4C6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526864u; }
        if (ctx->pc != 0x526864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6890_0x4c6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526864u; }
        if (ctx->pc != 0x526864u) { return; }
    }
    ctx->pc = 0x526864u;
label_526864:
    // 0x526864: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x526864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_526868:
    // 0x526868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x526868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52686c:
    // 0x52686c: 0x246363f0  addiu       $v1, $v1, 0x63F0
    ctx->pc = 0x52686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25584));
label_526870:
    // 0x526870: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x526870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_526874:
    // 0x526874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x526874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_526878:
    // 0x526878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52687c:
    // 0x52687c: 0x3e00008  jr          $ra
label_526880:
    if (ctx->pc == 0x526880u) {
        ctx->pc = 0x526880u;
            // 0x526880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x526884u;
        goto label_526884;
    }
    ctx->pc = 0x52687Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52687Cu;
            // 0x526880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526884u;
label_526884:
    // 0x526884: 0x0  nop
    ctx->pc = 0x526884u;
    // NOP
label_526888:
    // 0x526888: 0x0  nop
    ctx->pc = 0x526888u;
    // NOP
label_52688c:
    // 0x52688c: 0x0  nop
    ctx->pc = 0x52688cu;
    // NOP
label_526890:
    // 0x526890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x526890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_526894:
    // 0x526894: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x526894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_526898:
    // 0x526898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x526898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52689c:
    // 0x52689c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5268a0:
    // 0x5268a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5268a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5268a4:
    // 0x5268a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5268a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5268a8:
    // 0x5268a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5268a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5268ac:
    // 0x5268ac: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x5268acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_5268b0:
    // 0x5268b0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_5268b4:
    if (ctx->pc == 0x5268B4u) {
        ctx->pc = 0x5268B4u;
            // 0x5268b4: 0x8c700e80  lw          $s0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->pc = 0x5268B8u;
        goto label_5268b8;
    }
    ctx->pc = 0x5268B0u;
    {
        const bool branch_taken_0x5268b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5268B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5268B0u;
            // 0x5268b4: 0x8c700e80  lw          $s0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5268b0) {
            ctx->pc = 0x5268F8u;
            goto label_5268f8;
        }
    }
    ctx->pc = 0x5268B8u;
label_5268b8:
    // 0x5268b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5268b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5268bc:
    // 0x5268bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5268bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5268c0:
    // 0x5268c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5268c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5268c4:
    // 0x5268c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5268c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5268c8:
    // 0x5268c8: 0x320f809  jalr        $t9
label_5268cc:
    if (ctx->pc == 0x5268CCu) {
        ctx->pc = 0x5268CCu;
            // 0x5268cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5268D0u;
        goto label_5268d0;
    }
    ctx->pc = 0x5268C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5268D0u);
        ctx->pc = 0x5268CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5268C8u;
            // 0x5268cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5268D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5268D0u; }
            if (ctx->pc != 0x5268D0u) { return; }
        }
        }
    }
    ctx->pc = 0x5268D0u;
label_5268d0:
    // 0x5268d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5268d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5268d4:
    // 0x5268d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5268d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5268d8:
    // 0x5268d8: 0xc0e9650  jal         func_3A5940
label_5268dc:
    if (ctx->pc == 0x5268DCu) {
        ctx->pc = 0x5268DCu;
            // 0x5268dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5268E0u;
        goto label_5268e0;
    }
    ctx->pc = 0x5268D8u;
    SET_GPR_U32(ctx, 31, 0x5268E0u);
    ctx->pc = 0x5268DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5268D8u;
            // 0x5268dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A5940u;
    if (runtime->hasFunction(0x3A5940u)) {
        auto targetFn = runtime->lookupFunction(0x3A5940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5268E0u; }
        if (ctx->pc != 0x5268E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A5940_0x3a5940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5268E0u; }
        if (ctx->pc != 0x5268E0u) { return; }
    }
    ctx->pc = 0x5268E0u;
label_5268e0:
    // 0x5268e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x5268e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_5268e4:
    // 0x5268e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5268e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5268e8:
    // 0x5268e8: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x5268e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_5268ec:
    // 0x5268ec: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x5268ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5268f0:
    // 0x5268f0: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_5268f4:
    if (ctx->pc == 0x5268F4u) {
        ctx->pc = 0x5268F4u;
            // 0x5268f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5268F8u;
        goto label_5268f8;
    }
    ctx->pc = 0x5268F0u;
    {
        const bool branch_taken_0x5268f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5268f0) {
            ctx->pc = 0x5268F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5268F0u;
            // 0x5268f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5268C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5268c0;
        }
    }
    ctx->pc = 0x5268F8u;
label_5268f8:
    // 0x5268f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5268f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5268fc:
    // 0x5268fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5268fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_526900:
    // 0x526900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526904:
    // 0x526904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526908:
    // 0x526908: 0x3e00008  jr          $ra
label_52690c:
    if (ctx->pc == 0x52690Cu) {
        ctx->pc = 0x52690Cu;
            // 0x52690c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x526910u;
        goto label_526910;
    }
    ctx->pc = 0x526908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526908u;
            // 0x52690c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526910u;
label_526910:
    // 0x526910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x526910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_526914:
    // 0x526914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x526914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_526918:
    // 0x526918: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x526918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_52691c:
    // 0x52691c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_526920:
    // 0x526920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x526920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_526924:
    // 0x526924: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x526924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526928:
    // 0x526928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x526928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52692c:
    // 0x52692c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_526930:
    // 0x526930: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x526930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526934:
    // 0x526934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_526938:
    // 0x526938: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x526938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52693c:
    // 0x52693c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_526940:
    // 0x526940: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x526940u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_526944:
    // 0x526944: 0x26b0000c  addiu       $s0, $s5, 0xC
    ctx->pc = 0x526944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_526948:
    // 0x526948: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x526948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52694c:
    // 0x52694c: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x52694cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_526950:
    // 0x526950: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x526950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_526954:
    // 0x526954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x526954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_526958:
    // 0x526958: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x526958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_52695c:
    // 0x52695c: 0x320f809  jalr        $t9
label_526960:
    if (ctx->pc == 0x526960u) {
        ctx->pc = 0x526960u;
            // 0x526960: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526964u;
        goto label_526964;
    }
    ctx->pc = 0x52695Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526964u);
        ctx->pc = 0x526960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52695Cu;
            // 0x526960: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526964u; }
            if (ctx->pc != 0x526964u) { return; }
        }
        }
    }
    ctx->pc = 0x526964u;
label_526964:
    // 0x526964: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x526964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_526968:
    // 0x526968: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x526968u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52696c:
    // 0x52696c: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x52696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_526970:
    // 0x526970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x526970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_526974:
    // 0x526974: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x526974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526978:
    // 0x526978: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x526978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_52697c:
    // 0x52697c: 0xc6430044  lwc1        $f3, 0x44($s2)
    ctx->pc = 0x52697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_526980:
    // 0x526980: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x526980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_526984:
    // 0x526984: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_526988:
    if (ctx->pc == 0x526988u) {
        ctx->pc = 0x526988u;
            // 0x526988: 0x2645003c  addiu       $a1, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->pc = 0x52698Cu;
        goto label_52698c;
    }
    ctx->pc = 0x526984u;
    {
        const bool branch_taken_0x526984 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x526988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526984u;
            // 0x526988: 0x2645003c  addiu       $a1, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526984) {
            ctx->pc = 0x5269C8u;
            goto label_5269c8;
        }
    }
    ctx->pc = 0x52698Cu;
label_52698c:
    // 0x52698c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x52698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_526990:
    // 0x526990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x526990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_526994:
    // 0x526994: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x526994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_526998:
    // 0x526998: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x526998u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_52699c:
    // 0x52699c: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x52699cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_5269a0:
    // 0x5269a0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x5269a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_5269a4:
    // 0x5269a4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x5269a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5269a8:
    // 0x5269a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x5269a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5269ac:
    // 0x5269ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5269acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5269b0:
    // 0x5269b0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_5269b4:
    if (ctx->pc == 0x5269B4u) {
        ctx->pc = 0x5269B8u;
        goto label_5269b8;
    }
    ctx->pc = 0x5269B0u;
    {
        const bool branch_taken_0x5269b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5269b0) {
            ctx->pc = 0x526A10u;
            goto label_526a10;
        }
    }
    ctx->pc = 0x5269B8u;
label_5269b8:
    // 0x5269b8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x5269b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_5269bc:
    // 0x5269bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x5269bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_5269c0:
    // 0x5269c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_5269c4:
    if (ctx->pc == 0x5269C4u) {
        ctx->pc = 0x5269C4u;
            // 0x5269c4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x5269C8u;
        goto label_5269c8;
    }
    ctx->pc = 0x5269C0u;
    {
        const bool branch_taken_0x5269c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5269C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5269C0u;
            // 0x5269c4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5269c0) {
            ctx->pc = 0x526A10u;
            goto label_526a10;
        }
    }
    ctx->pc = 0x5269C8u;
label_5269c8:
    // 0x5269c8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x5269c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5269cc:
    // 0x5269cc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_5269d0:
    if (ctx->pc == 0x5269D0u) {
        ctx->pc = 0x5269D4u;
        goto label_5269d4;
    }
    ctx->pc = 0x5269CCu;
    {
        const bool branch_taken_0x5269cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5269cc) {
            ctx->pc = 0x526A10u;
            goto label_526a10;
        }
    }
    ctx->pc = 0x5269D4u;
label_5269d4:
    // 0x5269d4: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x5269d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5269d8:
    // 0x5269d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5269d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5269dc:
    // 0x5269dc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x5269dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5269e0:
    // 0x5269e0: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x5269e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_5269e4:
    // 0x5269e4: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x5269e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_5269e8:
    // 0x5269e8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x5269e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_5269ec:
    // 0x5269ec: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x5269ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5269f0:
    // 0x5269f0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x5269f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5269f4:
    // 0x5269f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5269f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5269f8:
    // 0x5269f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_5269fc:
    if (ctx->pc == 0x5269FCu) {
        ctx->pc = 0x526A00u;
        goto label_526a00;
    }
    ctx->pc = 0x5269F8u;
    {
        const bool branch_taken_0x5269f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5269f8) {
            ctx->pc = 0x526A10u;
            goto label_526a10;
        }
    }
    ctx->pc = 0x526A00u;
label_526a00:
    // 0x526a00: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x526a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_526a04:
    // 0x526a04: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x526a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_526a08:
    // 0x526a08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x526a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_526a0c:
    // 0x526a0c: 0x0  nop
    ctx->pc = 0x526a0cu;
    // NOP
label_526a10:
    // 0x526a10: 0x80840e3f  lb          $a0, 0xE3F($a0)
    ctx->pc = 0x526a10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3647)));
label_526a14:
    // 0x526a14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x526a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_526a18:
    // 0x526a18: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x526a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_526a1c:
    // 0x526a1c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_526a20:
    if (ctx->pc == 0x526A20u) {
        ctx->pc = 0x526A24u;
        goto label_526a24;
    }
    ctx->pc = 0x526A1Cu;
    {
        const bool branch_taken_0x526a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x526a1c) {
            ctx->pc = 0x526A40u;
            goto label_526a40;
        }
    }
    ctx->pc = 0x526A24u;
label_526a24:
    // 0x526a24: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x526a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526a28:
    // 0x526a28: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x526a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_526a2c:
    // 0x526a2c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x526a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_526a30:
    // 0x526a30: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x526a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_526a34:
    // 0x526a34: 0x1000000a  b           . + 4 + (0xA << 2)
label_526a38:
    if (ctx->pc == 0x526A38u) {
        ctx->pc = 0x526A38u;
            // 0x526a38: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x526A3Cu;
        goto label_526a3c;
    }
    ctx->pc = 0x526A34u;
    {
        const bool branch_taken_0x526a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x526A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526A34u;
            // 0x526a38: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526a34) {
            ctx->pc = 0x526A60u;
            goto label_526a60;
        }
    }
    ctx->pc = 0x526A3Cu;
label_526a3c:
    // 0x526a3c: 0x0  nop
    ctx->pc = 0x526a3cu;
    // NOP
label_526a40:
    // 0x526a40: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x526a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_526a44:
    // 0x526a44: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_526a48:
    if (ctx->pc == 0x526A48u) {
        ctx->pc = 0x526A4Cu;
        goto label_526a4c;
    }
    ctx->pc = 0x526A44u;
    {
        const bool branch_taken_0x526a44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x526a44) {
            ctx->pc = 0x526A60u;
            goto label_526a60;
        }
    }
    ctx->pc = 0x526A4Cu;
label_526a4c:
    // 0x526a4c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x526a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_526a50:
    // 0x526a50: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x526a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_526a54:
    // 0x526a54: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x526a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_526a58:
    // 0x526a58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x526a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_526a5c:
    // 0x526a5c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x526a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_526a60:
    // 0x526a60: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x526a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_526a64:
    // 0x526a64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x526a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_526a68:
    // 0x526a68: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x526a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_526a6c:
    // 0x526a6c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x526a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_526a70:
    // 0x526a70: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_526a74:
    if (ctx->pc == 0x526A74u) {
        ctx->pc = 0x526A74u;
            // 0x526a74: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x526A78u;
        goto label_526a78;
    }
    ctx->pc = 0x526A70u;
    {
        const bool branch_taken_0x526a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x526A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526A70u;
            // 0x526a74: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526a70) {
            ctx->pc = 0x526950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_526950;
        }
    }
    ctx->pc = 0x526A78u;
label_526a78:
    // 0x526a78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x526a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_526a7c:
    // 0x526a7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x526a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_526a80:
    // 0x526a80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x526a80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_526a84:
    // 0x526a84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x526a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_526a88:
    // 0x526a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x526a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_526a8c:
    // 0x526a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526a90:
    // 0x526a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526a94:
    // 0x526a94: 0x3e00008  jr          $ra
label_526a98:
    if (ctx->pc == 0x526A98u) {
        ctx->pc = 0x526A98u;
            // 0x526a98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x526A9Cu;
        goto label_526a9c;
    }
    ctx->pc = 0x526A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526A94u;
            // 0x526a98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526A9Cu;
label_526a9c:
    // 0x526a9c: 0x0  nop
    ctx->pc = 0x526a9cu;
    // NOP
label_526aa0:
    // 0x526aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x526aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_526aa4:
    // 0x526aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x526aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_526aa8:
    // 0x526aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_526aac:
    // 0x526aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_526ab0:
    // 0x526ab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x526ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526ab4:
    // 0x526ab4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_526ab8:
    if (ctx->pc == 0x526AB8u) {
        ctx->pc = 0x526AB8u;
            // 0x526ab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526ABCu;
        goto label_526abc;
    }
    ctx->pc = 0x526AB4u;
    {
        const bool branch_taken_0x526ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x526AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526AB4u;
            // 0x526ab8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526ab4) {
            ctx->pc = 0x526AE8u;
            goto label_526ae8;
        }
    }
    ctx->pc = 0x526ABCu;
label_526abc:
    // 0x526abc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x526abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_526ac0:
    // 0x526ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x526ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526ac4:
    // 0x526ac4: 0x24426410  addiu       $v0, $v0, 0x6410
    ctx->pc = 0x526ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25616));
label_526ac8:
    // 0x526ac8: 0xc0e9bcc  jal         func_3A6F30
label_526acc:
    if (ctx->pc == 0x526ACCu) {
        ctx->pc = 0x526ACCu;
            // 0x526acc: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x526AD0u;
        goto label_526ad0;
    }
    ctx->pc = 0x526AC8u;
    SET_GPR_U32(ctx, 31, 0x526AD0u);
    ctx->pc = 0x526ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526AC8u;
            // 0x526acc: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F30u;
    if (runtime->hasFunction(0x3A6F30u)) {
        auto targetFn = runtime->lookupFunction(0x3A6F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526AD0u; }
        if (ctx->pc != 0x526AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6F30_0x3a6f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526AD0u; }
        if (ctx->pc != 0x526AD0u) { return; }
    }
    ctx->pc = 0x526AD0u;
label_526ad0:
    // 0x526ad0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x526ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_526ad4:
    // 0x526ad4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x526ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_526ad8:
    // 0x526ad8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_526adc:
    if (ctx->pc == 0x526ADCu) {
        ctx->pc = 0x526ADCu;
            // 0x526adc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526AE0u;
        goto label_526ae0;
    }
    ctx->pc = 0x526AD8u;
    {
        const bool branch_taken_0x526ad8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x526ad8) {
            ctx->pc = 0x526ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526AD8u;
            // 0x526adc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x526AECu;
            goto label_526aec;
        }
    }
    ctx->pc = 0x526AE0u;
label_526ae0:
    // 0x526ae0: 0xc0400a8  jal         func_1002A0
label_526ae4:
    if (ctx->pc == 0x526AE4u) {
        ctx->pc = 0x526AE4u;
            // 0x526ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526AE8u;
        goto label_526ae8;
    }
    ctx->pc = 0x526AE0u;
    SET_GPR_U32(ctx, 31, 0x526AE8u);
    ctx->pc = 0x526AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526AE0u;
            // 0x526ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526AE8u; }
        if (ctx->pc != 0x526AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526AE8u; }
        if (ctx->pc != 0x526AE8u) { return; }
    }
    ctx->pc = 0x526AE8u;
label_526ae8:
    // 0x526ae8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x526ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_526aec:
    // 0x526aec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x526aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_526af0:
    // 0x526af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526af4:
    // 0x526af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526af8:
    // 0x526af8: 0x3e00008  jr          $ra
label_526afc:
    if (ctx->pc == 0x526AFCu) {
        ctx->pc = 0x526AFCu;
            // 0x526afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x526B00u;
        goto label_fallthrough_0x526af8;
    }
    ctx->pc = 0x526AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526AF8u;
            // 0x526afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x526af8:
    ctx->pc = 0x526B00u;
}
