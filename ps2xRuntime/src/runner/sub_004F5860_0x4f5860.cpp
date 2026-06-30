#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5860
// Address: 0x4f5860 - 0x4f5b20
void sub_004F5860_0x4f5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5860_0x4f5860");
#endif

    switch (ctx->pc) {
        case 0x4f5860u: goto label_4f5860;
        case 0x4f5864u: goto label_4f5864;
        case 0x4f5868u: goto label_4f5868;
        case 0x4f586cu: goto label_4f586c;
        case 0x4f5870u: goto label_4f5870;
        case 0x4f5874u: goto label_4f5874;
        case 0x4f5878u: goto label_4f5878;
        case 0x4f587cu: goto label_4f587c;
        case 0x4f5880u: goto label_4f5880;
        case 0x4f5884u: goto label_4f5884;
        case 0x4f5888u: goto label_4f5888;
        case 0x4f588cu: goto label_4f588c;
        case 0x4f5890u: goto label_4f5890;
        case 0x4f5894u: goto label_4f5894;
        case 0x4f5898u: goto label_4f5898;
        case 0x4f589cu: goto label_4f589c;
        case 0x4f58a0u: goto label_4f58a0;
        case 0x4f58a4u: goto label_4f58a4;
        case 0x4f58a8u: goto label_4f58a8;
        case 0x4f58acu: goto label_4f58ac;
        case 0x4f58b0u: goto label_4f58b0;
        case 0x4f58b4u: goto label_4f58b4;
        case 0x4f58b8u: goto label_4f58b8;
        case 0x4f58bcu: goto label_4f58bc;
        case 0x4f58c0u: goto label_4f58c0;
        case 0x4f58c4u: goto label_4f58c4;
        case 0x4f58c8u: goto label_4f58c8;
        case 0x4f58ccu: goto label_4f58cc;
        case 0x4f58d0u: goto label_4f58d0;
        case 0x4f58d4u: goto label_4f58d4;
        case 0x4f58d8u: goto label_4f58d8;
        case 0x4f58dcu: goto label_4f58dc;
        case 0x4f58e0u: goto label_4f58e0;
        case 0x4f58e4u: goto label_4f58e4;
        case 0x4f58e8u: goto label_4f58e8;
        case 0x4f58ecu: goto label_4f58ec;
        case 0x4f58f0u: goto label_4f58f0;
        case 0x4f58f4u: goto label_4f58f4;
        case 0x4f58f8u: goto label_4f58f8;
        case 0x4f58fcu: goto label_4f58fc;
        case 0x4f5900u: goto label_4f5900;
        case 0x4f5904u: goto label_4f5904;
        case 0x4f5908u: goto label_4f5908;
        case 0x4f590cu: goto label_4f590c;
        case 0x4f5910u: goto label_4f5910;
        case 0x4f5914u: goto label_4f5914;
        case 0x4f5918u: goto label_4f5918;
        case 0x4f591cu: goto label_4f591c;
        case 0x4f5920u: goto label_4f5920;
        case 0x4f5924u: goto label_4f5924;
        case 0x4f5928u: goto label_4f5928;
        case 0x4f592cu: goto label_4f592c;
        case 0x4f5930u: goto label_4f5930;
        case 0x4f5934u: goto label_4f5934;
        case 0x4f5938u: goto label_4f5938;
        case 0x4f593cu: goto label_4f593c;
        case 0x4f5940u: goto label_4f5940;
        case 0x4f5944u: goto label_4f5944;
        case 0x4f5948u: goto label_4f5948;
        case 0x4f594cu: goto label_4f594c;
        case 0x4f5950u: goto label_4f5950;
        case 0x4f5954u: goto label_4f5954;
        case 0x4f5958u: goto label_4f5958;
        case 0x4f595cu: goto label_4f595c;
        case 0x4f5960u: goto label_4f5960;
        case 0x4f5964u: goto label_4f5964;
        case 0x4f5968u: goto label_4f5968;
        case 0x4f596cu: goto label_4f596c;
        case 0x4f5970u: goto label_4f5970;
        case 0x4f5974u: goto label_4f5974;
        case 0x4f5978u: goto label_4f5978;
        case 0x4f597cu: goto label_4f597c;
        case 0x4f5980u: goto label_4f5980;
        case 0x4f5984u: goto label_4f5984;
        case 0x4f5988u: goto label_4f5988;
        case 0x4f598cu: goto label_4f598c;
        case 0x4f5990u: goto label_4f5990;
        case 0x4f5994u: goto label_4f5994;
        case 0x4f5998u: goto label_4f5998;
        case 0x4f599cu: goto label_4f599c;
        case 0x4f59a0u: goto label_4f59a0;
        case 0x4f59a4u: goto label_4f59a4;
        case 0x4f59a8u: goto label_4f59a8;
        case 0x4f59acu: goto label_4f59ac;
        case 0x4f59b0u: goto label_4f59b0;
        case 0x4f59b4u: goto label_4f59b4;
        case 0x4f59b8u: goto label_4f59b8;
        case 0x4f59bcu: goto label_4f59bc;
        case 0x4f59c0u: goto label_4f59c0;
        case 0x4f59c4u: goto label_4f59c4;
        case 0x4f59c8u: goto label_4f59c8;
        case 0x4f59ccu: goto label_4f59cc;
        case 0x4f59d0u: goto label_4f59d0;
        case 0x4f59d4u: goto label_4f59d4;
        case 0x4f59d8u: goto label_4f59d8;
        case 0x4f59dcu: goto label_4f59dc;
        case 0x4f59e0u: goto label_4f59e0;
        case 0x4f59e4u: goto label_4f59e4;
        case 0x4f59e8u: goto label_4f59e8;
        case 0x4f59ecu: goto label_4f59ec;
        case 0x4f59f0u: goto label_4f59f0;
        case 0x4f59f4u: goto label_4f59f4;
        case 0x4f59f8u: goto label_4f59f8;
        case 0x4f59fcu: goto label_4f59fc;
        case 0x4f5a00u: goto label_4f5a00;
        case 0x4f5a04u: goto label_4f5a04;
        case 0x4f5a08u: goto label_4f5a08;
        case 0x4f5a0cu: goto label_4f5a0c;
        case 0x4f5a10u: goto label_4f5a10;
        case 0x4f5a14u: goto label_4f5a14;
        case 0x4f5a18u: goto label_4f5a18;
        case 0x4f5a1cu: goto label_4f5a1c;
        case 0x4f5a20u: goto label_4f5a20;
        case 0x4f5a24u: goto label_4f5a24;
        case 0x4f5a28u: goto label_4f5a28;
        case 0x4f5a2cu: goto label_4f5a2c;
        case 0x4f5a30u: goto label_4f5a30;
        case 0x4f5a34u: goto label_4f5a34;
        case 0x4f5a38u: goto label_4f5a38;
        case 0x4f5a3cu: goto label_4f5a3c;
        case 0x4f5a40u: goto label_4f5a40;
        case 0x4f5a44u: goto label_4f5a44;
        case 0x4f5a48u: goto label_4f5a48;
        case 0x4f5a4cu: goto label_4f5a4c;
        case 0x4f5a50u: goto label_4f5a50;
        case 0x4f5a54u: goto label_4f5a54;
        case 0x4f5a58u: goto label_4f5a58;
        case 0x4f5a5cu: goto label_4f5a5c;
        case 0x4f5a60u: goto label_4f5a60;
        case 0x4f5a64u: goto label_4f5a64;
        case 0x4f5a68u: goto label_4f5a68;
        case 0x4f5a6cu: goto label_4f5a6c;
        case 0x4f5a70u: goto label_4f5a70;
        case 0x4f5a74u: goto label_4f5a74;
        case 0x4f5a78u: goto label_4f5a78;
        case 0x4f5a7cu: goto label_4f5a7c;
        case 0x4f5a80u: goto label_4f5a80;
        case 0x4f5a84u: goto label_4f5a84;
        case 0x4f5a88u: goto label_4f5a88;
        case 0x4f5a8cu: goto label_4f5a8c;
        case 0x4f5a90u: goto label_4f5a90;
        case 0x4f5a94u: goto label_4f5a94;
        case 0x4f5a98u: goto label_4f5a98;
        case 0x4f5a9cu: goto label_4f5a9c;
        case 0x4f5aa0u: goto label_4f5aa0;
        case 0x4f5aa4u: goto label_4f5aa4;
        case 0x4f5aa8u: goto label_4f5aa8;
        case 0x4f5aacu: goto label_4f5aac;
        case 0x4f5ab0u: goto label_4f5ab0;
        case 0x4f5ab4u: goto label_4f5ab4;
        case 0x4f5ab8u: goto label_4f5ab8;
        case 0x4f5abcu: goto label_4f5abc;
        case 0x4f5ac0u: goto label_4f5ac0;
        case 0x4f5ac4u: goto label_4f5ac4;
        case 0x4f5ac8u: goto label_4f5ac8;
        case 0x4f5accu: goto label_4f5acc;
        case 0x4f5ad0u: goto label_4f5ad0;
        case 0x4f5ad4u: goto label_4f5ad4;
        case 0x4f5ad8u: goto label_4f5ad8;
        case 0x4f5adcu: goto label_4f5adc;
        case 0x4f5ae0u: goto label_4f5ae0;
        case 0x4f5ae4u: goto label_4f5ae4;
        case 0x4f5ae8u: goto label_4f5ae8;
        case 0x4f5aecu: goto label_4f5aec;
        case 0x4f5af0u: goto label_4f5af0;
        case 0x4f5af4u: goto label_4f5af4;
        case 0x4f5af8u: goto label_4f5af8;
        case 0x4f5afcu: goto label_4f5afc;
        case 0x4f5b00u: goto label_4f5b00;
        case 0x4f5b04u: goto label_4f5b04;
        case 0x4f5b08u: goto label_4f5b08;
        case 0x4f5b0cu: goto label_4f5b0c;
        case 0x4f5b10u: goto label_4f5b10;
        case 0x4f5b14u: goto label_4f5b14;
        case 0x4f5b18u: goto label_4f5b18;
        case 0x4f5b1cu: goto label_4f5b1c;
        default: break;
    }

    ctx->pc = 0x4f5860u;

label_4f5860:
    // 0x4f5860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f5860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f5864:
    // 0x4f5864: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x4f5864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_4f5868:
    // 0x4f5868: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x4f5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f586c:
    // 0x4f586c: 0x3e00008  jr          $ra
label_4f5870:
    if (ctx->pc == 0x4F5870u) {
        ctx->pc = 0x4F5870u;
            // 0x4f5870: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = 0x4F5874u;
        goto label_4f5874;
    }
    ctx->pc = 0x4F586Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F586Cu;
            // 0x4f5870: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5874u;
label_4f5874:
    // 0x4f5874: 0x0  nop
    ctx->pc = 0x4f5874u;
    // NOP
label_4f5878:
    // 0x4f5878: 0x0  nop
    ctx->pc = 0x4f5878u;
    // NOP
label_4f587c:
    // 0x4f587c: 0x0  nop
    ctx->pc = 0x4f587cu;
    // NOP
label_4f5880:
    // 0x4f5880: 0x3e00008  jr          $ra
label_4f5884:
    if (ctx->pc == 0x4F5884u) {
        ctx->pc = 0x4F5884u;
            // 0x4f5884: 0x240261f8  addiu       $v0, $zero, 0x61F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25080));
        ctx->pc = 0x4F5888u;
        goto label_4f5888;
    }
    ctx->pc = 0x4F5880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5880u;
            // 0x4f5884: 0x240261f8  addiu       $v0, $zero, 0x61F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5888u;
label_4f5888:
    // 0x4f5888: 0x0  nop
    ctx->pc = 0x4f5888u;
    // NOP
label_4f588c:
    // 0x4f588c: 0x0  nop
    ctx->pc = 0x4f588cu;
    // NOP
label_4f5890:
    // 0x4f5890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f5890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f5894:
    // 0x4f5894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4f5894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4f5898:
    // 0x4f5898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f5898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f589c:
    // 0x4f589c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f58a0:
    // 0x4f58a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f58a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f58a4:
    // 0x4f58a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f58a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f58a8:
    // 0x4f58a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f58a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f58ac:
    // 0x4f58ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f58acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f58b0:
    // 0x4f58b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4f58b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f58b4:
    // 0x4f58b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4f58b8:
    if (ctx->pc == 0x4F58B8u) {
        ctx->pc = 0x4F58B8u;
            // 0x4f58b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F58BCu;
        goto label_4f58bc;
    }
    ctx->pc = 0x4F58B4u;
    {
        const bool branch_taken_0x4f58b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F58B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F58B4u;
            // 0x4f58b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f58b4) {
            ctx->pc = 0x4F58F8u;
            goto label_4f58f8;
        }
    }
    ctx->pc = 0x4F58BCu;
label_4f58bc:
    // 0x4f58bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f58bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f58c0:
    // 0x4f58c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f58c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f58c4:
    // 0x4f58c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f58c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f58c8:
    // 0x4f58c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4f58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4f58cc:
    // 0x4f58cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4f58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4f58d0:
    // 0x4f58d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f58d4:
    // 0x4f58d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f58d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f58d8:
    // 0x4f58d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4f58d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4f58dc:
    // 0x4f58dc: 0x320f809  jalr        $t9
label_4f58e0:
    if (ctx->pc == 0x4F58E0u) {
        ctx->pc = 0x4F58E4u;
        goto label_4f58e4;
    }
    ctx->pc = 0x4F58DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F58E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F58E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F58E4u; }
            if (ctx->pc != 0x4F58E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4F58E4u;
label_4f58e4:
    // 0x4f58e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4f58e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4f58e8:
    // 0x4f58e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4f58e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4f58ec:
    // 0x4f58ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4f58ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4f58f0:
    // 0x4f58f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4f58f4:
    if (ctx->pc == 0x4F58F4u) {
        ctx->pc = 0x4F58F4u;
            // 0x4f58f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4F58F8u;
        goto label_4f58f8;
    }
    ctx->pc = 0x4F58F0u;
    {
        const bool branch_taken_0x4f58f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F58F0u;
            // 0x4f58f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f58f0) {
            ctx->pc = 0x4F58C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f58c8;
        }
    }
    ctx->pc = 0x4F58F8u;
label_4f58f8:
    // 0x4f58f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f58f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f58fc:
    // 0x4f58fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4f58fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4f5900:
    // 0x4f5900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f5900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5904:
    // 0x4f5904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f5904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5908:
    // 0x4f5908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f5908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f590c:
    // 0x4f590c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f590cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5910:
    // 0x4f5910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f5910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5914:
    // 0x4f5914: 0x3e00008  jr          $ra
label_4f5918:
    if (ctx->pc == 0x4F5918u) {
        ctx->pc = 0x4F5918u;
            // 0x4f5918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4F591Cu;
        goto label_4f591c;
    }
    ctx->pc = 0x4F5914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5914u;
            // 0x4f5918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F591Cu;
label_4f591c:
    // 0x4f591c: 0x0  nop
    ctx->pc = 0x4f591cu;
    // NOP
label_4f5920:
    // 0x4f5920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f5924:
    // 0x4f5924: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f5924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f5928:
    // 0x4f5928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f592c:
    // 0x4f592c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4f592cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4f5930:
    // 0x4f5930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f5930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f5934:
    // 0x4f5934: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f5938:
    // 0x4f5938: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f5938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f593c:
    // 0x4f593c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4f5940:
    // 0x4f5940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f5940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f5944:
    // 0x4f5944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f5944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f5948:
    // 0x4f5948: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4f5948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4f594c:
    // 0x4f594c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4f594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f5950:
    // 0x4f5950: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4f5950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4f5954:
    // 0x4f5954: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4f5954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5958:
    // 0x4f5958: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4f5958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4f595c:
    // 0x4f595c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4f595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4f5960:
    // 0x4f5960: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4f5960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4f5964:
    // 0x4f5964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f5964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f5968:
    // 0x4f5968: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4f5968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4f596c:
    // 0x4f596c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4f596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f5970:
    // 0x4f5970: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4f5970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4f5974:
    // 0x4f5974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f5974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f5978:
    // 0x4f5978: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4f5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f597c:
    // 0x4f597c: 0xc0a997c  jal         func_2A65F0
label_4f5980:
    if (ctx->pc == 0x4F5980u) {
        ctx->pc = 0x4F5980u;
            // 0x4f5980: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4F5984u;
        goto label_4f5984;
    }
    ctx->pc = 0x4F597Cu;
    SET_GPR_U32(ctx, 31, 0x4F5984u);
    ctx->pc = 0x4F5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F597Cu;
            // 0x4f5980: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5984u; }
        if (ctx->pc != 0x4F5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5984u; }
        if (ctx->pc != 0x4F5984u) { return; }
    }
    ctx->pc = 0x4F5984u;
label_4f5984:
    // 0x4f5984: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4f5984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4f5988:
    // 0x4f5988: 0xc0d879c  jal         func_361E70
label_4f598c:
    if (ctx->pc == 0x4F598Cu) {
        ctx->pc = 0x4F598Cu;
            // 0x4f598c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5990u;
        goto label_4f5990;
    }
    ctx->pc = 0x4F5988u;
    SET_GPR_U32(ctx, 31, 0x4F5990u);
    ctx->pc = 0x4F598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5988u;
            // 0x4f598c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5990u; }
        if (ctx->pc != 0x4F5990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5990u; }
        if (ctx->pc != 0x4F5990u) { return; }
    }
    ctx->pc = 0x4F5990u;
label_4f5990:
    // 0x4f5990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f5990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5994:
    // 0x4f5994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f5994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5998:
    // 0x4f5998: 0x3e00008  jr          $ra
label_4f599c:
    if (ctx->pc == 0x4F599Cu) {
        ctx->pc = 0x4F599Cu;
            // 0x4f599c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4F59A0u;
        goto label_4f59a0;
    }
    ctx->pc = 0x4F5998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5998u;
            // 0x4f599c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F59A0u;
label_4f59a0:
    // 0x4f59a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f59a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f59a4:
    // 0x4f59a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f59a8:
    // 0x4f59a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f59ac:
    // 0x4f59ac: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4f59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4f59b0:
    // 0x4f59b0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4f59b4:
    if (ctx->pc == 0x4F59B4u) {
        ctx->pc = 0x4F59B4u;
            // 0x4f59b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F59B8u;
        goto label_4f59b8;
    }
    ctx->pc = 0x4F59B0u;
    {
        const bool branch_taken_0x4f59b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F59B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F59B0u;
            // 0x4f59b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f59b0) {
            ctx->pc = 0x4F5AD0u;
            goto label_4f5ad0;
        }
    }
    ctx->pc = 0x4F59B8u;
label_4f59b8:
    // 0x4f59b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f59bc:
    // 0x4f59bc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4f59c0:
    // 0x4f59c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4f59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4f59c4:
    // 0x4f59c4: 0xc075128  jal         func_1D44A0
label_4f59c8:
    if (ctx->pc == 0x4F59C8u) {
        ctx->pc = 0x4F59C8u;
            // 0x4f59c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4F59CCu;
        goto label_4f59cc;
    }
    ctx->pc = 0x4F59C4u;
    SET_GPR_U32(ctx, 31, 0x4F59CCu);
    ctx->pc = 0x4F59C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F59C4u;
            // 0x4f59c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F59CCu; }
        if (ctx->pc != 0x4F59CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F59CCu; }
        if (ctx->pc != 0x4F59CCu) { return; }
    }
    ctx->pc = 0x4F59CCu;
label_4f59cc:
    // 0x4f59cc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4f59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f59d0:
    // 0x4f59d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f59d4:
    // 0x4f59d4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4f59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4f59d8:
    // 0x4f59d8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4f59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f59dc:
    // 0x4f59dc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f59dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f59e0:
    // 0x4f59e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f59e4:
    if (ctx->pc == 0x4F59E4u) {
        ctx->pc = 0x4F59E4u;
            // 0x4f59e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4F59E8u;
        goto label_4f59e8;
    }
    ctx->pc = 0x4F59E0u;
    {
        const bool branch_taken_0x4f59e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F59E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F59E0u;
            // 0x4f59e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f59e0) {
            ctx->pc = 0x4F59F0u;
            goto label_4f59f0;
        }
    }
    ctx->pc = 0x4F59E8u;
label_4f59e8:
    // 0x4f59e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f59ec:
    // 0x4f59ec: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4f59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4f59f0:
    // 0x4f59f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f59f4:
    // 0x4f59f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f59f8:
    // 0x4f59f8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4f59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4f59fc:
    // 0x4f59fc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f5a00:
    // 0x4f5a00: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f5a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f5a04:
    // 0x4f5a04: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f5a08:
    if (ctx->pc == 0x4F5A08u) {
        ctx->pc = 0x4F5A08u;
            // 0x4f5a08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F5A0Cu;
        goto label_4f5a0c;
    }
    ctx->pc = 0x4F5A04u;
    {
        const bool branch_taken_0x4f5a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5a04) {
            ctx->pc = 0x4F5A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5A04u;
            // 0x4f5a08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5A18u;
            goto label_4f5a18;
        }
    }
    ctx->pc = 0x4F5A0Cu;
label_4f5a0c:
    // 0x4f5a0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f5a10:
    // 0x4f5a10: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4f5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4f5a14:
    // 0x4f5a14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f5a18:
    // 0x4f5a18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f5a1c:
    // 0x4f5a1c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4f5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4f5a20:
    // 0x4f5a20: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4f5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4f5a24:
    // 0x4f5a24: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4f5a24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f5a28:
    // 0x4f5a28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f5a2c:
    if (ctx->pc == 0x4F5A2Cu) {
        ctx->pc = 0x4F5A2Cu;
            // 0x4f5a2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4F5A30u;
        goto label_4f5a30;
    }
    ctx->pc = 0x4F5A28u;
    {
        const bool branch_taken_0x4f5a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5a28) {
            ctx->pc = 0x4F5A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5A28u;
            // 0x4f5a2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5A3Cu;
            goto label_4f5a3c;
        }
    }
    ctx->pc = 0x4F5A30u;
label_4f5a30:
    // 0x4f5a30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f5a34:
    // 0x4f5a34: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4f5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4f5a38:
    // 0x4f5a38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4f5a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f5a3c:
    // 0x4f5a3c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4f5a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4f5a40:
    // 0x4f5a40: 0x320f809  jalr        $t9
label_4f5a44:
    if (ctx->pc == 0x4F5A44u) {
        ctx->pc = 0x4F5A44u;
            // 0x4f5a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5A48u;
        goto label_4f5a48;
    }
    ctx->pc = 0x4F5A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F5A48u);
        ctx->pc = 0x4F5A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5A40u;
            // 0x4f5a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F5A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F5A48u; }
            if (ctx->pc != 0x4F5A48u) { return; }
        }
        }
    }
    ctx->pc = 0x4F5A48u;
label_4f5a48:
    // 0x4f5a48: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f5a4c:
    // 0x4f5a4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5a50:
    // 0x4f5a50: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4f5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4f5a54:
    // 0x4f5a54: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f5a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f5a58:
    // 0x4f5a58: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f5a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f5a5c:
    // 0x4f5a5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f5a5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f5a60:
    // 0x4f5a60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f5a64:
    if (ctx->pc == 0x4F5A64u) {
        ctx->pc = 0x4F5A64u;
            // 0x4f5a64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4F5A68u;
        goto label_4f5a68;
    }
    ctx->pc = 0x4F5A60u;
    {
        const bool branch_taken_0x4f5a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5a60) {
            ctx->pc = 0x4F5A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5A60u;
            // 0x4f5a64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5A74u;
            goto label_4f5a74;
        }
    }
    ctx->pc = 0x4F5A68u;
label_4f5a68:
    // 0x4f5a68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5a6c:
    // 0x4f5a6c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4f5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4f5a70:
    // 0x4f5a70: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4f5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f5a74:
    // 0x4f5a74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5a78:
    // 0x4f5a78: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4f5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4f5a7c:
    // 0x4f5a7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4f5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4f5a80:
    // 0x4f5a80: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4f5a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f5a84:
    // 0x4f5a84: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4f5a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f5a88:
    // 0x4f5a88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f5a8c:
    if (ctx->pc == 0x4F5A8Cu) {
        ctx->pc = 0x4F5A90u;
        goto label_4f5a90;
    }
    ctx->pc = 0x4F5A88u;
    {
        const bool branch_taken_0x4f5a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5a88) {
            ctx->pc = 0x4F5A98u;
            goto label_4f5a98;
        }
    }
    ctx->pc = 0x4F5A90u;
label_4f5a90:
    // 0x4f5a90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5a94:
    // 0x4f5a94: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4f5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4f5a98:
    // 0x4f5a98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5a9c:
    // 0x4f5a9c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4f5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4f5aa0:
    // 0x4f5aa0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f5aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f5aa4:
    // 0x4f5aa4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4f5aa8:
    if (ctx->pc == 0x4F5AA8u) {
        ctx->pc = 0x4F5AACu;
        goto label_4f5aac;
    }
    ctx->pc = 0x4F5AA4u;
    {
        const bool branch_taken_0x4f5aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5aa4) {
            ctx->pc = 0x4F5AB4u;
            goto label_4f5ab4;
        }
    }
    ctx->pc = 0x4F5AACu;
label_4f5aac:
    // 0x4f5aac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5ab0:
    // 0x4f5ab0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4f5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4f5ab4:
    // 0x4f5ab4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5ab8:
    // 0x4f5ab8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4f5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4f5abc:
    // 0x4f5abc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4f5abcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f5ac0:
    // 0x4f5ac0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4f5ac4:
    if (ctx->pc == 0x4F5AC4u) {
        ctx->pc = 0x4F5AC4u;
            // 0x4f5ac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4F5AC8u;
        goto label_4f5ac8;
    }
    ctx->pc = 0x4F5AC0u;
    {
        const bool branch_taken_0x4f5ac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5ac0) {
            ctx->pc = 0x4F5AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5AC0u;
            // 0x4f5ac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5AD4u;
            goto label_4f5ad4;
        }
    }
    ctx->pc = 0x4F5AC8u;
label_4f5ac8:
    // 0x4f5ac8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f5acc:
    // 0x4f5acc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4f5accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4f5ad0:
    // 0x4f5ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5ad4:
    // 0x4f5ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f5ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5ad8:
    // 0x4f5ad8: 0x3e00008  jr          $ra
label_4f5adc:
    if (ctx->pc == 0x4F5ADCu) {
        ctx->pc = 0x4F5ADCu;
            // 0x4f5adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4F5AE0u;
        goto label_4f5ae0;
    }
    ctx->pc = 0x4F5AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5AD8u;
            // 0x4f5adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5AE0u;
label_4f5ae0:
    // 0x4f5ae0: 0x813d208  j           func_4F4820
label_4f5ae4:
    if (ctx->pc == 0x4F5AE4u) {
        ctx->pc = 0x4F5AE4u;
            // 0x4f5ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F5AE8u;
        goto label_4f5ae8;
    }
    ctx->pc = 0x4F5AE0u;
    ctx->pc = 0x4F5AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5AE0u;
            // 0x4f5ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F4820u;
    {
        auto targetFn = runtime->lookupFunction(0x4F4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F5AE8u;
label_4f5ae8:
    // 0x4f5ae8: 0x0  nop
    ctx->pc = 0x4f5ae8u;
    // NOP
label_4f5aec:
    // 0x4f5aec: 0x0  nop
    ctx->pc = 0x4f5aecu;
    // NOP
label_4f5af0:
    // 0x4f5af0: 0x813cf84  j           func_4F3E10
label_4f5af4:
    if (ctx->pc == 0x4F5AF4u) {
        ctx->pc = 0x4F5AF4u;
            // 0x4f5af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F5AF8u;
        goto label_4f5af8;
    }
    ctx->pc = 0x4F5AF0u;
    ctx->pc = 0x4F5AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5AF0u;
            // 0x4f5af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F3E10u;
    if (runtime->hasFunction(0x4F3E10u)) {
        auto targetFn = runtime->lookupFunction(0x4F3E10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004F3E10_0x4f3e10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4F5AF8u;
label_4f5af8:
    // 0x4f5af8: 0x0  nop
    ctx->pc = 0x4f5af8u;
    // NOP
label_4f5afc:
    // 0x4f5afc: 0x0  nop
    ctx->pc = 0x4f5afcu;
    // NOP
label_4f5b00:
    // 0x4f5b00: 0x813cfdc  j           func_4F3F70
label_4f5b04:
    if (ctx->pc == 0x4F5B04u) {
        ctx->pc = 0x4F5B04u;
            // 0x4f5b04: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4F5B08u;
        goto label_4f5b08;
    }
    ctx->pc = 0x4F5B00u;
    ctx->pc = 0x4F5B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5B00u;
            // 0x4f5b04: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F3F70u;
    {
        auto targetFn = runtime->lookupFunction(0x4F3F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F5B08u;
label_4f5b08:
    // 0x4f5b08: 0x0  nop
    ctx->pc = 0x4f5b08u;
    // NOP
label_4f5b0c:
    // 0x4f5b0c: 0x0  nop
    ctx->pc = 0x4f5b0cu;
    // NOP
label_4f5b10:
    // 0x4f5b10: 0x813cf60  j           func_4F3D80
label_4f5b14:
    if (ctx->pc == 0x4F5B14u) {
        ctx->pc = 0x4F5B14u;
            // 0x4f5b14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4F5B18u;
        goto label_4f5b18;
    }
    ctx->pc = 0x4F5B10u;
    ctx->pc = 0x4F5B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5B10u;
            // 0x4f5b14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F3D80u;
    {
        auto targetFn = runtime->lookupFunction(0x4F3D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4F5B18u;
label_4f5b18:
    // 0x4f5b18: 0x0  nop
    ctx->pc = 0x4f5b18u;
    // NOP
label_4f5b1c:
    // 0x4f5b1c: 0x0  nop
    ctx->pc = 0x4f5b1cu;
    // NOP
}
