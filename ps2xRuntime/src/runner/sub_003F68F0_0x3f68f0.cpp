#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F68F0
// Address: 0x3f68f0 - 0x3f6af0
void sub_003F68F0_0x3f68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F68F0_0x3f68f0");
#endif

    switch (ctx->pc) {
        case 0x3f68f0u: goto label_3f68f0;
        case 0x3f68f4u: goto label_3f68f4;
        case 0x3f68f8u: goto label_3f68f8;
        case 0x3f68fcu: goto label_3f68fc;
        case 0x3f6900u: goto label_3f6900;
        case 0x3f6904u: goto label_3f6904;
        case 0x3f6908u: goto label_3f6908;
        case 0x3f690cu: goto label_3f690c;
        case 0x3f6910u: goto label_3f6910;
        case 0x3f6914u: goto label_3f6914;
        case 0x3f6918u: goto label_3f6918;
        case 0x3f691cu: goto label_3f691c;
        case 0x3f6920u: goto label_3f6920;
        case 0x3f6924u: goto label_3f6924;
        case 0x3f6928u: goto label_3f6928;
        case 0x3f692cu: goto label_3f692c;
        case 0x3f6930u: goto label_3f6930;
        case 0x3f6934u: goto label_3f6934;
        case 0x3f6938u: goto label_3f6938;
        case 0x3f693cu: goto label_3f693c;
        case 0x3f6940u: goto label_3f6940;
        case 0x3f6944u: goto label_3f6944;
        case 0x3f6948u: goto label_3f6948;
        case 0x3f694cu: goto label_3f694c;
        case 0x3f6950u: goto label_3f6950;
        case 0x3f6954u: goto label_3f6954;
        case 0x3f6958u: goto label_3f6958;
        case 0x3f695cu: goto label_3f695c;
        case 0x3f6960u: goto label_3f6960;
        case 0x3f6964u: goto label_3f6964;
        case 0x3f6968u: goto label_3f6968;
        case 0x3f696cu: goto label_3f696c;
        case 0x3f6970u: goto label_3f6970;
        case 0x3f6974u: goto label_3f6974;
        case 0x3f6978u: goto label_3f6978;
        case 0x3f697cu: goto label_3f697c;
        case 0x3f6980u: goto label_3f6980;
        case 0x3f6984u: goto label_3f6984;
        case 0x3f6988u: goto label_3f6988;
        case 0x3f698cu: goto label_3f698c;
        case 0x3f6990u: goto label_3f6990;
        case 0x3f6994u: goto label_3f6994;
        case 0x3f6998u: goto label_3f6998;
        case 0x3f699cu: goto label_3f699c;
        case 0x3f69a0u: goto label_3f69a0;
        case 0x3f69a4u: goto label_3f69a4;
        case 0x3f69a8u: goto label_3f69a8;
        case 0x3f69acu: goto label_3f69ac;
        case 0x3f69b0u: goto label_3f69b0;
        case 0x3f69b4u: goto label_3f69b4;
        case 0x3f69b8u: goto label_3f69b8;
        case 0x3f69bcu: goto label_3f69bc;
        case 0x3f69c0u: goto label_3f69c0;
        case 0x3f69c4u: goto label_3f69c4;
        case 0x3f69c8u: goto label_3f69c8;
        case 0x3f69ccu: goto label_3f69cc;
        case 0x3f69d0u: goto label_3f69d0;
        case 0x3f69d4u: goto label_3f69d4;
        case 0x3f69d8u: goto label_3f69d8;
        case 0x3f69dcu: goto label_3f69dc;
        case 0x3f69e0u: goto label_3f69e0;
        case 0x3f69e4u: goto label_3f69e4;
        case 0x3f69e8u: goto label_3f69e8;
        case 0x3f69ecu: goto label_3f69ec;
        case 0x3f69f0u: goto label_3f69f0;
        case 0x3f69f4u: goto label_3f69f4;
        case 0x3f69f8u: goto label_3f69f8;
        case 0x3f69fcu: goto label_3f69fc;
        case 0x3f6a00u: goto label_3f6a00;
        case 0x3f6a04u: goto label_3f6a04;
        case 0x3f6a08u: goto label_3f6a08;
        case 0x3f6a0cu: goto label_3f6a0c;
        case 0x3f6a10u: goto label_3f6a10;
        case 0x3f6a14u: goto label_3f6a14;
        case 0x3f6a18u: goto label_3f6a18;
        case 0x3f6a1cu: goto label_3f6a1c;
        case 0x3f6a20u: goto label_3f6a20;
        case 0x3f6a24u: goto label_3f6a24;
        case 0x3f6a28u: goto label_3f6a28;
        case 0x3f6a2cu: goto label_3f6a2c;
        case 0x3f6a30u: goto label_3f6a30;
        case 0x3f6a34u: goto label_3f6a34;
        case 0x3f6a38u: goto label_3f6a38;
        case 0x3f6a3cu: goto label_3f6a3c;
        case 0x3f6a40u: goto label_3f6a40;
        case 0x3f6a44u: goto label_3f6a44;
        case 0x3f6a48u: goto label_3f6a48;
        case 0x3f6a4cu: goto label_3f6a4c;
        case 0x3f6a50u: goto label_3f6a50;
        case 0x3f6a54u: goto label_3f6a54;
        case 0x3f6a58u: goto label_3f6a58;
        case 0x3f6a5cu: goto label_3f6a5c;
        case 0x3f6a60u: goto label_3f6a60;
        case 0x3f6a64u: goto label_3f6a64;
        case 0x3f6a68u: goto label_3f6a68;
        case 0x3f6a6cu: goto label_3f6a6c;
        case 0x3f6a70u: goto label_3f6a70;
        case 0x3f6a74u: goto label_3f6a74;
        case 0x3f6a78u: goto label_3f6a78;
        case 0x3f6a7cu: goto label_3f6a7c;
        case 0x3f6a80u: goto label_3f6a80;
        case 0x3f6a84u: goto label_3f6a84;
        case 0x3f6a88u: goto label_3f6a88;
        case 0x3f6a8cu: goto label_3f6a8c;
        case 0x3f6a90u: goto label_3f6a90;
        case 0x3f6a94u: goto label_3f6a94;
        case 0x3f6a98u: goto label_3f6a98;
        case 0x3f6a9cu: goto label_3f6a9c;
        case 0x3f6aa0u: goto label_3f6aa0;
        case 0x3f6aa4u: goto label_3f6aa4;
        case 0x3f6aa8u: goto label_3f6aa8;
        case 0x3f6aacu: goto label_3f6aac;
        case 0x3f6ab0u: goto label_3f6ab0;
        case 0x3f6ab4u: goto label_3f6ab4;
        case 0x3f6ab8u: goto label_3f6ab8;
        case 0x3f6abcu: goto label_3f6abc;
        case 0x3f6ac0u: goto label_3f6ac0;
        case 0x3f6ac4u: goto label_3f6ac4;
        case 0x3f6ac8u: goto label_3f6ac8;
        case 0x3f6accu: goto label_3f6acc;
        case 0x3f6ad0u: goto label_3f6ad0;
        case 0x3f6ad4u: goto label_3f6ad4;
        case 0x3f6ad8u: goto label_3f6ad8;
        case 0x3f6adcu: goto label_3f6adc;
        case 0x3f6ae0u: goto label_3f6ae0;
        case 0x3f6ae4u: goto label_3f6ae4;
        case 0x3f6ae8u: goto label_3f6ae8;
        case 0x3f6aecu: goto label_3f6aec;
        default: break;
    }

    ctx->pc = 0x3f68f0u;

label_3f68f0:
    // 0x3f68f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f68f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f68f4:
    // 0x3f68f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f68f8:
    // 0x3f68f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f68fc:
    // 0x3f68fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f68fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f6900:
    // 0x3f6900: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f6900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f6904:
    // 0x3f6904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f6904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f6908:
    // 0x3f6908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f6908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f690c:
    // 0x3f690c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f690cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f6910:
    // 0x3f6910: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3f6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3f6914:
    // 0x3f6914: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3f6914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f6918:
    // 0x3f6918: 0x8c50012c  lw          $s0, 0x12C($v0)
    ctx->pc = 0x3f6918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3f691c:
    // 0x3f691c: 0xc077fb0  jal         func_1DFEC0
label_3f6920:
    if (ctx->pc == 0x3F6920u) {
        ctx->pc = 0x3F6920u;
            // 0x3f6920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F6924u;
        goto label_3f6924;
    }
    ctx->pc = 0x3F691Cu;
    SET_GPR_U32(ctx, 31, 0x3F6924u);
    ctx->pc = 0x3F6920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F691Cu;
            // 0x3f6920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6924u; }
        if (ctx->pc != 0x3F6924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6924u; }
        if (ctx->pc != 0x3F6924u) { return; }
    }
    ctx->pc = 0x3F6924u;
label_3f6924:
    // 0x3f6924: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f6924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6928:
    // 0x3f6928: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3f6928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3f692c:
    // 0x3f692c: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3f692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f6930:
    // 0x3f6930: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f6930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f6934:
    // 0x3f6934: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f6934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6938:
    // 0x3f6938: 0xac60068c  sw          $zero, 0x68C($v1)
    ctx->pc = 0x3f6938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1676), GPR_U32(ctx, 0));
label_3f693c:
    // 0x3f693c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3f693cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3f6940:
    // 0x3f6940: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6944:
    // 0x3f6944: 0xe4400690  swc1        $f0, 0x690($v0)
    ctx->pc = 0x3f6944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1680), bits); }
label_3f6948:
    // 0x3f6948: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3f6948u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f694c:
    // 0x3f694c: 0xc04cbd8  jal         func_132F60
label_3f6950:
    if (ctx->pc == 0x3F6950u) {
        ctx->pc = 0x3F6950u;
            // 0x3f6950: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3F6954u;
        goto label_3f6954;
    }
    ctx->pc = 0x3F694Cu;
    SET_GPR_U32(ctx, 31, 0x3F6954u);
    ctx->pc = 0x3F6950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F694Cu;
            // 0x3f6950: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6954u; }
        if (ctx->pc != 0x3F6954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6954u; }
        if (ctx->pc != 0x3F6954u) { return; }
    }
    ctx->pc = 0x3F6954u;
label_3f6954:
    // 0x3f6954: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x3f6954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_3f6958:
    // 0x3f6958: 0x264507e0  addiu       $a1, $s2, 0x7E0
    ctx->pc = 0x3f6958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
label_3f695c:
    // 0x3f695c: 0xc04cca0  jal         func_133280
label_3f6960:
    if (ctx->pc == 0x3F6960u) {
        ctx->pc = 0x3F6960u;
            // 0x3f6960: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F6964u;
        goto label_3f6964;
    }
    ctx->pc = 0x3F695Cu;
    SET_GPR_U32(ctx, 31, 0x3F6964u);
    ctx->pc = 0x3F6960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F695Cu;
            // 0x3f6960: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6964u; }
        if (ctx->pc != 0x3F6964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6964u; }
        if (ctx->pc != 0x3F6964u) { return; }
    }
    ctx->pc = 0x3F6964u;
label_3f6964:
    // 0x3f6964: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6968:
    // 0x3f6968: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f6968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f696c:
    // 0x3f696c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3f696cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f6970:
    // 0x3f6970: 0x94420c7e  lhu         $v0, 0xC7E($v0)
    ctx->pc = 0x3f6970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3198)));
label_3f6974:
    // 0x3f6974: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3f6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3f6978:
    // 0x3f6978: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3f6978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3f697c:
    // 0x3f697c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3f697cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3f6980:
    // 0x3f6980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f6984:
    // 0x3f6984: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3f6984u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3f6988:
    // 0x3f6988: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3f6988u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3f698c:
    // 0x3f698c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f698cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f6990:
    // 0x3f6990: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3f6990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3f6994:
    // 0x3f6994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3f6994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3f6998:
    // 0x3f6998: 0xc04cc90  jal         func_133240
label_3f699c:
    if (ctx->pc == 0x3F699Cu) {
        ctx->pc = 0x3F699Cu;
            // 0x3f699c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x3F69A0u;
        goto label_3f69a0;
    }
    ctx->pc = 0x3F6998u;
    SET_GPR_U32(ctx, 31, 0x3F69A0u);
    ctx->pc = 0x3F699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6998u;
            // 0x3f699c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69A0u; }
        if (ctx->pc != 0x3F69A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69A0u; }
        if (ctx->pc != 0x3F69A0u) { return; }
    }
    ctx->pc = 0x3F69A0u;
label_3f69a0:
    // 0x3f69a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f69a4:
    // 0x3f69a4: 0xc04cc44  jal         func_133110
label_3f69a8:
    if (ctx->pc == 0x3F69A8u) {
        ctx->pc = 0x3F69A8u;
            // 0x3f69a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F69ACu;
        goto label_3f69ac;
    }
    ctx->pc = 0x3F69A4u;
    SET_GPR_U32(ctx, 31, 0x3F69ACu);
    ctx->pc = 0x3F69A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F69A4u;
            // 0x3f69a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69ACu; }
        if (ctx->pc != 0x3F69ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69ACu; }
        if (ctx->pc != 0x3F69ACu) { return; }
    }
    ctx->pc = 0x3F69ACu;
label_3f69ac:
    // 0x3f69ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f69b0:
    // 0x3f69b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f69b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f69b4:
    // 0x3f69b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f69b8:
    // 0x3f69b8: 0x94470c7e  lhu         $a3, 0xC7E($v0)
    ctx->pc = 0x3f69b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3198)));
label_3f69bc:
    // 0x3f69bc: 0xc0c60b4  jal         func_3182D0
label_3f69c0:
    if (ctx->pc == 0x3F69C0u) {
        ctx->pc = 0x3F69C0u;
            // 0x3f69c0: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x3F69C4u;
        goto label_3f69c4;
    }
    ctx->pc = 0x3F69BCu;
    SET_GPR_U32(ctx, 31, 0x3F69C4u);
    ctx->pc = 0x3F69C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F69BCu;
            // 0x3f69c0: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3182D0u;
    if (runtime->hasFunction(0x3182D0u)) {
        auto targetFn = runtime->lookupFunction(0x3182D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69C4u; }
        if (ctx->pc != 0x3F69C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003182D0_0x3182d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69C4u; }
        if (ctx->pc != 0x3F69C4u) { return; }
    }
    ctx->pc = 0x3F69C4u;
label_3f69c4:
    // 0x3f69c4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f69c8:
    // 0x3f69c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f69c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f69cc:
    // 0x3f69cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3f69ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f69d0:
    // 0x3f69d0: 0xc04cc90  jal         func_133240
label_3f69d4:
    if (ctx->pc == 0x3F69D4u) {
        ctx->pc = 0x3F69D4u;
            // 0x3f69d4: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x3F69D8u;
        goto label_3f69d8;
    }
    ctx->pc = 0x3F69D0u;
    SET_GPR_U32(ctx, 31, 0x3F69D8u);
    ctx->pc = 0x3F69D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F69D0u;
            // 0x3f69d4: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69D8u; }
        if (ctx->pc != 0x3F69D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69D8u; }
        if (ctx->pc != 0x3F69D8u) { return; }
    }
    ctx->pc = 0x3F69D8u;
label_3f69d8:
    // 0x3f69d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f69dc:
    // 0x3f69dc: 0xc04cc44  jal         func_133110
label_3f69e0:
    if (ctx->pc == 0x3F69E0u) {
        ctx->pc = 0x3F69E0u;
            // 0x3f69e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F69E4u;
        goto label_3f69e4;
    }
    ctx->pc = 0x3F69DCu;
    SET_GPR_U32(ctx, 31, 0x3F69E4u);
    ctx->pc = 0x3F69E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F69DCu;
            // 0x3f69e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69E4u; }
        if (ctx->pc != 0x3F69E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69E4u; }
        if (ctx->pc != 0x3F69E4u) { return; }
    }
    ctx->pc = 0x3F69E4u;
label_3f69e4:
    // 0x3f69e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f69e8:
    // 0x3f69e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f69ec:
    // 0x3f69ec: 0xc04cbe0  jal         func_132F80
label_3f69f0:
    if (ctx->pc == 0x3F69F0u) {
        ctx->pc = 0x3F69F0u;
            // 0x3f69f0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F69F4u;
        goto label_3f69f4;
    }
    ctx->pc = 0x3F69ECu;
    SET_GPR_U32(ctx, 31, 0x3F69F4u);
    ctx->pc = 0x3F69F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F69ECu;
            // 0x3f69f0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69F4u; }
        if (ctx->pc != 0x3F69F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F69F4u; }
        if (ctx->pc != 0x3F69F4u) { return; }
    }
    ctx->pc = 0x3F69F4u;
label_3f69f4:
    // 0x3f69f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f69f8:
    // 0x3f69f8: 0xc04cc44  jal         func_133110
label_3f69fc:
    if (ctx->pc == 0x3F69FCu) {
        ctx->pc = 0x3F69FCu;
            // 0x3f69fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6A00u;
        goto label_3f6a00;
    }
    ctx->pc = 0x3F69F8u;
    SET_GPR_U32(ctx, 31, 0x3F6A00u);
    ctx->pc = 0x3F69FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F69F8u;
            // 0x3f69fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A00u; }
        if (ctx->pc != 0x3F6A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A00u; }
        if (ctx->pc != 0x3F6A00u) { return; }
    }
    ctx->pc = 0x3F6A00u;
label_3f6a00:
    // 0x3f6a00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6a04:
    // 0x3f6a04: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3f6a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f6a08:
    // 0x3f6a08: 0x24440560  addiu       $a0, $v0, 0x560
    ctx->pc = 0x3f6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_3f6a0c:
    // 0x3f6a0c: 0xc075378  jal         func_1D4DE0
label_3f6a10:
    if (ctx->pc == 0x3F6A10u) {
        ctx->pc = 0x3F6A10u;
            // 0x3f6a10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6A14u;
        goto label_3f6a14;
    }
    ctx->pc = 0x3F6A0Cu;
    SET_GPR_U32(ctx, 31, 0x3F6A14u);
    ctx->pc = 0x3F6A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6A0Cu;
            // 0x3f6a10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A14u; }
        if (ctx->pc != 0x3F6A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A14u; }
        if (ctx->pc != 0x3F6A14u) { return; }
    }
    ctx->pc = 0x3F6A14u;
label_3f6a14:
    // 0x3f6a14: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6a18:
    // 0x3f6a18: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3f6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3f6a1c:
    // 0x3f6a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f6a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6a20:
    // 0x3f6a20: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f6a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f6a24:
    // 0x3f6a24: 0xc4620880  lwc1        $f2, 0x880($v1)
    ctx->pc = 0x3f6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f6a28:
    // 0x3f6a28: 0x246207e0  addiu       $v0, $v1, 0x7E0
    ctx->pc = 0x3f6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
label_3f6a2c:
    // 0x3f6a2c: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x3f6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_3f6a30:
    // 0x3f6a30: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3f6a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3f6a34:
    // 0x3f6a34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3f6a34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3f6a38:
    // 0x3f6a38: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x3f6a38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3f6a3c:
    // 0x3f6a3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3f6a3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3f6a40:
    // 0x3f6a40: 0xc0c753c  jal         func_31D4F0
label_3f6a44:
    if (ctx->pc == 0x3F6A44u) {
        ctx->pc = 0x3F6A44u;
            // 0x3f6a44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3F6A48u;
        goto label_3f6a48;
    }
    ctx->pc = 0x3F6A40u;
    SET_GPR_U32(ctx, 31, 0x3F6A48u);
    ctx->pc = 0x3F6A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6A40u;
            // 0x3f6a44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A48u; }
        if (ctx->pc != 0x3F6A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A48u; }
        if (ctx->pc != 0x3F6A48u) { return; }
    }
    ctx->pc = 0x3F6A48u;
label_3f6a48:
    // 0x3f6a48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6a4c:
    // 0x3f6a4c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f6a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f6a50:
    // 0x3f6a50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3f6a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3f6a54:
    // 0x3f6a54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3f6a54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3f6a58:
    // 0x3f6a58: 0xc0c753c  jal         func_31D4F0
label_3f6a5c:
    if (ctx->pc == 0x3F6A5Cu) {
        ctx->pc = 0x3F6A5Cu;
            // 0x3f6a5c: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->pc = 0x3F6A60u;
        goto label_3f6a60;
    }
    ctx->pc = 0x3F6A58u;
    SET_GPR_U32(ctx, 31, 0x3F6A60u);
    ctx->pc = 0x3F6A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6A58u;
            // 0x3f6a5c: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A60u; }
        if (ctx->pc != 0x3F6A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A60u; }
        if (ctx->pc != 0x3F6A60u) { return; }
    }
    ctx->pc = 0x3F6A60u;
label_3f6a60:
    // 0x3f6a60: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x3f6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_3f6a64:
    // 0x3f6a64: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6a68:
    // 0x3f6a68: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3f6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3f6a6c:
    // 0x3f6a6c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x3f6a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_3f6a70:
    // 0x3f6a70: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f6a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6a74:
    // 0x3f6a74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f6a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6a78:
    // 0x3f6a78: 0xc0767f0  jal         func_1D9FC0
label_3f6a7c:
    if (ctx->pc == 0x3F6A7Cu) {
        ctx->pc = 0x3F6A7Cu;
            // 0x3f6a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6A80u;
        goto label_3f6a80;
    }
    ctx->pc = 0x3F6A78u;
    SET_GPR_U32(ctx, 31, 0x3F6A80u);
    ctx->pc = 0x3F6A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6A78u;
            // 0x3f6a7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A80u; }
        if (ctx->pc != 0x3F6A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6A80u; }
        if (ctx->pc != 0x3F6A80u) { return; }
    }
    ctx->pc = 0x3F6A80u;
label_3f6a80:
    // 0x3f6a80: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6a84:
    // 0x3f6a84: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3f6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3f6a88:
    // 0x3f6a88: 0x8c630db0  lw          $v1, 0xDB0($v1)
    ctx->pc = 0x3f6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_3f6a8c:
    // 0x3f6a8c: 0x50650010  beql        $v1, $a1, . + 4 + (0x10 << 2)
label_3f6a90:
    if (ctx->pc == 0x3F6A90u) {
        ctx->pc = 0x3F6A90u;
            // 0x3f6a90: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F6A94u;
        goto label_3f6a94;
    }
    ctx->pc = 0x3F6A8Cu;
    {
        const bool branch_taken_0x3f6a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f6a8c) {
            ctx->pc = 0x3F6A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6A8Cu;
            // 0x3f6a90: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6AD0u;
            goto label_3f6ad0;
        }
    }
    ctx->pc = 0x3F6A94u;
label_3f6a94:
    // 0x3f6a94: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x3f6a94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_3f6a98:
    // 0x3f6a98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f6a9c:
    // 0x3f6a9c: 0xa2230028  sb          $v1, 0x28($s1)
    ctx->pc = 0x3f6a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 3));
label_3f6aa0:
    // 0x3f6aa0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3f6aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_3f6aa4:
    // 0x3f6aa4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3f6aa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3f6aa8:
    // 0x3f6aa8: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x3f6aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_3f6aac:
    // 0x3f6aac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3f6ab0:
    if (ctx->pc == 0x3F6AB0u) {
        ctx->pc = 0x3F6AB4u;
        goto label_3f6ab4;
    }
    ctx->pc = 0x3F6AACu;
    {
        const bool branch_taken_0x3f6aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6aac) {
            ctx->pc = 0x3F6ACCu;
            goto label_3f6acc;
        }
    }
    ctx->pc = 0x3F6AB4u;
label_3f6ab4:
    // 0x3f6ab4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6ab8:
    // 0x3f6ab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f6ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f6abc:
    // 0x3f6abc: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f6abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f6ac0:
    // 0x3f6ac0: 0x320f809  jalr        $t9
label_3f6ac4:
    if (ctx->pc == 0x3F6AC4u) {
        ctx->pc = 0x3F6AC8u;
        goto label_3f6ac8;
    }
    ctx->pc = 0x3F6AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F6AC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F6AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F6AC8u; }
            if (ctx->pc != 0x3F6AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F6AC8u;
label_3f6ac8:
    // 0x3f6ac8: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x3f6ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
label_3f6acc:
    // 0x3f6acc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f6accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f6ad0:
    // 0x3f6ad0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f6ad4:
    // 0x3f6ad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f6ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6ad8:
    // 0x3f6ad8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f6ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6adc:
    // 0x3f6adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f6adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6ae0:
    // 0x3f6ae0: 0x3e00008  jr          $ra
label_3f6ae4:
    if (ctx->pc == 0x3F6AE4u) {
        ctx->pc = 0x3F6AE4u;
            // 0x3f6ae4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3F6AE8u;
        goto label_3f6ae8;
    }
    ctx->pc = 0x3F6AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6AE0u;
            // 0x3f6ae4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F6AE8u;
label_3f6ae8:
    // 0x3f6ae8: 0x0  nop
    ctx->pc = 0x3f6ae8u;
    // NOP
label_3f6aec:
    // 0x3f6aec: 0x0  nop
    ctx->pc = 0x3f6aecu;
    // NOP
}
