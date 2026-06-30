#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00367970
// Address: 0x367970 - 0x367cc0
void sub_00367970_0x367970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367970_0x367970");
#endif

    switch (ctx->pc) {
        case 0x367970u: goto label_367970;
        case 0x367974u: goto label_367974;
        case 0x367978u: goto label_367978;
        case 0x36797cu: goto label_36797c;
        case 0x367980u: goto label_367980;
        case 0x367984u: goto label_367984;
        case 0x367988u: goto label_367988;
        case 0x36798cu: goto label_36798c;
        case 0x367990u: goto label_367990;
        case 0x367994u: goto label_367994;
        case 0x367998u: goto label_367998;
        case 0x36799cu: goto label_36799c;
        case 0x3679a0u: goto label_3679a0;
        case 0x3679a4u: goto label_3679a4;
        case 0x3679a8u: goto label_3679a8;
        case 0x3679acu: goto label_3679ac;
        case 0x3679b0u: goto label_3679b0;
        case 0x3679b4u: goto label_3679b4;
        case 0x3679b8u: goto label_3679b8;
        case 0x3679bcu: goto label_3679bc;
        case 0x3679c0u: goto label_3679c0;
        case 0x3679c4u: goto label_3679c4;
        case 0x3679c8u: goto label_3679c8;
        case 0x3679ccu: goto label_3679cc;
        case 0x3679d0u: goto label_3679d0;
        case 0x3679d4u: goto label_3679d4;
        case 0x3679d8u: goto label_3679d8;
        case 0x3679dcu: goto label_3679dc;
        case 0x3679e0u: goto label_3679e0;
        case 0x3679e4u: goto label_3679e4;
        case 0x3679e8u: goto label_3679e8;
        case 0x3679ecu: goto label_3679ec;
        case 0x3679f0u: goto label_3679f0;
        case 0x3679f4u: goto label_3679f4;
        case 0x3679f8u: goto label_3679f8;
        case 0x3679fcu: goto label_3679fc;
        case 0x367a00u: goto label_367a00;
        case 0x367a04u: goto label_367a04;
        case 0x367a08u: goto label_367a08;
        case 0x367a0cu: goto label_367a0c;
        case 0x367a10u: goto label_367a10;
        case 0x367a14u: goto label_367a14;
        case 0x367a18u: goto label_367a18;
        case 0x367a1cu: goto label_367a1c;
        case 0x367a20u: goto label_367a20;
        case 0x367a24u: goto label_367a24;
        case 0x367a28u: goto label_367a28;
        case 0x367a2cu: goto label_367a2c;
        case 0x367a30u: goto label_367a30;
        case 0x367a34u: goto label_367a34;
        case 0x367a38u: goto label_367a38;
        case 0x367a3cu: goto label_367a3c;
        case 0x367a40u: goto label_367a40;
        case 0x367a44u: goto label_367a44;
        case 0x367a48u: goto label_367a48;
        case 0x367a4cu: goto label_367a4c;
        case 0x367a50u: goto label_367a50;
        case 0x367a54u: goto label_367a54;
        case 0x367a58u: goto label_367a58;
        case 0x367a5cu: goto label_367a5c;
        case 0x367a60u: goto label_367a60;
        case 0x367a64u: goto label_367a64;
        case 0x367a68u: goto label_367a68;
        case 0x367a6cu: goto label_367a6c;
        case 0x367a70u: goto label_367a70;
        case 0x367a74u: goto label_367a74;
        case 0x367a78u: goto label_367a78;
        case 0x367a7cu: goto label_367a7c;
        case 0x367a80u: goto label_367a80;
        case 0x367a84u: goto label_367a84;
        case 0x367a88u: goto label_367a88;
        case 0x367a8cu: goto label_367a8c;
        case 0x367a90u: goto label_367a90;
        case 0x367a94u: goto label_367a94;
        case 0x367a98u: goto label_367a98;
        case 0x367a9cu: goto label_367a9c;
        case 0x367aa0u: goto label_367aa0;
        case 0x367aa4u: goto label_367aa4;
        case 0x367aa8u: goto label_367aa8;
        case 0x367aacu: goto label_367aac;
        case 0x367ab0u: goto label_367ab0;
        case 0x367ab4u: goto label_367ab4;
        case 0x367ab8u: goto label_367ab8;
        case 0x367abcu: goto label_367abc;
        case 0x367ac0u: goto label_367ac0;
        case 0x367ac4u: goto label_367ac4;
        case 0x367ac8u: goto label_367ac8;
        case 0x367accu: goto label_367acc;
        case 0x367ad0u: goto label_367ad0;
        case 0x367ad4u: goto label_367ad4;
        case 0x367ad8u: goto label_367ad8;
        case 0x367adcu: goto label_367adc;
        case 0x367ae0u: goto label_367ae0;
        case 0x367ae4u: goto label_367ae4;
        case 0x367ae8u: goto label_367ae8;
        case 0x367aecu: goto label_367aec;
        case 0x367af0u: goto label_367af0;
        case 0x367af4u: goto label_367af4;
        case 0x367af8u: goto label_367af8;
        case 0x367afcu: goto label_367afc;
        case 0x367b00u: goto label_367b00;
        case 0x367b04u: goto label_367b04;
        case 0x367b08u: goto label_367b08;
        case 0x367b0cu: goto label_367b0c;
        case 0x367b10u: goto label_367b10;
        case 0x367b14u: goto label_367b14;
        case 0x367b18u: goto label_367b18;
        case 0x367b1cu: goto label_367b1c;
        case 0x367b20u: goto label_367b20;
        case 0x367b24u: goto label_367b24;
        case 0x367b28u: goto label_367b28;
        case 0x367b2cu: goto label_367b2c;
        case 0x367b30u: goto label_367b30;
        case 0x367b34u: goto label_367b34;
        case 0x367b38u: goto label_367b38;
        case 0x367b3cu: goto label_367b3c;
        case 0x367b40u: goto label_367b40;
        case 0x367b44u: goto label_367b44;
        case 0x367b48u: goto label_367b48;
        case 0x367b4cu: goto label_367b4c;
        case 0x367b50u: goto label_367b50;
        case 0x367b54u: goto label_367b54;
        case 0x367b58u: goto label_367b58;
        case 0x367b5cu: goto label_367b5c;
        case 0x367b60u: goto label_367b60;
        case 0x367b64u: goto label_367b64;
        case 0x367b68u: goto label_367b68;
        case 0x367b6cu: goto label_367b6c;
        case 0x367b70u: goto label_367b70;
        case 0x367b74u: goto label_367b74;
        case 0x367b78u: goto label_367b78;
        case 0x367b7cu: goto label_367b7c;
        case 0x367b80u: goto label_367b80;
        case 0x367b84u: goto label_367b84;
        case 0x367b88u: goto label_367b88;
        case 0x367b8cu: goto label_367b8c;
        case 0x367b90u: goto label_367b90;
        case 0x367b94u: goto label_367b94;
        case 0x367b98u: goto label_367b98;
        case 0x367b9cu: goto label_367b9c;
        case 0x367ba0u: goto label_367ba0;
        case 0x367ba4u: goto label_367ba4;
        case 0x367ba8u: goto label_367ba8;
        case 0x367bacu: goto label_367bac;
        case 0x367bb0u: goto label_367bb0;
        case 0x367bb4u: goto label_367bb4;
        case 0x367bb8u: goto label_367bb8;
        case 0x367bbcu: goto label_367bbc;
        case 0x367bc0u: goto label_367bc0;
        case 0x367bc4u: goto label_367bc4;
        case 0x367bc8u: goto label_367bc8;
        case 0x367bccu: goto label_367bcc;
        case 0x367bd0u: goto label_367bd0;
        case 0x367bd4u: goto label_367bd4;
        case 0x367bd8u: goto label_367bd8;
        case 0x367bdcu: goto label_367bdc;
        case 0x367be0u: goto label_367be0;
        case 0x367be4u: goto label_367be4;
        case 0x367be8u: goto label_367be8;
        case 0x367becu: goto label_367bec;
        case 0x367bf0u: goto label_367bf0;
        case 0x367bf4u: goto label_367bf4;
        case 0x367bf8u: goto label_367bf8;
        case 0x367bfcu: goto label_367bfc;
        case 0x367c00u: goto label_367c00;
        case 0x367c04u: goto label_367c04;
        case 0x367c08u: goto label_367c08;
        case 0x367c0cu: goto label_367c0c;
        case 0x367c10u: goto label_367c10;
        case 0x367c14u: goto label_367c14;
        case 0x367c18u: goto label_367c18;
        case 0x367c1cu: goto label_367c1c;
        case 0x367c20u: goto label_367c20;
        case 0x367c24u: goto label_367c24;
        case 0x367c28u: goto label_367c28;
        case 0x367c2cu: goto label_367c2c;
        case 0x367c30u: goto label_367c30;
        case 0x367c34u: goto label_367c34;
        case 0x367c38u: goto label_367c38;
        case 0x367c3cu: goto label_367c3c;
        case 0x367c40u: goto label_367c40;
        case 0x367c44u: goto label_367c44;
        case 0x367c48u: goto label_367c48;
        case 0x367c4cu: goto label_367c4c;
        case 0x367c50u: goto label_367c50;
        case 0x367c54u: goto label_367c54;
        case 0x367c58u: goto label_367c58;
        case 0x367c5cu: goto label_367c5c;
        case 0x367c60u: goto label_367c60;
        case 0x367c64u: goto label_367c64;
        case 0x367c68u: goto label_367c68;
        case 0x367c6cu: goto label_367c6c;
        case 0x367c70u: goto label_367c70;
        case 0x367c74u: goto label_367c74;
        case 0x367c78u: goto label_367c78;
        case 0x367c7cu: goto label_367c7c;
        case 0x367c80u: goto label_367c80;
        case 0x367c84u: goto label_367c84;
        case 0x367c88u: goto label_367c88;
        case 0x367c8cu: goto label_367c8c;
        case 0x367c90u: goto label_367c90;
        case 0x367c94u: goto label_367c94;
        case 0x367c98u: goto label_367c98;
        case 0x367c9cu: goto label_367c9c;
        case 0x367ca0u: goto label_367ca0;
        case 0x367ca4u: goto label_367ca4;
        case 0x367ca8u: goto label_367ca8;
        case 0x367cacu: goto label_367cac;
        case 0x367cb0u: goto label_367cb0;
        case 0x367cb4u: goto label_367cb4;
        case 0x367cb8u: goto label_367cb8;
        case 0x367cbcu: goto label_367cbc;
        default: break;
    }

    ctx->pc = 0x367970u;

label_367970:
    // 0x367970: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x367970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_367974:
    // 0x367974: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x367974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_367978:
    // 0x367978: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_36797c:
    if (ctx->pc == 0x36797Cu) {
        ctx->pc = 0x367980u;
        goto label_367980;
    }
    ctx->pc = 0x367978u;
    {
        const bool branch_taken_0x367978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367978) {
            ctx->pc = 0x367984u;
            goto label_367984;
        }
    }
    ctx->pc = 0x367980u;
label_367980:
    // 0x367980: 0xe48c00b8  swc1        $f12, 0xB8($a0)
    ctx->pc = 0x367980u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
label_367984:
    // 0x367984: 0x3e00008  jr          $ra
label_367988:
    if (ctx->pc == 0x367988u) {
        ctx->pc = 0x36798Cu;
        goto label_36798c;
    }
    ctx->pc = 0x367984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36798Cu;
label_36798c:
    // 0x36798c: 0x0  nop
    ctx->pc = 0x36798cu;
    // NOP
label_367990:
    // 0x367990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367994:
    // 0x367994: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_367998:
    if (ctx->pc == 0x367998u) {
        ctx->pc = 0x367998u;
            // 0x367998: 0x8c830054  lw          $v1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = 0x36799Cu;
        goto label_36799c;
    }
    ctx->pc = 0x367994u;
    {
        const bool branch_taken_0x367994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x367994) {
            ctx->pc = 0x367998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367994u;
            // 0x367998: 0x8c830054  lw          $v1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3679C4u;
            goto label_3679c4;
        }
    }
    ctx->pc = 0x36799Cu;
label_36799c:
    // 0x36799c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3679a0:
    if (ctx->pc == 0x3679A0u) {
        ctx->pc = 0x3679A0u;
            // 0x3679a0: 0x8c850054  lw          $a1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = 0x3679A4u;
        goto label_3679a4;
    }
    ctx->pc = 0x36799Cu;
    {
        const bool branch_taken_0x36799c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36799c) {
            ctx->pc = 0x3679A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36799Cu;
            // 0x3679a0: 0x8c850054  lw          $a1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3679ACu;
            goto label_3679ac;
        }
    }
    ctx->pc = 0x3679A4u;
label_3679a4:
    // 0x3679a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3679a8:
    if (ctx->pc == 0x3679A8u) {
        ctx->pc = 0x3679ACu;
        goto label_3679ac;
    }
    ctx->pc = 0x3679A4u;
    {
        const bool branch_taken_0x3679a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3679a4) {
            ctx->pc = 0x3679D4u;
            goto label_3679d4;
        }
    }
    ctx->pc = 0x3679ACu;
label_3679ac:
    // 0x3679ac: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x3679acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_3679b0:
    // 0x3679b0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3679b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3679b4:
    // 0x3679b4: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x3679b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_3679b8:
    // 0x3679b8: 0xa48001de  sh          $zero, 0x1DE($a0)
    ctx->pc = 0x3679b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 478), (uint16_t)GPR_U32(ctx, 0));
label_3679bc:
    // 0x3679bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3679c0:
    if (ctx->pc == 0x3679C0u) {
        ctx->pc = 0x3679C0u;
            // 0x3679c0: 0xa48001e0  sh          $zero, 0x1E0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3679C4u;
        goto label_3679c4;
    }
    ctx->pc = 0x3679BCu;
    {
        const bool branch_taken_0x3679bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3679C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3679BCu;
            // 0x3679c0: 0xa48001e0  sh          $zero, 0x1E0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679bc) {
            ctx->pc = 0x3679D4u;
            goto label_3679d4;
        }
    }
    ctx->pc = 0x3679C4u;
label_3679c4:
    // 0x3679c4: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3679c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_3679c8:
    // 0x3679c8: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x3679c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_3679cc:
    // 0x3679cc: 0xa48601de  sh          $a2, 0x1DE($a0)
    ctx->pc = 0x3679ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 478), (uint16_t)GPR_U32(ctx, 6));
label_3679d0:
    // 0x3679d0: 0xa48701e0  sh          $a3, 0x1E0($a0)
    ctx->pc = 0x3679d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 7));
label_3679d4:
    // 0x3679d4: 0x3e00008  jr          $ra
label_3679d8:
    if (ctx->pc == 0x3679D8u) {
        ctx->pc = 0x3679DCu;
        goto label_3679dc;
    }
    ctx->pc = 0x3679D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3679DCu;
label_3679dc:
    // 0x3679dc: 0x0  nop
    ctx->pc = 0x3679dcu;
    // NOP
label_3679e0:
    // 0x3679e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3679e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3679e4:
    // 0x3679e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3679e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3679e8:
    // 0x3679e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3679e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3679ec:
    // 0x3679ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3679ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3679f0:
    // 0x3679f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3679f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3679f4:
    // 0x3679f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3679f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3679f8:
    // 0x3679f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3679f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3679fc:
    // 0x3679fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3679fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_367a00:
    // 0x367a00: 0x24710108  addiu       $s1, $v1, 0x108
    ctx->pc = 0x367a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
label_367a04:
    // 0x367a04: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x367a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_367a08:
    // 0x367a08: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_367a0c:
    if (ctx->pc == 0x367A0Cu) {
        ctx->pc = 0x367A0Cu;
            // 0x367a0c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x367A10u;
        goto label_367a10;
    }
    ctx->pc = 0x367A08u;
    {
        const bool branch_taken_0x367a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367a08) {
            ctx->pc = 0x367A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367A08u;
            // 0x367a0c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367A28u;
            goto label_367a28;
        }
    }
    ctx->pc = 0x367A10u;
label_367a10:
    // 0x367a10: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x367a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367a14:
    // 0x367a14: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x367a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_367a18:
    // 0x367a18: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x367a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_367a1c:
    // 0x367a1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x367a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_367a20:
    // 0x367a20: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x367a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_367a24:
    // 0x367a24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x367a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_367a28:
    // 0x367a28: 0x54600035  bnel        $v1, $zero, . + 4 + (0x35 << 2)
label_367a2c:
    if (ctx->pc == 0x367A2Cu) {
        ctx->pc = 0x367A2Cu;
            // 0x367a2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x367A30u;
        goto label_367a30;
    }
    ctx->pc = 0x367A28u;
    {
        const bool branch_taken_0x367a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x367a28) {
            ctx->pc = 0x367A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367A28u;
            // 0x367a2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367B00u;
            goto label_367b00;
        }
    }
    ctx->pc = 0x367A30u;
label_367a30:
    // 0x367a30: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x367a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_367a34:
    // 0x367a34: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x367a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_367a38:
    // 0x367a38: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x367a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_367a3c:
    // 0x367a3c: 0x58180  sll         $s0, $a1, 6
    ctx->pc = 0x367a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_367a40:
    // 0x367a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367a44:
    // 0x367a44: 0x2124021  addu        $t0, $s0, $s2
    ctx->pc = 0x367a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_367a48:
    // 0x367a48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x367a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_367a4c:
    // 0x367a4c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x367a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_367a50:
    // 0x367a50: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x367a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_367a54:
    // 0x367a54: 0xa1050110  sb          $a1, 0x110($t0)
    ctx->pc = 0x367a54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 272), (uint8_t)GPR_U32(ctx, 5));
label_367a58:
    // 0x367a58: 0x3c0250a0  lui         $v0, 0x50A0
    ctx->pc = 0x367a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20640 << 16));
label_367a5c:
    // 0x367a5c: 0xa1050111  sb          $a1, 0x111($t0)
    ctx->pc = 0x367a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 273), (uint8_t)GPR_U32(ctx, 5));
label_367a60:
    // 0x367a60: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x367a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_367a64:
    // 0x367a64: 0xa1040112  sb          $a0, 0x112($t0)
    ctx->pc = 0x367a64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 274), (uint8_t)GPR_U32(ctx, 4));
label_367a68:
    // 0x367a68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x367a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_367a6c:
    // 0x367a6c: 0xa1000113  sb          $zero, 0x113($t0)
    ctx->pc = 0x367a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 275), (uint8_t)GPR_U32(ctx, 0));
label_367a70:
    // 0x367a70: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x367a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_367a74:
    // 0x367a74: 0xad030118  sw          $v1, 0x118($t0)
    ctx->pc = 0x367a74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 280), GPR_U32(ctx, 3));
label_367a78:
    // 0x367a78: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x367a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_367a7c:
    // 0x367a7c: 0xad00011c  sw          $zero, 0x11C($t0)
    ctx->pc = 0x367a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 284), GPR_U32(ctx, 0));
label_367a80:
    // 0x367a80: 0xad020120  sw          $v0, 0x120($t0)
    ctx->pc = 0x367a80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 2));
label_367a84:
    // 0x367a84: 0xa5060114  sh          $a2, 0x114($t0)
    ctx->pc = 0x367a84u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 276), (uint16_t)GPR_U32(ctx, 6));
label_367a88:
    // 0x367a88: 0xa5070116  sh          $a3, 0x116($t0)
    ctx->pc = 0x367a88u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 278), (uint16_t)GPR_U32(ctx, 7));
label_367a8c:
    // 0x367a8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x367a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_367a90:
    // 0x367a90: 0xe50c0130  swc1        $f12, 0x130($t0)
    ctx->pc = 0x367a90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 304), bits); }
label_367a94:
    // 0x367a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367a98:
    // 0x367a98: 0xe50d0134  swc1        $f13, 0x134($t0)
    ctx->pc = 0x367a98u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 308), bits); }
label_367a9c:
    // 0x367a9c: 0xad000138  sw          $zero, 0x138($t0)
    ctx->pc = 0x367a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 312), GPR_U32(ctx, 0));
label_367aa0:
    // 0x367aa0: 0xad02013c  sw          $v0, 0x13C($t0)
    ctx->pc = 0x367aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 316), GPR_U32(ctx, 2));
label_367aa4:
    // 0x367aa4: 0xe50e0140  swc1        $f14, 0x140($t0)
    ctx->pc = 0x367aa4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 320), bits); }
label_367aa8:
    // 0x367aa8: 0xe50f0144  swc1        $f15, 0x144($t0)
    ctx->pc = 0x367aa8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 324), bits); }
label_367aac:
    // 0x367aac: 0xe5100148  swc1        $f16, 0x148($t0)
    ctx->pc = 0x367aacu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 328), bits); }
label_367ab0:
    // 0x367ab0: 0xc040140  jal         func_100500
label_367ab4:
    if (ctx->pc == 0x367AB4u) {
        ctx->pc = 0x367AB4u;
            // 0x367ab4: 0xad02014c  sw          $v0, 0x14C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x367AB8u;
        goto label_367ab8;
    }
    ctx->pc = 0x367AB0u;
    SET_GPR_U32(ctx, 31, 0x367AB8u);
    ctx->pc = 0x367AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367AB0u;
            // 0x367ab4: 0xad02014c  sw          $v0, 0x14C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367AB8u; }
        if (ctx->pc != 0x367AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367AB8u; }
        if (ctx->pc != 0x367AB8u) { return; }
    }
    ctx->pc = 0x367AB8u;
label_367ab8:
    // 0x367ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x367ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_367abc:
    // 0x367abc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_367ac0:
    if (ctx->pc == 0x367AC0u) {
        ctx->pc = 0x367AC4u;
        goto label_367ac4;
    }
    ctx->pc = 0x367ABCu;
    {
        const bool branch_taken_0x367abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x367abc) {
            ctx->pc = 0x367ADCu;
            goto label_367adc;
        }
    }
    ctx->pc = 0x367AC4u;
label_367ac4:
    // 0x367ac4: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x367ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_367ac8:
    // 0x367ac8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_367acc:
    // 0x367acc: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x367accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_367ad0:
    // 0x367ad0: 0xc0c3f60  jal         func_30FD80
label_367ad4:
    if (ctx->pc == 0x367AD4u) {
        ctx->pc = 0x367AD4u;
            // 0x367ad4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367AD8u;
        goto label_367ad8;
    }
    ctx->pc = 0x367AD0u;
    SET_GPR_U32(ctx, 31, 0x367AD8u);
    ctx->pc = 0x367AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367AD0u;
            // 0x367ad4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367AD8u; }
        if (ctx->pc != 0x367AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367AD8u; }
        if (ctx->pc != 0x367AD8u) { return; }
    }
    ctx->pc = 0x367AD8u;
label_367ad8:
    // 0x367ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x367ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_367adc:
    // 0x367adc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x367adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_367ae0:
    // 0x367ae0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x367ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_367ae4:
    // 0x367ae4: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x367ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
label_367ae8:
    // 0x367ae8: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x367ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_367aec:
    // 0x367aec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x367aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_367af0:
    // 0x367af0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x367af0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_367af4:
    // 0x367af4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x367af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_367af8:
    // 0x367af8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x367af8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_367afc:
    // 0x367afc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x367afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_367b00:
    // 0x367b00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x367b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_367b04:
    // 0x367b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_367b08:
    // 0x367b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367b0c:
    // 0x367b0c: 0x3e00008  jr          $ra
label_367b10:
    if (ctx->pc == 0x367B10u) {
        ctx->pc = 0x367B10u;
            // 0x367b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x367B14u;
        goto label_367b14;
    }
    ctx->pc = 0x367B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367B0Cu;
            // 0x367b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x367B14u;
label_367b14:
    // 0x367b14: 0x0  nop
    ctx->pc = 0x367b14u;
    // NOP
label_367b18:
    // 0x367b18: 0x0  nop
    ctx->pc = 0x367b18u;
    // NOP
label_367b1c:
    // 0x367b1c: 0x0  nop
    ctx->pc = 0x367b1cu;
    // NOP
label_367b20:
    // 0x367b20: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x367b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_367b24:
    // 0x367b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_367b28:
    // 0x367b28: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x367b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_367b2c:
    // 0x367b2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_367b30:
    if (ctx->pc == 0x367B30u) {
        ctx->pc = 0x367B34u;
        goto label_367b34;
    }
    ctx->pc = 0x367B2Cu;
    {
        const bool branch_taken_0x367b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367b2c) {
            ctx->pc = 0x367B48u;
            goto label_367b48;
        }
    }
    ctx->pc = 0x367B34u;
label_367b34:
    // 0x367b34: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x367b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_367b38:
    // 0x367b38: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x367b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
label_367b3c:
    // 0x367b3c: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x367b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_367b40:
    // 0x367b40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x367b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_367b44:
    // 0x367b44: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x367b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_367b48:
    // 0x367b48: 0x3e00008  jr          $ra
label_367b4c:
    if (ctx->pc == 0x367B4Cu) {
        ctx->pc = 0x367B50u;
        goto label_367b50;
    }
    ctx->pc = 0x367B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x367B50u;
label_367b50:
    // 0x367b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_367b54:
    // 0x367b54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_367b58:
    if (ctx->pc == 0x367B58u) {
        ctx->pc = 0x367B58u;
            // 0x367b58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x367B5Cu;
        goto label_367b5c;
    }
    ctx->pc = 0x367B54u;
    {
        const bool branch_taken_0x367b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367B54u;
            // 0x367b58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b54) {
            ctx->pc = 0x367B74u;
            goto label_367b74;
        }
    }
    ctx->pc = 0x367B5Cu;
label_367b5c:
    // 0x367b5c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x367b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_367b60:
    // 0x367b60: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x367b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_367b64:
    // 0x367b64: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x367b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_367b68:
    // 0x367b68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x367b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_367b6c:
    // 0x367b6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_367b70:
    if (ctx->pc == 0x367B70u) {
        ctx->pc = 0x367B70u;
            // 0x367b70: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x367B74u;
        goto label_367b74;
    }
    ctx->pc = 0x367B6Cu;
    {
        const bool branch_taken_0x367b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367B6Cu;
            // 0x367b70: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b6c) {
            ctx->pc = 0x367BA8u;
            goto label_367ba8;
        }
    }
    ctx->pc = 0x367B74u;
label_367b74:
    // 0x367b74: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x367b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_367b78:
    // 0x367b78: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x367b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_367b7c:
    // 0x367b7c: 0xc22804  sllv        $a1, $v0, $a2
    ctx->pc = 0x367b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_367b80:
    // 0x367b80: 0xa02827  not         $a1, $a1
    ctx->pc = 0x367b80u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_367b84:
    // 0x367b84: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x367b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_367b88:
    // 0x367b88: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x367b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_367b8c:
    // 0x367b8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_367b90:
    // 0x367b90: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x367b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_367b94:
    // 0x367b94: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x367b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_367b98:
    // 0x367b98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x367b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_367b9c:
    // 0x367b9c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x367b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_367ba0:
    // 0x367ba0: 0x320f809  jalr        $t9
label_367ba4:
    if (ctx->pc == 0x367BA4u) {
        ctx->pc = 0x367BA8u;
        goto label_367ba8;
    }
    ctx->pc = 0x367BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x367BA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x367BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x367BA8u; }
            if (ctx->pc != 0x367BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x367BA8u;
label_367ba8:
    // 0x367ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_367bac:
    // 0x367bac: 0x3e00008  jr          $ra
label_367bb0:
    if (ctx->pc == 0x367BB0u) {
        ctx->pc = 0x367BB0u;
            // 0x367bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x367BB4u;
        goto label_367bb4;
    }
    ctx->pc = 0x367BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367BACu;
            // 0x367bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x367BB4u;
label_367bb4:
    // 0x367bb4: 0x0  nop
    ctx->pc = 0x367bb4u;
    // NOP
label_367bb8:
    // 0x367bb8: 0x0  nop
    ctx->pc = 0x367bb8u;
    // NOP
label_367bbc:
    // 0x367bbc: 0x0  nop
    ctx->pc = 0x367bbcu;
    // NOP
label_367bc0:
    // 0x367bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_367bc4:
    // 0x367bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x367bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_367bc8:
    // 0x367bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_367bcc:
    // 0x367bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_367bd0:
    // 0x367bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x367bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_367bd4:
    // 0x367bd4: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_367bd8:
    if (ctx->pc == 0x367BD8u) {
        ctx->pc = 0x367BD8u;
            // 0x367bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367BDCu;
        goto label_367bdc;
    }
    ctx->pc = 0x367BD4u;
    {
        const bool branch_taken_0x367bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x367BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367BD4u;
            // 0x367bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367bd4) {
            ctx->pc = 0x367CA0u;
            goto label_367ca0;
        }
    }
    ctx->pc = 0x367BDCu;
label_367bdc:
    // 0x367bdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x367bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_367be0:
    // 0x367be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x367be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367be4:
    // 0x367be4: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x367be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
label_367be8:
    // 0x367be8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x367be8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_367bec:
    // 0x367bec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x367becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_367bf0:
    // 0x367bf0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x367bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_367bf4:
    // 0x367bf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_367bf8:
    if (ctx->pc == 0x367BF8u) {
        ctx->pc = 0x367BFCu;
        goto label_367bfc;
    }
    ctx->pc = 0x367BF4u;
    {
        const bool branch_taken_0x367bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367bf4) {
            ctx->pc = 0x367C00u;
            goto label_367c00;
        }
    }
    ctx->pc = 0x367BFCu;
label_367bfc:
    // 0x367bfc: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x367bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
label_367c00:
    // 0x367c00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x367c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_367c04:
    // 0x367c04: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x367c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_367c08:
    // 0x367c08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_367c0c:
    if (ctx->pc == 0x367C0Cu) {
        ctx->pc = 0x367C0Cu;
            // 0x367c0c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x367C10u;
        goto label_367c10;
    }
    ctx->pc = 0x367C08u;
    {
        const bool branch_taken_0x367c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367C08u;
            // 0x367c0c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c08) {
            ctx->pc = 0x367BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_367bf0;
        }
    }
    ctx->pc = 0x367C10u;
label_367c10:
    // 0x367c10: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x367c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_367c14:
    // 0x367c14: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_367c18:
    if (ctx->pc == 0x367C18u) {
        ctx->pc = 0x367C18u;
            // 0x367c18: 0x8e2201a8  lw          $v0, 0x1A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
        ctx->pc = 0x367C1Cu;
        goto label_367c1c;
    }
    ctx->pc = 0x367C14u;
    {
        const bool branch_taken_0x367c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c14) {
            ctx->pc = 0x367C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367C14u;
            // 0x367c18: 0x8e2201a8  lw          $v0, 0x1A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367C40u;
            goto label_367c40;
        }
    }
    ctx->pc = 0x367C1Cu;
label_367c1c:
    // 0x367c1c: 0x8e2401bc  lw          $a0, 0x1BC($s1)
    ctx->pc = 0x367c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_367c20:
    // 0x367c20: 0xc112af4  jal         func_44ABD0
label_367c24:
    if (ctx->pc == 0x367C24u) {
        ctx->pc = 0x367C24u;
            // 0x367c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367C28u;
        goto label_367c28;
    }
    ctx->pc = 0x367C20u;
    SET_GPR_U32(ctx, 31, 0x367C28u);
    ctx->pc = 0x367C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367C20u;
            // 0x367c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C28u; }
        if (ctx->pc != 0x367C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C28u; }
        if (ctx->pc != 0x367C28u) { return; }
    }
    ctx->pc = 0x367C28u;
label_367c28:
    // 0x367c28: 0xae2001bc  sw          $zero, 0x1BC($s1)
    ctx->pc = 0x367c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 0));
label_367c2c:
    // 0x367c2c: 0x8e2401b8  lw          $a0, 0x1B8($s1)
    ctx->pc = 0x367c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_367c30:
    // 0x367c30: 0xc112af4  jal         func_44ABD0
label_367c34:
    if (ctx->pc == 0x367C34u) {
        ctx->pc = 0x367C34u;
            // 0x367c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367C38u;
        goto label_367c38;
    }
    ctx->pc = 0x367C30u;
    SET_GPR_U32(ctx, 31, 0x367C38u);
    ctx->pc = 0x367C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367C30u;
            // 0x367c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C38u; }
        if (ctx->pc != 0x367C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C38u; }
        if (ctx->pc != 0x367C38u) { return; }
    }
    ctx->pc = 0x367C38u;
label_367c38:
    // 0x367c38: 0xae2001b8  sw          $zero, 0x1B8($s1)
    ctx->pc = 0x367c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 0));
label_367c3c:
    // 0x367c3c: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x367c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_367c40:
    // 0x367c40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_367c44:
    if (ctx->pc == 0x367C44u) {
        ctx->pc = 0x367C48u;
        goto label_367c48;
    }
    ctx->pc = 0x367C40u;
    {
        const bool branch_taken_0x367c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c40) {
            ctx->pc = 0x367C68u;
            goto label_367c68;
        }
    }
    ctx->pc = 0x367C48u;
label_367c48:
    // 0x367c48: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x367c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_367c4c:
    // 0x367c4c: 0xc112af4  jal         func_44ABD0
label_367c50:
    if (ctx->pc == 0x367C50u) {
        ctx->pc = 0x367C50u;
            // 0x367c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367C54u;
        goto label_367c54;
    }
    ctx->pc = 0x367C4Cu;
    SET_GPR_U32(ctx, 31, 0x367C54u);
    ctx->pc = 0x367C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367C4Cu;
            // 0x367c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C54u; }
        if (ctx->pc != 0x367C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C54u; }
        if (ctx->pc != 0x367C54u) { return; }
    }
    ctx->pc = 0x367C54u;
label_367c54:
    // 0x367c54: 0xae2001ac  sw          $zero, 0x1AC($s1)
    ctx->pc = 0x367c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
label_367c58:
    // 0x367c58: 0x8e2401a8  lw          $a0, 0x1A8($s1)
    ctx->pc = 0x367c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_367c5c:
    // 0x367c5c: 0xc112af4  jal         func_44ABD0
label_367c60:
    if (ctx->pc == 0x367C60u) {
        ctx->pc = 0x367C60u;
            // 0x367c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367C64u;
        goto label_367c64;
    }
    ctx->pc = 0x367C5Cu;
    SET_GPR_U32(ctx, 31, 0x367C64u);
    ctx->pc = 0x367C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367C5Cu;
            // 0x367c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C64u; }
        if (ctx->pc != 0x367C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C64u; }
        if (ctx->pc != 0x367C64u) { return; }
    }
    ctx->pc = 0x367C64u;
label_367c64:
    // 0x367c64: 0xae2001a8  sw          $zero, 0x1A8($s1)
    ctx->pc = 0x367c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 0));
label_367c68:
    // 0x367c68: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_367c6c:
    if (ctx->pc == 0x367C6Cu) {
        ctx->pc = 0x367C6Cu;
            // 0x367c6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x367C70u;
        goto label_367c70;
    }
    ctx->pc = 0x367C68u;
    {
        const bool branch_taken_0x367c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c68) {
            ctx->pc = 0x367C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367C68u;
            // 0x367c6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367C8Cu;
            goto label_367c8c;
        }
    }
    ctx->pc = 0x367C70u;
label_367c70:
    // 0x367c70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x367c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_367c74:
    // 0x367c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_367c78:
    // 0x367c78: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x367c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_367c7c:
    // 0x367c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367c80:
    // 0x367c80: 0xc057a68  jal         func_15E9A0
label_367c84:
    if (ctx->pc == 0x367C84u) {
        ctx->pc = 0x367C84u;
            // 0x367c84: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x367C88u;
        goto label_367c88;
    }
    ctx->pc = 0x367C80u;
    SET_GPR_U32(ctx, 31, 0x367C88u);
    ctx->pc = 0x367C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367C80u;
            // 0x367c84: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C88u; }
        if (ctx->pc != 0x367C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367C88u; }
        if (ctx->pc != 0x367C88u) { return; }
    }
    ctx->pc = 0x367C88u;
label_367c88:
    // 0x367c88: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x367c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_367c8c:
    // 0x367c8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x367c8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_367c90:
    // 0x367c90: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_367c94:
    if (ctx->pc == 0x367C94u) {
        ctx->pc = 0x367C94u;
            // 0x367c94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367C98u;
        goto label_367c98;
    }
    ctx->pc = 0x367C90u;
    {
        const bool branch_taken_0x367c90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x367c90) {
            ctx->pc = 0x367C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367C90u;
            // 0x367c94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367CA4u;
            goto label_367ca4;
        }
    }
    ctx->pc = 0x367C98u;
label_367c98:
    // 0x367c98: 0xc0400a8  jal         func_1002A0
label_367c9c:
    if (ctx->pc == 0x367C9Cu) {
        ctx->pc = 0x367C9Cu;
            // 0x367c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x367CA0u;
        goto label_367ca0;
    }
    ctx->pc = 0x367C98u;
    SET_GPR_U32(ctx, 31, 0x367CA0u);
    ctx->pc = 0x367C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367C98u;
            // 0x367c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367CA0u; }
        if (ctx->pc != 0x367CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367CA0u; }
        if (ctx->pc != 0x367CA0u) { return; }
    }
    ctx->pc = 0x367CA0u;
label_367ca0:
    // 0x367ca0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x367ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_367ca4:
    // 0x367ca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x367ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_367ca8:
    // 0x367ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_367cac:
    // 0x367cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367cb0:
    // 0x367cb0: 0x3e00008  jr          $ra
label_367cb4:
    if (ctx->pc == 0x367CB4u) {
        ctx->pc = 0x367CB4u;
            // 0x367cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x367CB8u;
        goto label_367cb8;
    }
    ctx->pc = 0x367CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367CB0u;
            // 0x367cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x367CB8u;
label_367cb8:
    // 0x367cb8: 0x0  nop
    ctx->pc = 0x367cb8u;
    // NOP
label_367cbc:
    // 0x367cbc: 0x0  nop
    ctx->pc = 0x367cbcu;
    // NOP
}
