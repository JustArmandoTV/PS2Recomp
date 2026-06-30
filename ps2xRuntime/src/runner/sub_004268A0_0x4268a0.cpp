#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004268A0
// Address: 0x4268a0 - 0x426b90
void sub_004268A0_0x4268a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004268A0_0x4268a0");
#endif

    switch (ctx->pc) {
        case 0x4268a0u: goto label_4268a0;
        case 0x4268a4u: goto label_4268a4;
        case 0x4268a8u: goto label_4268a8;
        case 0x4268acu: goto label_4268ac;
        case 0x4268b0u: goto label_4268b0;
        case 0x4268b4u: goto label_4268b4;
        case 0x4268b8u: goto label_4268b8;
        case 0x4268bcu: goto label_4268bc;
        case 0x4268c0u: goto label_4268c0;
        case 0x4268c4u: goto label_4268c4;
        case 0x4268c8u: goto label_4268c8;
        case 0x4268ccu: goto label_4268cc;
        case 0x4268d0u: goto label_4268d0;
        case 0x4268d4u: goto label_4268d4;
        case 0x4268d8u: goto label_4268d8;
        case 0x4268dcu: goto label_4268dc;
        case 0x4268e0u: goto label_4268e0;
        case 0x4268e4u: goto label_4268e4;
        case 0x4268e8u: goto label_4268e8;
        case 0x4268ecu: goto label_4268ec;
        case 0x4268f0u: goto label_4268f0;
        case 0x4268f4u: goto label_4268f4;
        case 0x4268f8u: goto label_4268f8;
        case 0x4268fcu: goto label_4268fc;
        case 0x426900u: goto label_426900;
        case 0x426904u: goto label_426904;
        case 0x426908u: goto label_426908;
        case 0x42690cu: goto label_42690c;
        case 0x426910u: goto label_426910;
        case 0x426914u: goto label_426914;
        case 0x426918u: goto label_426918;
        case 0x42691cu: goto label_42691c;
        case 0x426920u: goto label_426920;
        case 0x426924u: goto label_426924;
        case 0x426928u: goto label_426928;
        case 0x42692cu: goto label_42692c;
        case 0x426930u: goto label_426930;
        case 0x426934u: goto label_426934;
        case 0x426938u: goto label_426938;
        case 0x42693cu: goto label_42693c;
        case 0x426940u: goto label_426940;
        case 0x426944u: goto label_426944;
        case 0x426948u: goto label_426948;
        case 0x42694cu: goto label_42694c;
        case 0x426950u: goto label_426950;
        case 0x426954u: goto label_426954;
        case 0x426958u: goto label_426958;
        case 0x42695cu: goto label_42695c;
        case 0x426960u: goto label_426960;
        case 0x426964u: goto label_426964;
        case 0x426968u: goto label_426968;
        case 0x42696cu: goto label_42696c;
        case 0x426970u: goto label_426970;
        case 0x426974u: goto label_426974;
        case 0x426978u: goto label_426978;
        case 0x42697cu: goto label_42697c;
        case 0x426980u: goto label_426980;
        case 0x426984u: goto label_426984;
        case 0x426988u: goto label_426988;
        case 0x42698cu: goto label_42698c;
        case 0x426990u: goto label_426990;
        case 0x426994u: goto label_426994;
        case 0x426998u: goto label_426998;
        case 0x42699cu: goto label_42699c;
        case 0x4269a0u: goto label_4269a0;
        case 0x4269a4u: goto label_4269a4;
        case 0x4269a8u: goto label_4269a8;
        case 0x4269acu: goto label_4269ac;
        case 0x4269b0u: goto label_4269b0;
        case 0x4269b4u: goto label_4269b4;
        case 0x4269b8u: goto label_4269b8;
        case 0x4269bcu: goto label_4269bc;
        case 0x4269c0u: goto label_4269c0;
        case 0x4269c4u: goto label_4269c4;
        case 0x4269c8u: goto label_4269c8;
        case 0x4269ccu: goto label_4269cc;
        case 0x4269d0u: goto label_4269d0;
        case 0x4269d4u: goto label_4269d4;
        case 0x4269d8u: goto label_4269d8;
        case 0x4269dcu: goto label_4269dc;
        case 0x4269e0u: goto label_4269e0;
        case 0x4269e4u: goto label_4269e4;
        case 0x4269e8u: goto label_4269e8;
        case 0x4269ecu: goto label_4269ec;
        case 0x4269f0u: goto label_4269f0;
        case 0x4269f4u: goto label_4269f4;
        case 0x4269f8u: goto label_4269f8;
        case 0x4269fcu: goto label_4269fc;
        case 0x426a00u: goto label_426a00;
        case 0x426a04u: goto label_426a04;
        case 0x426a08u: goto label_426a08;
        case 0x426a0cu: goto label_426a0c;
        case 0x426a10u: goto label_426a10;
        case 0x426a14u: goto label_426a14;
        case 0x426a18u: goto label_426a18;
        case 0x426a1cu: goto label_426a1c;
        case 0x426a20u: goto label_426a20;
        case 0x426a24u: goto label_426a24;
        case 0x426a28u: goto label_426a28;
        case 0x426a2cu: goto label_426a2c;
        case 0x426a30u: goto label_426a30;
        case 0x426a34u: goto label_426a34;
        case 0x426a38u: goto label_426a38;
        case 0x426a3cu: goto label_426a3c;
        case 0x426a40u: goto label_426a40;
        case 0x426a44u: goto label_426a44;
        case 0x426a48u: goto label_426a48;
        case 0x426a4cu: goto label_426a4c;
        case 0x426a50u: goto label_426a50;
        case 0x426a54u: goto label_426a54;
        case 0x426a58u: goto label_426a58;
        case 0x426a5cu: goto label_426a5c;
        case 0x426a60u: goto label_426a60;
        case 0x426a64u: goto label_426a64;
        case 0x426a68u: goto label_426a68;
        case 0x426a6cu: goto label_426a6c;
        case 0x426a70u: goto label_426a70;
        case 0x426a74u: goto label_426a74;
        case 0x426a78u: goto label_426a78;
        case 0x426a7cu: goto label_426a7c;
        case 0x426a80u: goto label_426a80;
        case 0x426a84u: goto label_426a84;
        case 0x426a88u: goto label_426a88;
        case 0x426a8cu: goto label_426a8c;
        case 0x426a90u: goto label_426a90;
        case 0x426a94u: goto label_426a94;
        case 0x426a98u: goto label_426a98;
        case 0x426a9cu: goto label_426a9c;
        case 0x426aa0u: goto label_426aa0;
        case 0x426aa4u: goto label_426aa4;
        case 0x426aa8u: goto label_426aa8;
        case 0x426aacu: goto label_426aac;
        case 0x426ab0u: goto label_426ab0;
        case 0x426ab4u: goto label_426ab4;
        case 0x426ab8u: goto label_426ab8;
        case 0x426abcu: goto label_426abc;
        case 0x426ac0u: goto label_426ac0;
        case 0x426ac4u: goto label_426ac4;
        case 0x426ac8u: goto label_426ac8;
        case 0x426accu: goto label_426acc;
        case 0x426ad0u: goto label_426ad0;
        case 0x426ad4u: goto label_426ad4;
        case 0x426ad8u: goto label_426ad8;
        case 0x426adcu: goto label_426adc;
        case 0x426ae0u: goto label_426ae0;
        case 0x426ae4u: goto label_426ae4;
        case 0x426ae8u: goto label_426ae8;
        case 0x426aecu: goto label_426aec;
        case 0x426af0u: goto label_426af0;
        case 0x426af4u: goto label_426af4;
        case 0x426af8u: goto label_426af8;
        case 0x426afcu: goto label_426afc;
        case 0x426b00u: goto label_426b00;
        case 0x426b04u: goto label_426b04;
        case 0x426b08u: goto label_426b08;
        case 0x426b0cu: goto label_426b0c;
        case 0x426b10u: goto label_426b10;
        case 0x426b14u: goto label_426b14;
        case 0x426b18u: goto label_426b18;
        case 0x426b1cu: goto label_426b1c;
        case 0x426b20u: goto label_426b20;
        case 0x426b24u: goto label_426b24;
        case 0x426b28u: goto label_426b28;
        case 0x426b2cu: goto label_426b2c;
        case 0x426b30u: goto label_426b30;
        case 0x426b34u: goto label_426b34;
        case 0x426b38u: goto label_426b38;
        case 0x426b3cu: goto label_426b3c;
        case 0x426b40u: goto label_426b40;
        case 0x426b44u: goto label_426b44;
        case 0x426b48u: goto label_426b48;
        case 0x426b4cu: goto label_426b4c;
        case 0x426b50u: goto label_426b50;
        case 0x426b54u: goto label_426b54;
        case 0x426b58u: goto label_426b58;
        case 0x426b5cu: goto label_426b5c;
        case 0x426b60u: goto label_426b60;
        case 0x426b64u: goto label_426b64;
        case 0x426b68u: goto label_426b68;
        case 0x426b6cu: goto label_426b6c;
        case 0x426b70u: goto label_426b70;
        case 0x426b74u: goto label_426b74;
        case 0x426b78u: goto label_426b78;
        case 0x426b7cu: goto label_426b7c;
        case 0x426b80u: goto label_426b80;
        case 0x426b84u: goto label_426b84;
        case 0x426b88u: goto label_426b88;
        case 0x426b8cu: goto label_426b8c;
        default: break;
    }

    ctx->pc = 0x4268a0u;

label_4268a0:
    // 0x4268a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4268a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4268a4:
    // 0x4268a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4268a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4268a8:
    // 0x4268a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4268a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4268ac:
    // 0x4268ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4268acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4268b0:
    // 0x4268b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4268b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4268b4:
    // 0x4268b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4268b8:
    if (ctx->pc == 0x4268B8u) {
        ctx->pc = 0x4268B8u;
            // 0x4268b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4268BCu;
        goto label_4268bc;
    }
    ctx->pc = 0x4268B4u;
    {
        const bool branch_taken_0x4268b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4268B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4268B4u;
            // 0x4268b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4268b4) {
            ctx->pc = 0x4269E8u;
            goto label_4269e8;
        }
    }
    ctx->pc = 0x4268BCu;
label_4268bc:
    // 0x4268bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4268bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4268c0:
    // 0x4268c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4268c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4268c4:
    // 0x4268c4: 0x2463bec0  addiu       $v1, $v1, -0x4140
    ctx->pc = 0x4268c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950592));
label_4268c8:
    // 0x4268c8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x4268c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_4268cc:
    // 0x4268cc: 0x2442bef8  addiu       $v0, $v0, -0x4108
    ctx->pc = 0x4268ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950648));
label_4268d0:
    // 0x4268d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4268d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4268d4:
    // 0x4268d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4268d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4268d8:
    // 0x4268d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4268d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4268dc:
    // 0x4268dc: 0xc0407c0  jal         func_101F00
label_4268e0:
    if (ctx->pc == 0x4268E0u) {
        ctx->pc = 0x4268E0u;
            // 0x4268e0: 0x24a55400  addiu       $a1, $a1, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
        ctx->pc = 0x4268E4u;
        goto label_4268e4;
    }
    ctx->pc = 0x4268DCu;
    SET_GPR_U32(ctx, 31, 0x4268E4u);
    ctx->pc = 0x4268E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4268DCu;
            // 0x4268e0: 0x24a55400  addiu       $a1, $a1, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4268E4u; }
        if (ctx->pc != 0x4268E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4268E4u; }
        if (ctx->pc != 0x4268E4u) { return; }
    }
    ctx->pc = 0x4268E4u;
label_4268e4:
    // 0x4268e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4268e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4268e8:
    // 0x4268e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4268ec:
    if (ctx->pc == 0x4268ECu) {
        ctx->pc = 0x4268ECu;
            // 0x4268ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4268F0u;
        goto label_4268f0;
    }
    ctx->pc = 0x4268E8u;
    {
        const bool branch_taken_0x4268e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4268e8) {
            ctx->pc = 0x4268ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4268E8u;
            // 0x4268ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4268FCu;
            goto label_4268fc;
        }
    }
    ctx->pc = 0x4268F0u;
label_4268f0:
    // 0x4268f0: 0xc07507c  jal         func_1D41F0
label_4268f4:
    if (ctx->pc == 0x4268F4u) {
        ctx->pc = 0x4268F4u;
            // 0x4268f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4268F8u;
        goto label_4268f8;
    }
    ctx->pc = 0x4268F0u;
    SET_GPR_U32(ctx, 31, 0x4268F8u);
    ctx->pc = 0x4268F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4268F0u;
            // 0x4268f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4268F8u; }
        if (ctx->pc != 0x4268F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4268F8u; }
        if (ctx->pc != 0x4268F8u) { return; }
    }
    ctx->pc = 0x4268F8u;
label_4268f8:
    // 0x4268f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4268f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4268fc:
    // 0x4268fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_426900:
    if (ctx->pc == 0x426900u) {
        ctx->pc = 0x426900u;
            // 0x426900: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x426904u;
        goto label_426904;
    }
    ctx->pc = 0x4268FCu;
    {
        const bool branch_taken_0x4268fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4268fc) {
            ctx->pc = 0x426900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4268FCu;
            // 0x426900: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42692Cu;
            goto label_42692c;
        }
    }
    ctx->pc = 0x426904u;
label_426904:
    // 0x426904: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_426908:
    if (ctx->pc == 0x426908u) {
        ctx->pc = 0x42690Cu;
        goto label_42690c;
    }
    ctx->pc = 0x426904u;
    {
        const bool branch_taken_0x426904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x426904) {
            ctx->pc = 0x426928u;
            goto label_426928;
        }
    }
    ctx->pc = 0x42690Cu;
label_42690c:
    // 0x42690c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_426910:
    if (ctx->pc == 0x426910u) {
        ctx->pc = 0x426914u;
        goto label_426914;
    }
    ctx->pc = 0x42690Cu;
    {
        const bool branch_taken_0x42690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42690c) {
            ctx->pc = 0x426928u;
            goto label_426928;
        }
    }
    ctx->pc = 0x426914u;
label_426914:
    // 0x426914: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x426914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_426918:
    // 0x426918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42691c:
    if (ctx->pc == 0x42691Cu) {
        ctx->pc = 0x426920u;
        goto label_426920;
    }
    ctx->pc = 0x426918u;
    {
        const bool branch_taken_0x426918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x426918) {
            ctx->pc = 0x426928u;
            goto label_426928;
        }
    }
    ctx->pc = 0x426920u;
label_426920:
    // 0x426920: 0xc0400a8  jal         func_1002A0
label_426924:
    if (ctx->pc == 0x426924u) {
        ctx->pc = 0x426928u;
        goto label_426928;
    }
    ctx->pc = 0x426920u;
    SET_GPR_U32(ctx, 31, 0x426928u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426928u; }
        if (ctx->pc != 0x426928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426928u; }
        if (ctx->pc != 0x426928u) { return; }
    }
    ctx->pc = 0x426928u;
label_426928:
    // 0x426928: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x426928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_42692c:
    // 0x42692c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_426930:
    if (ctx->pc == 0x426930u) {
        ctx->pc = 0x426930u;
            // 0x426930: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x426934u;
        goto label_426934;
    }
    ctx->pc = 0x42692Cu;
    {
        const bool branch_taken_0x42692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42692c) {
            ctx->pc = 0x426930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42692Cu;
            // 0x426930: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42695Cu;
            goto label_42695c;
        }
    }
    ctx->pc = 0x426934u;
label_426934:
    // 0x426934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_426938:
    if (ctx->pc == 0x426938u) {
        ctx->pc = 0x42693Cu;
        goto label_42693c;
    }
    ctx->pc = 0x426934u;
    {
        const bool branch_taken_0x426934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x426934) {
            ctx->pc = 0x426958u;
            goto label_426958;
        }
    }
    ctx->pc = 0x42693Cu;
label_42693c:
    // 0x42693c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_426940:
    if (ctx->pc == 0x426940u) {
        ctx->pc = 0x426944u;
        goto label_426944;
    }
    ctx->pc = 0x42693Cu;
    {
        const bool branch_taken_0x42693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42693c) {
            ctx->pc = 0x426958u;
            goto label_426958;
        }
    }
    ctx->pc = 0x426944u;
label_426944:
    // 0x426944: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x426944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_426948:
    // 0x426948: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_42694c:
    if (ctx->pc == 0x42694Cu) {
        ctx->pc = 0x426950u;
        goto label_426950;
    }
    ctx->pc = 0x426948u;
    {
        const bool branch_taken_0x426948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x426948) {
            ctx->pc = 0x426958u;
            goto label_426958;
        }
    }
    ctx->pc = 0x426950u;
label_426950:
    // 0x426950: 0xc0400a8  jal         func_1002A0
label_426954:
    if (ctx->pc == 0x426954u) {
        ctx->pc = 0x426958u;
        goto label_426958;
    }
    ctx->pc = 0x426950u;
    SET_GPR_U32(ctx, 31, 0x426958u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426958u; }
        if (ctx->pc != 0x426958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426958u; }
        if (ctx->pc != 0x426958u) { return; }
    }
    ctx->pc = 0x426958u;
label_426958:
    // 0x426958: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x426958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_42695c:
    // 0x42695c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_426960:
    if (ctx->pc == 0x426960u) {
        ctx->pc = 0x426964u;
        goto label_426964;
    }
    ctx->pc = 0x42695Cu;
    {
        const bool branch_taken_0x42695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42695c) {
            ctx->pc = 0x426978u;
            goto label_426978;
        }
    }
    ctx->pc = 0x426964u;
label_426964:
    // 0x426964: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_426968:
    // 0x426968: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x426968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42696c:
    // 0x42696c: 0x2463bea8  addiu       $v1, $v1, -0x4158
    ctx->pc = 0x42696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950568));
label_426970:
    // 0x426970: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x426970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_426974:
    // 0x426974: 0xac407380  sw          $zero, 0x7380($v0)
    ctx->pc = 0x426974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29568), GPR_U32(ctx, 0));
label_426978:
    // 0x426978: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_42697c:
    if (ctx->pc == 0x42697Cu) {
        ctx->pc = 0x42697Cu;
            // 0x42697c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x426980u;
        goto label_426980;
    }
    ctx->pc = 0x426978u;
    {
        const bool branch_taken_0x426978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x426978) {
            ctx->pc = 0x42697Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426978u;
            // 0x42697c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4269D4u;
            goto label_4269d4;
        }
    }
    ctx->pc = 0x426980u;
label_426980:
    // 0x426980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x426980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_426984:
    // 0x426984: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x426984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_426988:
    // 0x426988: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x426988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42698c:
    // 0x42698c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x42698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_426990:
    // 0x426990: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_426994:
    if (ctx->pc == 0x426994u) {
        ctx->pc = 0x426994u;
            // 0x426994: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x426998u;
        goto label_426998;
    }
    ctx->pc = 0x426990u;
    {
        const bool branch_taken_0x426990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x426990) {
            ctx->pc = 0x426994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426990u;
            // 0x426994: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4269ACu;
            goto label_4269ac;
        }
    }
    ctx->pc = 0x426998u;
label_426998:
    // 0x426998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x426998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42699c:
    // 0x42699c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42699cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4269a0:
    // 0x4269a0: 0x320f809  jalr        $t9
label_4269a4:
    if (ctx->pc == 0x4269A4u) {
        ctx->pc = 0x4269A4u;
            // 0x4269a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4269A8u;
        goto label_4269a8;
    }
    ctx->pc = 0x4269A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4269A8u);
        ctx->pc = 0x4269A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4269A0u;
            // 0x4269a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4269A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4269A8u; }
            if (ctx->pc != 0x4269A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4269A8u;
label_4269a8:
    // 0x4269a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4269a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4269ac:
    // 0x4269ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4269b0:
    if (ctx->pc == 0x4269B0u) {
        ctx->pc = 0x4269B0u;
            // 0x4269b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4269B4u;
        goto label_4269b4;
    }
    ctx->pc = 0x4269ACu;
    {
        const bool branch_taken_0x4269ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4269ac) {
            ctx->pc = 0x4269B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4269ACu;
            // 0x4269b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4269C8u;
            goto label_4269c8;
        }
    }
    ctx->pc = 0x4269B4u;
label_4269b4:
    // 0x4269b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4269b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4269b8:
    // 0x4269b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4269b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4269bc:
    // 0x4269bc: 0x320f809  jalr        $t9
label_4269c0:
    if (ctx->pc == 0x4269C0u) {
        ctx->pc = 0x4269C0u;
            // 0x4269c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4269C4u;
        goto label_4269c4;
    }
    ctx->pc = 0x4269BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4269C4u);
        ctx->pc = 0x4269C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4269BCu;
            // 0x4269c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4269C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4269C4u; }
            if (ctx->pc != 0x4269C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4269C4u;
label_4269c4:
    // 0x4269c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4269c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4269c8:
    // 0x4269c8: 0xc075bf8  jal         func_1D6FE0
label_4269cc:
    if (ctx->pc == 0x4269CCu) {
        ctx->pc = 0x4269CCu;
            // 0x4269cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4269D0u;
        goto label_4269d0;
    }
    ctx->pc = 0x4269C8u;
    SET_GPR_U32(ctx, 31, 0x4269D0u);
    ctx->pc = 0x4269CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4269C8u;
            // 0x4269cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4269D0u; }
        if (ctx->pc != 0x4269D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4269D0u; }
        if (ctx->pc != 0x4269D0u) { return; }
    }
    ctx->pc = 0x4269D0u;
label_4269d0:
    // 0x4269d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4269d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4269d4:
    // 0x4269d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4269d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4269d8:
    // 0x4269d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4269dc:
    if (ctx->pc == 0x4269DCu) {
        ctx->pc = 0x4269DCu;
            // 0x4269dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4269E0u;
        goto label_4269e0;
    }
    ctx->pc = 0x4269D8u;
    {
        const bool branch_taken_0x4269d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4269d8) {
            ctx->pc = 0x4269DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4269D8u;
            // 0x4269dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4269ECu;
            goto label_4269ec;
        }
    }
    ctx->pc = 0x4269E0u;
label_4269e0:
    // 0x4269e0: 0xc0400a8  jal         func_1002A0
label_4269e4:
    if (ctx->pc == 0x4269E4u) {
        ctx->pc = 0x4269E4u;
            // 0x4269e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4269E8u;
        goto label_4269e8;
    }
    ctx->pc = 0x4269E0u;
    SET_GPR_U32(ctx, 31, 0x4269E8u);
    ctx->pc = 0x4269E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4269E0u;
            // 0x4269e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4269E8u; }
        if (ctx->pc != 0x4269E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4269E8u; }
        if (ctx->pc != 0x4269E8u) { return; }
    }
    ctx->pc = 0x4269E8u;
label_4269e8:
    // 0x4269e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4269e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4269ec:
    // 0x4269ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4269ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4269f0:
    // 0x4269f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4269f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4269f4:
    // 0x4269f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4269f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4269f8:
    // 0x4269f8: 0x3e00008  jr          $ra
label_4269fc:
    if (ctx->pc == 0x4269FCu) {
        ctx->pc = 0x4269FCu;
            // 0x4269fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x426A00u;
        goto label_426a00;
    }
    ctx->pc = 0x4269F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4269FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4269F8u;
            // 0x4269fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426A00u;
label_426a00:
    // 0x426a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x426a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_426a04:
    // 0x426a04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x426a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_426a08:
    // 0x426a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x426a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_426a0c:
    // 0x426a0c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x426a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_426a10:
    // 0x426a10: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x426a10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_426a14:
    // 0x426a14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x426a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_426a18:
    // 0x426a18: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_426a1c:
    if (ctx->pc == 0x426A1Cu) {
        ctx->pc = 0x426A1Cu;
            // 0x426a1c: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->pc = 0x426A20u;
        goto label_426a20;
    }
    ctx->pc = 0x426A18u;
    {
        const bool branch_taken_0x426a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x426a18) {
            ctx->pc = 0x426A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426A18u;
            // 0x426a1c: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426A5Cu;
            goto label_426a5c;
        }
    }
    ctx->pc = 0x426A20u;
label_426a20:
    // 0x426a20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x426a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_426a24:
    // 0x426a24: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_426a28:
    if (ctx->pc == 0x426A28u) {
        ctx->pc = 0x426A28u;
            // 0x426a28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x426A2Cu;
        goto label_426a2c;
    }
    ctx->pc = 0x426A24u;
    {
        const bool branch_taken_0x426a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x426a24) {
            ctx->pc = 0x426A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426A24u;
            // 0x426a28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426A68u;
            goto label_426a68;
        }
    }
    ctx->pc = 0x426A2Cu;
label_426a2c:
    // 0x426a2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x426a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_426a30:
    // 0x426a30: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_426a34:
    if (ctx->pc == 0x426A34u) {
        ctx->pc = 0x426A34u;
            // 0x426a34: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x426A38u;
        goto label_426a38;
    }
    ctx->pc = 0x426A30u;
    {
        const bool branch_taken_0x426a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x426a30) {
            ctx->pc = 0x426A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426A30u;
            // 0x426a34: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426A40u;
            goto label_426a40;
        }
    }
    ctx->pc = 0x426A38u;
label_426a38:
    // 0x426a38: 0x1000000a  b           . + 4 + (0xA << 2)
label_426a3c:
    if (ctx->pc == 0x426A3Cu) {
        ctx->pc = 0x426A40u;
        goto label_426a40;
    }
    ctx->pc = 0x426A38u;
    {
        const bool branch_taken_0x426a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x426a38) {
            ctx->pc = 0x426A64u;
            goto label_426a64;
        }
    }
    ctx->pc = 0x426A40u;
label_426a40:
    // 0x426a40: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x426a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_426a44:
    // 0x426a44: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x426a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_426a48:
    // 0x426a48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x426a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_426a4c:
    // 0x426a4c: 0x320f809  jalr        $t9
label_426a50:
    if (ctx->pc == 0x426A50u) {
        ctx->pc = 0x426A50u;
            // 0x426a50: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x426A54u;
        goto label_426a54;
    }
    ctx->pc = 0x426A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x426A54u);
        ctx->pc = 0x426A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426A4Cu;
            // 0x426a50: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x426A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x426A54u; }
            if (ctx->pc != 0x426A54u) { return; }
        }
        }
    }
    ctx->pc = 0x426A54u;
label_426a54:
    // 0x426a54: 0x10000003  b           . + 4 + (0x3 << 2)
label_426a58:
    if (ctx->pc == 0x426A58u) {
        ctx->pc = 0x426A5Cu;
        goto label_426a5c;
    }
    ctx->pc = 0x426A54u;
    {
        const bool branch_taken_0x426a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x426a54) {
            ctx->pc = 0x426A64u;
            goto label_426a64;
        }
    }
    ctx->pc = 0x426A5Cu;
label_426a5c:
    // 0x426a5c: 0xc109428  jal         func_4250A0
label_426a60:
    if (ctx->pc == 0x426A60u) {
        ctx->pc = 0x426A60u;
            // 0x426a60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x426A64u;
        goto label_426a64;
    }
    ctx->pc = 0x426A5Cu;
    SET_GPR_U32(ctx, 31, 0x426A64u);
    ctx->pc = 0x426A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426A5Cu;
            // 0x426a60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4250A0u;
    if (runtime->hasFunction(0x4250A0u)) {
        auto targetFn = runtime->lookupFunction(0x4250A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426A64u; }
        if (ctx->pc != 0x426A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004250A0_0x4250a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426A64u; }
        if (ctx->pc != 0x426A64u) { return; }
    }
    ctx->pc = 0x426A64u;
label_426a64:
    // 0x426a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x426a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_426a68:
    // 0x426a68: 0x3e00008  jr          $ra
label_426a6c:
    if (ctx->pc == 0x426A6Cu) {
        ctx->pc = 0x426A6Cu;
            // 0x426a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x426A70u;
        goto label_426a70;
    }
    ctx->pc = 0x426A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426A68u;
            // 0x426a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426A70u;
label_426a70:
    // 0x426a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x426a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_426a74:
    // 0x426a74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x426a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_426a78:
    // 0x426a78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x426a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_426a7c:
    // 0x426a7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_426a80:
    // 0x426a80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x426a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_426a84:
    // 0x426a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_426a88:
    // 0x426a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_426a8c:
    // 0x426a8c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x426a8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_426a90:
    // 0x426a90: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_426a94:
    if (ctx->pc == 0x426A94u) {
        ctx->pc = 0x426A94u;
            // 0x426a94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426A98u;
        goto label_426a98;
    }
    ctx->pc = 0x426A90u;
    {
        const bool branch_taken_0x426a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x426A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426A90u;
            // 0x426a94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426a90) {
            ctx->pc = 0x426AC4u;
            goto label_426ac4;
        }
    }
    ctx->pc = 0x426A98u;
label_426a98:
    // 0x426a98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x426a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_426a9c:
    // 0x426a9c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_426aa0:
    if (ctx->pc == 0x426AA0u) {
        ctx->pc = 0x426AA0u;
            // 0x426aa0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x426AA4u;
        goto label_426aa4;
    }
    ctx->pc = 0x426A9Cu;
    {
        const bool branch_taken_0x426a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x426a9c) {
            ctx->pc = 0x426AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426A9Cu;
            // 0x426aa0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426AB8u;
            goto label_426ab8;
        }
    }
    ctx->pc = 0x426AA4u;
label_426aa4:
    // 0x426aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x426aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_426aa8:
    // 0x426aa8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_426aac:
    if (ctx->pc == 0x426AACu) {
        ctx->pc = 0x426AB0u;
        goto label_426ab0;
    }
    ctx->pc = 0x426AA8u;
    {
        const bool branch_taken_0x426aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x426aa8) {
            ctx->pc = 0x426AF8u;
            goto label_426af8;
        }
    }
    ctx->pc = 0x426AB0u;
label_426ab0:
    // 0x426ab0: 0x10000011  b           . + 4 + (0x11 << 2)
label_426ab4:
    if (ctx->pc == 0x426AB4u) {
        ctx->pc = 0x426AB8u;
        goto label_426ab8;
    }
    ctx->pc = 0x426AB0u;
    {
        const bool branch_taken_0x426ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x426ab0) {
            ctx->pc = 0x426AF8u;
            goto label_426af8;
        }
    }
    ctx->pc = 0x426AB8u;
label_426ab8:
    // 0x426ab8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x426ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_426abc:
    // 0x426abc: 0x320f809  jalr        $t9
label_426ac0:
    if (ctx->pc == 0x426AC0u) {
        ctx->pc = 0x426AC4u;
        goto label_426ac4;
    }
    ctx->pc = 0x426ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x426AC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x426AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x426AC4u; }
            if (ctx->pc != 0x426AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x426AC4u;
label_426ac4:
    // 0x426ac4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x426ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_426ac8:
    // 0x426ac8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_426acc:
    if (ctx->pc == 0x426ACCu) {
        ctx->pc = 0x426AD0u;
        goto label_426ad0;
    }
    ctx->pc = 0x426AC8u;
    {
        const bool branch_taken_0x426ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x426ac8) {
            ctx->pc = 0x426AF8u;
            goto label_426af8;
        }
    }
    ctx->pc = 0x426AD0u;
label_426ad0:
    // 0x426ad0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x426ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426ad4:
    // 0x426ad4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x426ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426ad8:
    // 0x426ad8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x426ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_426adc:
    // 0x426adc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x426adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_426ae0:
    // 0x426ae0: 0xc10948c  jal         func_425230
label_426ae4:
    if (ctx->pc == 0x426AE4u) {
        ctx->pc = 0x426AE4u;
            // 0x426ae4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x426AE8u;
        goto label_426ae8;
    }
    ctx->pc = 0x426AE0u;
    SET_GPR_U32(ctx, 31, 0x426AE8u);
    ctx->pc = 0x426AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426AE0u;
            // 0x426ae4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x425230u;
    if (runtime->hasFunction(0x425230u)) {
        auto targetFn = runtime->lookupFunction(0x425230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426AE8u; }
        if (ctx->pc != 0x426AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00425230_0x425230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426AE8u; }
        if (ctx->pc != 0x426AE8u) { return; }
    }
    ctx->pc = 0x426AE8u;
label_426ae8:
    // 0x426ae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x426ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_426aec:
    // 0x426aec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x426aecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_426af0:
    // 0x426af0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_426af4:
    if (ctx->pc == 0x426AF4u) {
        ctx->pc = 0x426AF4u;
            // 0x426af4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x426AF8u;
        goto label_426af8;
    }
    ctx->pc = 0x426AF0u;
    {
        const bool branch_taken_0x426af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x426AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426AF0u;
            // 0x426af4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426af0) {
            ctx->pc = 0x426AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_426ad8;
        }
    }
    ctx->pc = 0x426AF8u;
label_426af8:
    // 0x426af8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x426af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_426afc:
    // 0x426afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x426afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426b00:
    // 0x426b00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x426b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426b04:
    // 0x426b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426b08:
    // 0x426b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_426b0c:
    // 0x426b0c: 0x3e00008  jr          $ra
label_426b10:
    if (ctx->pc == 0x426B10u) {
        ctx->pc = 0x426B10u;
            // 0x426b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x426B14u;
        goto label_426b14;
    }
    ctx->pc = 0x426B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426B0Cu;
            // 0x426b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426B14u;
label_426b14:
    // 0x426b14: 0x0  nop
    ctx->pc = 0x426b14u;
    // NOP
label_426b18:
    // 0x426b18: 0x0  nop
    ctx->pc = 0x426b18u;
    // NOP
label_426b1c:
    // 0x426b1c: 0x0  nop
    ctx->pc = 0x426b1cu;
    // NOP
label_426b20:
    // 0x426b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x426b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_426b24:
    // 0x426b24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x426b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_426b28:
    // 0x426b28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_426b2c:
    // 0x426b2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x426b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_426b30:
    // 0x426b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_426b34:
    // 0x426b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_426b38:
    // 0x426b38: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x426b38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_426b3c:
    // 0x426b3c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_426b40:
    if (ctx->pc == 0x426B40u) {
        ctx->pc = 0x426B40u;
            // 0x426b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426B44u;
        goto label_426b44;
    }
    ctx->pc = 0x426B3Cu;
    {
        const bool branch_taken_0x426b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x426B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426B3Cu;
            // 0x426b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426b3c) {
            ctx->pc = 0x426B70u;
            goto label_426b70;
        }
    }
    ctx->pc = 0x426B44u;
label_426b44:
    // 0x426b44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x426b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426b48:
    // 0x426b48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x426b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426b4c:
    // 0x426b4c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x426b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_426b50:
    // 0x426b50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x426b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_426b54:
    // 0x426b54: 0xc1094e4  jal         func_425390
label_426b58:
    if (ctx->pc == 0x426B58u) {
        ctx->pc = 0x426B58u;
            // 0x426b58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x426B5Cu;
        goto label_426b5c;
    }
    ctx->pc = 0x426B54u;
    SET_GPR_U32(ctx, 31, 0x426B5Cu);
    ctx->pc = 0x426B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426B54u;
            // 0x426b58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x425390u;
    if (runtime->hasFunction(0x425390u)) {
        auto targetFn = runtime->lookupFunction(0x425390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426B5Cu; }
        if (ctx->pc != 0x426B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00425390_0x425390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426B5Cu; }
        if (ctx->pc != 0x426B5Cu) { return; }
    }
    ctx->pc = 0x426B5Cu;
label_426b5c:
    // 0x426b5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x426b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_426b60:
    // 0x426b60: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x426b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_426b64:
    // 0x426b64: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_426b68:
    if (ctx->pc == 0x426B68u) {
        ctx->pc = 0x426B68u;
            // 0x426b68: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x426B6Cu;
        goto label_426b6c;
    }
    ctx->pc = 0x426B64u;
    {
        const bool branch_taken_0x426b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x426B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426B64u;
            // 0x426b68: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426b64) {
            ctx->pc = 0x426B4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_426b4c;
        }
    }
    ctx->pc = 0x426B6Cu;
label_426b6c:
    // 0x426b6c: 0x0  nop
    ctx->pc = 0x426b6cu;
    // NOP
label_426b70:
    // 0x426b70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x426b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_426b74:
    // 0x426b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x426b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426b78:
    // 0x426b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x426b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426b7c:
    // 0x426b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426b80:
    // 0x426b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_426b84:
    // 0x426b84: 0x3e00008  jr          $ra
label_426b88:
    if (ctx->pc == 0x426B88u) {
        ctx->pc = 0x426B88u;
            // 0x426b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x426B8Cu;
        goto label_426b8c;
    }
    ctx->pc = 0x426B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426B84u;
            // 0x426b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426B8Cu;
label_426b8c:
    // 0x426b8c: 0x0  nop
    ctx->pc = 0x426b8cu;
    // NOP
}
