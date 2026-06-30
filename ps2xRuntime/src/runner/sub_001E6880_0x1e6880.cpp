#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6880
// Address: 0x1e6880 - 0x1e6ab0
void sub_001E6880_0x1e6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6880_0x1e6880");
#endif

    switch (ctx->pc) {
        case 0x1e6880u: goto label_1e6880;
        case 0x1e6884u: goto label_1e6884;
        case 0x1e6888u: goto label_1e6888;
        case 0x1e688cu: goto label_1e688c;
        case 0x1e6890u: goto label_1e6890;
        case 0x1e6894u: goto label_1e6894;
        case 0x1e6898u: goto label_1e6898;
        case 0x1e689cu: goto label_1e689c;
        case 0x1e68a0u: goto label_1e68a0;
        case 0x1e68a4u: goto label_1e68a4;
        case 0x1e68a8u: goto label_1e68a8;
        case 0x1e68acu: goto label_1e68ac;
        case 0x1e68b0u: goto label_1e68b0;
        case 0x1e68b4u: goto label_1e68b4;
        case 0x1e68b8u: goto label_1e68b8;
        case 0x1e68bcu: goto label_1e68bc;
        case 0x1e68c0u: goto label_1e68c0;
        case 0x1e68c4u: goto label_1e68c4;
        case 0x1e68c8u: goto label_1e68c8;
        case 0x1e68ccu: goto label_1e68cc;
        case 0x1e68d0u: goto label_1e68d0;
        case 0x1e68d4u: goto label_1e68d4;
        case 0x1e68d8u: goto label_1e68d8;
        case 0x1e68dcu: goto label_1e68dc;
        case 0x1e68e0u: goto label_1e68e0;
        case 0x1e68e4u: goto label_1e68e4;
        case 0x1e68e8u: goto label_1e68e8;
        case 0x1e68ecu: goto label_1e68ec;
        case 0x1e68f0u: goto label_1e68f0;
        case 0x1e68f4u: goto label_1e68f4;
        case 0x1e68f8u: goto label_1e68f8;
        case 0x1e68fcu: goto label_1e68fc;
        case 0x1e6900u: goto label_1e6900;
        case 0x1e6904u: goto label_1e6904;
        case 0x1e6908u: goto label_1e6908;
        case 0x1e690cu: goto label_1e690c;
        case 0x1e6910u: goto label_1e6910;
        case 0x1e6914u: goto label_1e6914;
        case 0x1e6918u: goto label_1e6918;
        case 0x1e691cu: goto label_1e691c;
        case 0x1e6920u: goto label_1e6920;
        case 0x1e6924u: goto label_1e6924;
        case 0x1e6928u: goto label_1e6928;
        case 0x1e692cu: goto label_1e692c;
        case 0x1e6930u: goto label_1e6930;
        case 0x1e6934u: goto label_1e6934;
        case 0x1e6938u: goto label_1e6938;
        case 0x1e693cu: goto label_1e693c;
        case 0x1e6940u: goto label_1e6940;
        case 0x1e6944u: goto label_1e6944;
        case 0x1e6948u: goto label_1e6948;
        case 0x1e694cu: goto label_1e694c;
        case 0x1e6950u: goto label_1e6950;
        case 0x1e6954u: goto label_1e6954;
        case 0x1e6958u: goto label_1e6958;
        case 0x1e695cu: goto label_1e695c;
        case 0x1e6960u: goto label_1e6960;
        case 0x1e6964u: goto label_1e6964;
        case 0x1e6968u: goto label_1e6968;
        case 0x1e696cu: goto label_1e696c;
        case 0x1e6970u: goto label_1e6970;
        case 0x1e6974u: goto label_1e6974;
        case 0x1e6978u: goto label_1e6978;
        case 0x1e697cu: goto label_1e697c;
        case 0x1e6980u: goto label_1e6980;
        case 0x1e6984u: goto label_1e6984;
        case 0x1e6988u: goto label_1e6988;
        case 0x1e698cu: goto label_1e698c;
        case 0x1e6990u: goto label_1e6990;
        case 0x1e6994u: goto label_1e6994;
        case 0x1e6998u: goto label_1e6998;
        case 0x1e699cu: goto label_1e699c;
        case 0x1e69a0u: goto label_1e69a0;
        case 0x1e69a4u: goto label_1e69a4;
        case 0x1e69a8u: goto label_1e69a8;
        case 0x1e69acu: goto label_1e69ac;
        case 0x1e69b0u: goto label_1e69b0;
        case 0x1e69b4u: goto label_1e69b4;
        case 0x1e69b8u: goto label_1e69b8;
        case 0x1e69bcu: goto label_1e69bc;
        case 0x1e69c0u: goto label_1e69c0;
        case 0x1e69c4u: goto label_1e69c4;
        case 0x1e69c8u: goto label_1e69c8;
        case 0x1e69ccu: goto label_1e69cc;
        case 0x1e69d0u: goto label_1e69d0;
        case 0x1e69d4u: goto label_1e69d4;
        case 0x1e69d8u: goto label_1e69d8;
        case 0x1e69dcu: goto label_1e69dc;
        case 0x1e69e0u: goto label_1e69e0;
        case 0x1e69e4u: goto label_1e69e4;
        case 0x1e69e8u: goto label_1e69e8;
        case 0x1e69ecu: goto label_1e69ec;
        case 0x1e69f0u: goto label_1e69f0;
        case 0x1e69f4u: goto label_1e69f4;
        case 0x1e69f8u: goto label_1e69f8;
        case 0x1e69fcu: goto label_1e69fc;
        case 0x1e6a00u: goto label_1e6a00;
        case 0x1e6a04u: goto label_1e6a04;
        case 0x1e6a08u: goto label_1e6a08;
        case 0x1e6a0cu: goto label_1e6a0c;
        case 0x1e6a10u: goto label_1e6a10;
        case 0x1e6a14u: goto label_1e6a14;
        case 0x1e6a18u: goto label_1e6a18;
        case 0x1e6a1cu: goto label_1e6a1c;
        case 0x1e6a20u: goto label_1e6a20;
        case 0x1e6a24u: goto label_1e6a24;
        case 0x1e6a28u: goto label_1e6a28;
        case 0x1e6a2cu: goto label_1e6a2c;
        case 0x1e6a30u: goto label_1e6a30;
        case 0x1e6a34u: goto label_1e6a34;
        case 0x1e6a38u: goto label_1e6a38;
        case 0x1e6a3cu: goto label_1e6a3c;
        case 0x1e6a40u: goto label_1e6a40;
        case 0x1e6a44u: goto label_1e6a44;
        case 0x1e6a48u: goto label_1e6a48;
        case 0x1e6a4cu: goto label_1e6a4c;
        case 0x1e6a50u: goto label_1e6a50;
        case 0x1e6a54u: goto label_1e6a54;
        case 0x1e6a58u: goto label_1e6a58;
        case 0x1e6a5cu: goto label_1e6a5c;
        case 0x1e6a60u: goto label_1e6a60;
        case 0x1e6a64u: goto label_1e6a64;
        case 0x1e6a68u: goto label_1e6a68;
        case 0x1e6a6cu: goto label_1e6a6c;
        case 0x1e6a70u: goto label_1e6a70;
        case 0x1e6a74u: goto label_1e6a74;
        case 0x1e6a78u: goto label_1e6a78;
        case 0x1e6a7cu: goto label_1e6a7c;
        case 0x1e6a80u: goto label_1e6a80;
        case 0x1e6a84u: goto label_1e6a84;
        case 0x1e6a88u: goto label_1e6a88;
        case 0x1e6a8cu: goto label_1e6a8c;
        case 0x1e6a90u: goto label_1e6a90;
        case 0x1e6a94u: goto label_1e6a94;
        case 0x1e6a98u: goto label_1e6a98;
        case 0x1e6a9cu: goto label_1e6a9c;
        case 0x1e6aa0u: goto label_1e6aa0;
        case 0x1e6aa4u: goto label_1e6aa4;
        case 0x1e6aa8u: goto label_1e6aa8;
        case 0x1e6aacu: goto label_1e6aac;
        default: break;
    }

    ctx->pc = 0x1e6880u;

label_1e6880:
    // 0x1e6880: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1e6880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_1e6884:
    // 0x1e6884: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e6884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e6888:
    // 0x1e6888: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e688c:
    // 0x1e688c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e6890:
    // 0x1e6890: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e6894:
    // 0x1e6894: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1e6894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e6898:
    // 0x1e6898: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e6898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e689c:
    // 0x1e689c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e68a0:
    // 0x1e68a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e68a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e68a4:
    // 0x1e68a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e68a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e68a8:
    // 0x1e68a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e68a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e68ac:
    // 0x1e68ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e68acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e68b0:
    // 0x1e68b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e68b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e68b4:
    // 0x1e68b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e68b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e68b8:
    // 0x1e68b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e68b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e68bc:
    // 0x1e68bc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e68c0:
    // 0x1e68c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e68c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e68c4:
    // 0x1e68c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e68c8:
    // 0x1e68c8: 0x320f809  jalr        $t9
label_1e68cc:
    if (ctx->pc == 0x1E68CCu) {
        ctx->pc = 0x1E68CCu;
            // 0x1e68cc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E68D0u;
        goto label_1e68d0;
    }
    ctx->pc = 0x1E68C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E68D0u);
        ctx->pc = 0x1E68CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68C8u;
            // 0x1e68cc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E68D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D0u; }
            if (ctx->pc != 0x1E68D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E68D0u;
label_1e68d0:
    // 0x1e68d0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1e68d4:
    // 0x1e68d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e68d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e68d8:
    // 0x1e68d8: 0x18600067  blez        $v1, . + 4 + (0x67 << 2)
label_1e68dc:
    if (ctx->pc == 0x1E68DCu) {
        ctx->pc = 0x1E68DCu;
            // 0x1e68dc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E68E0u;
        goto label_1e68e0;
    }
    ctx->pc = 0x1E68D8u;
    {
        const bool branch_taken_0x1e68d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E68DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68D8u;
            // 0x1e68dc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e68d8) {
            ctx->pc = 0x1E6A78u;
            goto label_1e6a78;
        }
    }
    ctx->pc = 0x1E68E0u;
label_1e68e0:
    // 0x1e68e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e68e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e68e4:
    // 0x1e68e4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e68e8:
    // 0x1e68e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e68e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e68ec:
    // 0x1e68ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e68f0:
    // 0x1e68f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e68f4:
    // 0x1e68f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e68f8:
    // 0x1e68f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e68f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e68fc:
    // 0x1e68fc: 0x320f809  jalr        $t9
label_1e6900:
    if (ctx->pc == 0x1E6900u) {
        ctx->pc = 0x1E6900u;
            // 0x1e6900: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E6904u;
        goto label_1e6904;
    }
    ctx->pc = 0x1E68FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6904u);
        ctx->pc = 0x1E6900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68FCu;
            // 0x1e6900: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6904u; }
            if (ctx->pc != 0x1E6904u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6904u;
label_1e6904:
    // 0x1e6904: 0xafb300ac  sw          $s3, 0xAC($sp)
    ctx->pc = 0x1e6904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 19));
label_1e6908:
    // 0x1e6908: 0x27a402bc  addiu       $a0, $sp, 0x2BC
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_1e690c:
    // 0x1e690c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e6910:
    // 0x1e6910: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e6910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e6914:
    // 0x1e6914: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e6914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e6918:
    // 0x1e6918: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1e6918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e691c:
    // 0x1e691c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1e691cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_1e6920:
    // 0x1e6920: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e6924:
    // 0x1e6924: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e6928:
    // 0x1e6928: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1e6928u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e692c:
    // 0x1e692c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1e692cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1e6930:
    // 0x1e6930: 0xafaa00a4  sw          $t2, 0xA4($sp)
    ctx->pc = 0x1e6930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 10));
label_1e6934:
    // 0x1e6934: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e6934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e6938:
    // 0x1e6938: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e6938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e693c:
    // 0x1e693c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e6940:
    // 0x1e6940: 0x320f809  jalr        $t9
label_1e6944:
    if (ctx->pc == 0x1E6944u) {
        ctx->pc = 0x1E6944u;
            // 0x1e6944: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6948u;
        goto label_1e6948;
    }
    ctx->pc = 0x1E6940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6948u);
        ctx->pc = 0x1E6944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6940u;
            // 0x1e6944: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6948u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6948u; }
            if (ctx->pc != 0x1E6948u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6948u;
label_1e6948:
    // 0x1e6948: 0x27a202bc  addiu       $v0, $sp, 0x2BC
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_1e694c:
    // 0x1e694c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6950:
    // 0x1e6950: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1e6954:
    if (ctx->pc == 0x1E6954u) {
        ctx->pc = 0x1E6958u;
        goto label_1e6958;
    }
    ctx->pc = 0x1E6950u;
    {
        const bool branch_taken_0x1e6950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6950) {
            ctx->pc = 0x1E6A18u;
            goto label_1e6a18;
        }
    }
    ctx->pc = 0x1E6958u;
label_1e6958:
    // 0x1e6958: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e6958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e695c:
    // 0x1e695c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e6960:
    // 0x1e6960: 0xc07d284  jal         func_1F4A10
label_1e6964:
    if (ctx->pc == 0x1E6964u) {
        ctx->pc = 0x1E6964u;
            // 0x1e6964: 0x8c5e0008  lw          $fp, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x1E6968u;
        goto label_1e6968;
    }
    ctx->pc = 0x1E6960u;
    SET_GPR_U32(ctx, 31, 0x1E6968u);
    ctx->pc = 0x1E6964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6960u;
            // 0x1e6964: 0x8c5e0008  lw          $fp, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6968u; }
        if (ctx->pc != 0x1E6968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6968u; }
        if (ctx->pc != 0x1E6968u) { return; }
    }
    ctx->pc = 0x1E6968u;
label_1e6968:
    // 0x1e6968: 0x17c2001f  bne         $fp, $v0, . + 4 + (0x1F << 2)
label_1e696c:
    if (ctx->pc == 0x1E696Cu) {
        ctx->pc = 0x1E6970u;
        goto label_1e6970;
    }
    ctx->pc = 0x1E6968u;
    {
        const bool branch_taken_0x1e6968 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6968) {
            ctx->pc = 0x1E69E8u;
            goto label_1e69e8;
        }
    }
    ctx->pc = 0x1E6970u;
label_1e6970:
    // 0x1e6970: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x1e6970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e6974:
    // 0x1e6974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e6974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e6978:
    // 0x1e6978: 0x82430010  lb          $v1, 0x10($s2)
    ctx->pc = 0x1e6978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1e697c:
    // 0x1e697c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e6980:
    // 0x1e6980: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1e6984:
    // 0x1e6984: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1e6984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1e6988:
    // 0x1e6988: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x1e6988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e698c:
    // 0x1e698c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e698cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e6990:
    // 0x1e6990: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e6994:
    // 0x1e6994: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1e6994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e6998:
    // 0x1e6998: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e699c:
    if (ctx->pc == 0x1E699Cu) {
        ctx->pc = 0x1E699Cu;
            // 0x1e699c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E69A0u;
        goto label_1e69a0;
    }
    ctx->pc = 0x1E6998u;
    {
        const bool branch_taken_0x1e6998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E699Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6998u;
            // 0x1e699c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6998) {
            ctx->pc = 0x1E69A8u;
            goto label_1e69a8;
        }
    }
    ctx->pc = 0x1E69A0u;
label_1e69a0:
    // 0x1e69a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e69a4:
    if (ctx->pc == 0x1E69A4u) {
        ctx->pc = 0x1E69A4u;
            // 0x1e69a4: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1E69A8u;
        goto label_1e69a8;
    }
    ctx->pc = 0x1E69A0u;
    {
        const bool branch_taken_0x1e69a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E69A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69A0u;
            // 0x1e69a4: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69a0) {
            ctx->pc = 0x1E69ACu;
            goto label_1e69ac;
        }
    }
    ctx->pc = 0x1E69A8u;
label_1e69a8:
    // 0x1e69a8: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1e69a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1e69ac:
    // 0x1e69ac: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1e69acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1e69b0:
    // 0x1e69b0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1e69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1e69b4:
    // 0x1e69b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e69b8:
    // 0x1e69b8: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1e69b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e69bc:
    // 0x1e69bc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e69c0:
    // 0x1e69c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e69c4:
    // 0x1e69c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e69c8:
    // 0x1e69c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e69cc:
    // 0x1e69cc: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e69d0:
    // 0x1e69d0: 0x40f809  jalr        $v0
label_1e69d4:
    if (ctx->pc == 0x1E69D4u) {
        ctx->pc = 0x1E69D8u;
        goto label_1e69d8;
    }
    ctx->pc = 0x1E69D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E69D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E69D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E69D8u; }
            if (ctx->pc != 0x1E69D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E69D8u;
label_1e69d8:
    // 0x1e69d8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1e69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e69dc:
    // 0x1e69dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e69e0:
    // 0x1e69e0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e69e4:
    if (ctx->pc == 0x1E69E4u) {
        ctx->pc = 0x1E69E4u;
            // 0x1e69e4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1E69E8u;
        goto label_1e69e8;
    }
    ctx->pc = 0x1E69E0u;
    {
        const bool branch_taken_0x1e69e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E69E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69E0u;
            // 0x1e69e4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69e0) {
            ctx->pc = 0x1E6A60u;
            goto label_1e6a60;
        }
    }
    ctx->pc = 0x1E69E8u;
label_1e69e8:
    // 0x1e69e8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e69ec:
    // 0x1e69ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e69ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e69f0:
    // 0x1e69f0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e69f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e69f4:
    // 0x1e69f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e69f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e69f8:
    // 0x1e69f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e69fc:
    // 0x1e69fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e6a00:
    // 0x1e6a00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6a04:
    // 0x1e6a04: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e6a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e6a08:
    // 0x1e6a08: 0x320f809  jalr        $t9
label_1e6a0c:
    if (ctx->pc == 0x1E6A0Cu) {
        ctx->pc = 0x1E6A0Cu;
            // 0x1e6a0c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A10u;
        goto label_1e6a10;
    }
    ctx->pc = 0x1E6A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6A10u);
        ctx->pc = 0x1E6A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A08u;
            // 0x1e6a0c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6A10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A10u; }
            if (ctx->pc != 0x1E6A10u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6A10u;
label_1e6a10:
    // 0x1e6a10: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e6a14:
    if (ctx->pc == 0x1E6A14u) {
        ctx->pc = 0x1E6A18u;
        goto label_1e6a18;
    }
    ctx->pc = 0x1E6A10u;
    {
        const bool branch_taken_0x1e6a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a10) {
            ctx->pc = 0x1E6A60u;
            goto label_1e6a60;
        }
    }
    ctx->pc = 0x1E6A18u;
label_1e6a18:
    // 0x1e6a18: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e6a1c:
    // 0x1e6a1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e6a20:
    // 0x1e6a20: 0xc07d284  jal         func_1F4A10
label_1e6a24:
    if (ctx->pc == 0x1E6A24u) {
        ctx->pc = 0x1E6A24u;
            // 0x1e6a24: 0x8c5e0008  lw          $fp, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x1E6A28u;
        goto label_1e6a28;
    }
    ctx->pc = 0x1E6A20u;
    SET_GPR_U32(ctx, 31, 0x1E6A28u);
    ctx->pc = 0x1E6A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A20u;
            // 0x1e6a24: 0x8c5e0008  lw          $fp, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A28u; }
        if (ctx->pc != 0x1E6A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A28u; }
        if (ctx->pc != 0x1E6A28u) { return; }
    }
    ctx->pc = 0x1E6A28u;
label_1e6a28:
    // 0x1e6a28: 0x13c2000d  beq         $fp, $v0, . + 4 + (0xD << 2)
label_1e6a2c:
    if (ctx->pc == 0x1E6A2Cu) {
        ctx->pc = 0x1E6A30u;
        goto label_1e6a30;
    }
    ctx->pc = 0x1E6A28u;
    {
        const bool branch_taken_0x1e6a28 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6a28) {
            ctx->pc = 0x1E6A60u;
            goto label_1e6a60;
        }
    }
    ctx->pc = 0x1E6A30u;
label_1e6a30:
    // 0x1e6a30: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e6a34:
    // 0x1e6a34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e6a38:
    // 0x1e6a38: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e6a3c:
    // 0x1e6a3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6a40:
    // 0x1e6a40: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e6a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e6a44:
    // 0x1e6a44: 0x320f809  jalr        $t9
label_1e6a48:
    if (ctx->pc == 0x1E6A48u) {
        ctx->pc = 0x1E6A48u;
            // 0x1e6a48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A4Cu;
        goto label_1e6a4c;
    }
    ctx->pc = 0x1E6A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6A4Cu);
        ctx->pc = 0x1E6A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A44u;
            // 0x1e6a48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6A4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A4Cu; }
            if (ctx->pc != 0x1E6A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E6A4Cu;
label_1e6a4c:
    // 0x1e6a4c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1e6a50:
    // 0x1e6a50: 0xc07d284  jal         func_1F4A10
label_1e6a54:
    if (ctx->pc == 0x1E6A54u) {
        ctx->pc = 0x1E6A54u;
            // 0x1e6a54: 0x50f021  addu        $fp, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1E6A58u;
        goto label_1e6a58;
    }
    ctx->pc = 0x1E6A50u;
    SET_GPR_U32(ctx, 31, 0x1E6A58u);
    ctx->pc = 0x1E6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A50u;
            // 0x1e6a54: 0x50f021  addu        $fp, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A58u; }
        if (ctx->pc != 0x1E6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A58u; }
        if (ctx->pc != 0x1E6A58u) { return; }
    }
    ctx->pc = 0x1E6A58u;
label_1e6a58:
    // 0x1e6a58: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x1e6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_1e6a5c:
    // 0x1e6a5c: 0x0  nop
    ctx->pc = 0x1e6a5cu;
    // NOP
label_1e6a60:
    // 0x1e6a60: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1e6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1e6a64:
    // 0x1e6a64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e6a64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1e6a68:
    // 0x1e6a68: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x1e6a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e6a6c:
    // 0x1e6a6c: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_1e6a70:
    if (ctx->pc == 0x1E6A70u) {
        ctx->pc = 0x1E6A70u;
            // 0x1e6a70: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1E6A74u;
        goto label_1e6a74;
    }
    ctx->pc = 0x1E6A6Cu;
    {
        const bool branch_taken_0x1e6a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A6Cu;
            // 0x1e6a70: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a6c) {
            ctx->pc = 0x1E68E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e68e4;
        }
    }
    ctx->pc = 0x1E6A74u;
label_1e6a74:
    // 0x1e6a74: 0x0  nop
    ctx->pc = 0x1e6a74u;
    // NOP
label_1e6a78:
    // 0x1e6a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e6a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e6a7c:
    // 0x1e6a7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e6a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e6a80:
    // 0x1e6a80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e6a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e6a84:
    // 0x1e6a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e6a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e6a88:
    // 0x1e6a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e6a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6a8c:
    // 0x1e6a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e6a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6a90:
    // 0x1e6a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6a94:
    // 0x1e6a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6a98:
    // 0x1e6a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6a9c:
    // 0x1e6a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6aa0:
    // 0x1e6aa0: 0x3e00008  jr          $ra
label_1e6aa4:
    if (ctx->pc == 0x1E6AA4u) {
        ctx->pc = 0x1E6AA4u;
            // 0x1e6aa4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x1E6AA8u;
        goto label_1e6aa8;
    }
    ctx->pc = 0x1E6AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AA0u;
            // 0x1e6aa4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6AA8u;
label_1e6aa8:
    // 0x1e6aa8: 0x0  nop
    ctx->pc = 0x1e6aa8u;
    // NOP
label_1e6aac:
    // 0x1e6aac: 0x0  nop
    ctx->pc = 0x1e6aacu;
    // NOP
}
