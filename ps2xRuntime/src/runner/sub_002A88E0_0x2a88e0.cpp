#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A88E0
// Address: 0x2a88e0 - 0x2a8cc0
void sub_002A88E0_0x2a88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A88E0_0x2a88e0");
#endif

    switch (ctx->pc) {
        case 0x2a88e0u: goto label_2a88e0;
        case 0x2a88e4u: goto label_2a88e4;
        case 0x2a88e8u: goto label_2a88e8;
        case 0x2a88ecu: goto label_2a88ec;
        case 0x2a88f0u: goto label_2a88f0;
        case 0x2a88f4u: goto label_2a88f4;
        case 0x2a88f8u: goto label_2a88f8;
        case 0x2a88fcu: goto label_2a88fc;
        case 0x2a8900u: goto label_2a8900;
        case 0x2a8904u: goto label_2a8904;
        case 0x2a8908u: goto label_2a8908;
        case 0x2a890cu: goto label_2a890c;
        case 0x2a8910u: goto label_2a8910;
        case 0x2a8914u: goto label_2a8914;
        case 0x2a8918u: goto label_2a8918;
        case 0x2a891cu: goto label_2a891c;
        case 0x2a8920u: goto label_2a8920;
        case 0x2a8924u: goto label_2a8924;
        case 0x2a8928u: goto label_2a8928;
        case 0x2a892cu: goto label_2a892c;
        case 0x2a8930u: goto label_2a8930;
        case 0x2a8934u: goto label_2a8934;
        case 0x2a8938u: goto label_2a8938;
        case 0x2a893cu: goto label_2a893c;
        case 0x2a8940u: goto label_2a8940;
        case 0x2a8944u: goto label_2a8944;
        case 0x2a8948u: goto label_2a8948;
        case 0x2a894cu: goto label_2a894c;
        case 0x2a8950u: goto label_2a8950;
        case 0x2a8954u: goto label_2a8954;
        case 0x2a8958u: goto label_2a8958;
        case 0x2a895cu: goto label_2a895c;
        case 0x2a8960u: goto label_2a8960;
        case 0x2a8964u: goto label_2a8964;
        case 0x2a8968u: goto label_2a8968;
        case 0x2a896cu: goto label_2a896c;
        case 0x2a8970u: goto label_2a8970;
        case 0x2a8974u: goto label_2a8974;
        case 0x2a8978u: goto label_2a8978;
        case 0x2a897cu: goto label_2a897c;
        case 0x2a8980u: goto label_2a8980;
        case 0x2a8984u: goto label_2a8984;
        case 0x2a8988u: goto label_2a8988;
        case 0x2a898cu: goto label_2a898c;
        case 0x2a8990u: goto label_2a8990;
        case 0x2a8994u: goto label_2a8994;
        case 0x2a8998u: goto label_2a8998;
        case 0x2a899cu: goto label_2a899c;
        case 0x2a89a0u: goto label_2a89a0;
        case 0x2a89a4u: goto label_2a89a4;
        case 0x2a89a8u: goto label_2a89a8;
        case 0x2a89acu: goto label_2a89ac;
        case 0x2a89b0u: goto label_2a89b0;
        case 0x2a89b4u: goto label_2a89b4;
        case 0x2a89b8u: goto label_2a89b8;
        case 0x2a89bcu: goto label_2a89bc;
        case 0x2a89c0u: goto label_2a89c0;
        case 0x2a89c4u: goto label_2a89c4;
        case 0x2a89c8u: goto label_2a89c8;
        case 0x2a89ccu: goto label_2a89cc;
        case 0x2a89d0u: goto label_2a89d0;
        case 0x2a89d4u: goto label_2a89d4;
        case 0x2a89d8u: goto label_2a89d8;
        case 0x2a89dcu: goto label_2a89dc;
        case 0x2a89e0u: goto label_2a89e0;
        case 0x2a89e4u: goto label_2a89e4;
        case 0x2a89e8u: goto label_2a89e8;
        case 0x2a89ecu: goto label_2a89ec;
        case 0x2a89f0u: goto label_2a89f0;
        case 0x2a89f4u: goto label_2a89f4;
        case 0x2a89f8u: goto label_2a89f8;
        case 0x2a89fcu: goto label_2a89fc;
        case 0x2a8a00u: goto label_2a8a00;
        case 0x2a8a04u: goto label_2a8a04;
        case 0x2a8a08u: goto label_2a8a08;
        case 0x2a8a0cu: goto label_2a8a0c;
        case 0x2a8a10u: goto label_2a8a10;
        case 0x2a8a14u: goto label_2a8a14;
        case 0x2a8a18u: goto label_2a8a18;
        case 0x2a8a1cu: goto label_2a8a1c;
        case 0x2a8a20u: goto label_2a8a20;
        case 0x2a8a24u: goto label_2a8a24;
        case 0x2a8a28u: goto label_2a8a28;
        case 0x2a8a2cu: goto label_2a8a2c;
        case 0x2a8a30u: goto label_2a8a30;
        case 0x2a8a34u: goto label_2a8a34;
        case 0x2a8a38u: goto label_2a8a38;
        case 0x2a8a3cu: goto label_2a8a3c;
        case 0x2a8a40u: goto label_2a8a40;
        case 0x2a8a44u: goto label_2a8a44;
        case 0x2a8a48u: goto label_2a8a48;
        case 0x2a8a4cu: goto label_2a8a4c;
        case 0x2a8a50u: goto label_2a8a50;
        case 0x2a8a54u: goto label_2a8a54;
        case 0x2a8a58u: goto label_2a8a58;
        case 0x2a8a5cu: goto label_2a8a5c;
        case 0x2a8a60u: goto label_2a8a60;
        case 0x2a8a64u: goto label_2a8a64;
        case 0x2a8a68u: goto label_2a8a68;
        case 0x2a8a6cu: goto label_2a8a6c;
        case 0x2a8a70u: goto label_2a8a70;
        case 0x2a8a74u: goto label_2a8a74;
        case 0x2a8a78u: goto label_2a8a78;
        case 0x2a8a7cu: goto label_2a8a7c;
        case 0x2a8a80u: goto label_2a8a80;
        case 0x2a8a84u: goto label_2a8a84;
        case 0x2a8a88u: goto label_2a8a88;
        case 0x2a8a8cu: goto label_2a8a8c;
        case 0x2a8a90u: goto label_2a8a90;
        case 0x2a8a94u: goto label_2a8a94;
        case 0x2a8a98u: goto label_2a8a98;
        case 0x2a8a9cu: goto label_2a8a9c;
        case 0x2a8aa0u: goto label_2a8aa0;
        case 0x2a8aa4u: goto label_2a8aa4;
        case 0x2a8aa8u: goto label_2a8aa8;
        case 0x2a8aacu: goto label_2a8aac;
        case 0x2a8ab0u: goto label_2a8ab0;
        case 0x2a8ab4u: goto label_2a8ab4;
        case 0x2a8ab8u: goto label_2a8ab8;
        case 0x2a8abcu: goto label_2a8abc;
        case 0x2a8ac0u: goto label_2a8ac0;
        case 0x2a8ac4u: goto label_2a8ac4;
        case 0x2a8ac8u: goto label_2a8ac8;
        case 0x2a8accu: goto label_2a8acc;
        case 0x2a8ad0u: goto label_2a8ad0;
        case 0x2a8ad4u: goto label_2a8ad4;
        case 0x2a8ad8u: goto label_2a8ad8;
        case 0x2a8adcu: goto label_2a8adc;
        case 0x2a8ae0u: goto label_2a8ae0;
        case 0x2a8ae4u: goto label_2a8ae4;
        case 0x2a8ae8u: goto label_2a8ae8;
        case 0x2a8aecu: goto label_2a8aec;
        case 0x2a8af0u: goto label_2a8af0;
        case 0x2a8af4u: goto label_2a8af4;
        case 0x2a8af8u: goto label_2a8af8;
        case 0x2a8afcu: goto label_2a8afc;
        case 0x2a8b00u: goto label_2a8b00;
        case 0x2a8b04u: goto label_2a8b04;
        case 0x2a8b08u: goto label_2a8b08;
        case 0x2a8b0cu: goto label_2a8b0c;
        case 0x2a8b10u: goto label_2a8b10;
        case 0x2a8b14u: goto label_2a8b14;
        case 0x2a8b18u: goto label_2a8b18;
        case 0x2a8b1cu: goto label_2a8b1c;
        case 0x2a8b20u: goto label_2a8b20;
        case 0x2a8b24u: goto label_2a8b24;
        case 0x2a8b28u: goto label_2a8b28;
        case 0x2a8b2cu: goto label_2a8b2c;
        case 0x2a8b30u: goto label_2a8b30;
        case 0x2a8b34u: goto label_2a8b34;
        case 0x2a8b38u: goto label_2a8b38;
        case 0x2a8b3cu: goto label_2a8b3c;
        case 0x2a8b40u: goto label_2a8b40;
        case 0x2a8b44u: goto label_2a8b44;
        case 0x2a8b48u: goto label_2a8b48;
        case 0x2a8b4cu: goto label_2a8b4c;
        case 0x2a8b50u: goto label_2a8b50;
        case 0x2a8b54u: goto label_2a8b54;
        case 0x2a8b58u: goto label_2a8b58;
        case 0x2a8b5cu: goto label_2a8b5c;
        case 0x2a8b60u: goto label_2a8b60;
        case 0x2a8b64u: goto label_2a8b64;
        case 0x2a8b68u: goto label_2a8b68;
        case 0x2a8b6cu: goto label_2a8b6c;
        case 0x2a8b70u: goto label_2a8b70;
        case 0x2a8b74u: goto label_2a8b74;
        case 0x2a8b78u: goto label_2a8b78;
        case 0x2a8b7cu: goto label_2a8b7c;
        case 0x2a8b80u: goto label_2a8b80;
        case 0x2a8b84u: goto label_2a8b84;
        case 0x2a8b88u: goto label_2a8b88;
        case 0x2a8b8cu: goto label_2a8b8c;
        case 0x2a8b90u: goto label_2a8b90;
        case 0x2a8b94u: goto label_2a8b94;
        case 0x2a8b98u: goto label_2a8b98;
        case 0x2a8b9cu: goto label_2a8b9c;
        case 0x2a8ba0u: goto label_2a8ba0;
        case 0x2a8ba4u: goto label_2a8ba4;
        case 0x2a8ba8u: goto label_2a8ba8;
        case 0x2a8bacu: goto label_2a8bac;
        case 0x2a8bb0u: goto label_2a8bb0;
        case 0x2a8bb4u: goto label_2a8bb4;
        case 0x2a8bb8u: goto label_2a8bb8;
        case 0x2a8bbcu: goto label_2a8bbc;
        case 0x2a8bc0u: goto label_2a8bc0;
        case 0x2a8bc4u: goto label_2a8bc4;
        case 0x2a8bc8u: goto label_2a8bc8;
        case 0x2a8bccu: goto label_2a8bcc;
        case 0x2a8bd0u: goto label_2a8bd0;
        case 0x2a8bd4u: goto label_2a8bd4;
        case 0x2a8bd8u: goto label_2a8bd8;
        case 0x2a8bdcu: goto label_2a8bdc;
        case 0x2a8be0u: goto label_2a8be0;
        case 0x2a8be4u: goto label_2a8be4;
        case 0x2a8be8u: goto label_2a8be8;
        case 0x2a8becu: goto label_2a8bec;
        case 0x2a8bf0u: goto label_2a8bf0;
        case 0x2a8bf4u: goto label_2a8bf4;
        case 0x2a8bf8u: goto label_2a8bf8;
        case 0x2a8bfcu: goto label_2a8bfc;
        case 0x2a8c00u: goto label_2a8c00;
        case 0x2a8c04u: goto label_2a8c04;
        case 0x2a8c08u: goto label_2a8c08;
        case 0x2a8c0cu: goto label_2a8c0c;
        case 0x2a8c10u: goto label_2a8c10;
        case 0x2a8c14u: goto label_2a8c14;
        case 0x2a8c18u: goto label_2a8c18;
        case 0x2a8c1cu: goto label_2a8c1c;
        case 0x2a8c20u: goto label_2a8c20;
        case 0x2a8c24u: goto label_2a8c24;
        case 0x2a8c28u: goto label_2a8c28;
        case 0x2a8c2cu: goto label_2a8c2c;
        case 0x2a8c30u: goto label_2a8c30;
        case 0x2a8c34u: goto label_2a8c34;
        case 0x2a8c38u: goto label_2a8c38;
        case 0x2a8c3cu: goto label_2a8c3c;
        case 0x2a8c40u: goto label_2a8c40;
        case 0x2a8c44u: goto label_2a8c44;
        case 0x2a8c48u: goto label_2a8c48;
        case 0x2a8c4cu: goto label_2a8c4c;
        case 0x2a8c50u: goto label_2a8c50;
        case 0x2a8c54u: goto label_2a8c54;
        case 0x2a8c58u: goto label_2a8c58;
        case 0x2a8c5cu: goto label_2a8c5c;
        case 0x2a8c60u: goto label_2a8c60;
        case 0x2a8c64u: goto label_2a8c64;
        case 0x2a8c68u: goto label_2a8c68;
        case 0x2a8c6cu: goto label_2a8c6c;
        case 0x2a8c70u: goto label_2a8c70;
        case 0x2a8c74u: goto label_2a8c74;
        case 0x2a8c78u: goto label_2a8c78;
        case 0x2a8c7cu: goto label_2a8c7c;
        case 0x2a8c80u: goto label_2a8c80;
        case 0x2a8c84u: goto label_2a8c84;
        case 0x2a8c88u: goto label_2a8c88;
        case 0x2a8c8cu: goto label_2a8c8c;
        case 0x2a8c90u: goto label_2a8c90;
        case 0x2a8c94u: goto label_2a8c94;
        case 0x2a8c98u: goto label_2a8c98;
        case 0x2a8c9cu: goto label_2a8c9c;
        case 0x2a8ca0u: goto label_2a8ca0;
        case 0x2a8ca4u: goto label_2a8ca4;
        case 0x2a8ca8u: goto label_2a8ca8;
        case 0x2a8cacu: goto label_2a8cac;
        case 0x2a8cb0u: goto label_2a8cb0;
        case 0x2a8cb4u: goto label_2a8cb4;
        case 0x2a8cb8u: goto label_2a8cb8;
        case 0x2a8cbcu: goto label_2a8cbc;
        default: break;
    }

    ctx->pc = 0x2a88e0u;

label_2a88e0:
    // 0x2a88e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a88e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a88e4:
    // 0x2a88e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a88e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a88e8:
    // 0x2a88e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a88e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a88ec:
    // 0x2a88ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a88ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a88f0:
    // 0x2a88f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a88f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a88f4:
    // 0x2a88f4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2a88f8:
    if (ctx->pc == 0x2A88F8u) {
        ctx->pc = 0x2A88F8u;
            // 0x2a88f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A88FCu;
        goto label_2a88fc;
    }
    ctx->pc = 0x2A88F4u;
    {
        const bool branch_taken_0x2a88f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A88F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88F4u;
            // 0x2a88f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88f4) {
            ctx->pc = 0x2A8954u;
            goto label_2a8954;
        }
    }
    ctx->pc = 0x2A88FCu;
label_2a88fc:
    // 0x2a88fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a8900:
    // 0x2a8900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a8900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a8904:
    // 0x2a8904: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x2a8904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
label_2a8908:
    // 0x2a8908: 0x2442fbec  addiu       $v0, $v0, -0x414
    ctx->pc = 0x2a8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966252));
label_2a890c:
    // 0x2a890c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a890cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2a8910:
    // 0x2a8910: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a8910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2a8914:
    // 0x2a8914: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a8914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2a8918:
    // 0x2a8918: 0xc0aa9e4  jal         func_2AA790
label_2a891c:
    if (ctx->pc == 0x2A891Cu) {
        ctx->pc = 0x2A891Cu;
            // 0x2a891c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8920u;
        goto label_2a8920;
    }
    ctx->pc = 0x2A8918u;
    SET_GPR_U32(ctx, 31, 0x2A8920u);
    ctx->pc = 0x2A891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8918u;
            // 0x2a891c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA790u;
    if (runtime->hasFunction(0x2AA790u)) {
        auto targetFn = runtime->lookupFunction(0x2AA790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8920u; }
        if (ctx->pc != 0x2A8920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA790_0x2aa790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8920u; }
        if (ctx->pc != 0x2A8920u) { return; }
    }
    ctx->pc = 0x2A8920u;
label_2a8920:
    // 0x2a8920: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_2a8924:
    if (ctx->pc == 0x2A8924u) {
        ctx->pc = 0x2A8924u;
            // 0x2a8924: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2A8928u;
        goto label_2a8928;
    }
    ctx->pc = 0x2A8920u;
    {
        const bool branch_taken_0x2a8920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8920) {
            ctx->pc = 0x2A8924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8920u;
            // 0x2a8924: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8940u;
            goto label_2a8940;
        }
    }
    ctx->pc = 0x2A8928u;
label_2a8928:
    // 0x2a8928: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a8928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a892c:
    // 0x2a892c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a8930:
    // 0x2a8930: 0x2463fc68  addiu       $v1, $v1, -0x398
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966376));
label_2a8934:
    // 0x2a8934: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a8934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2a8938:
    // 0x2a8938: 0xac40a348  sw          $zero, -0x5CB8($v0)
    ctx->pc = 0x2a8938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943560), GPR_U32(ctx, 0));
label_2a893c:
    // 0x2a893c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2a893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2a8940:
    // 0x2a8940: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a8940u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a8944:
    // 0x2a8944: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2a8948:
    if (ctx->pc == 0x2A8948u) {
        ctx->pc = 0x2A8948u;
            // 0x2a8948: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A894Cu;
        goto label_2a894c;
    }
    ctx->pc = 0x2A8944u;
    {
        const bool branch_taken_0x2a8944 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a8944) {
            ctx->pc = 0x2A8948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8944u;
            // 0x2a8948: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8958u;
            goto label_2a8958;
        }
    }
    ctx->pc = 0x2A894Cu;
label_2a894c:
    // 0x2a894c: 0xc0400a8  jal         func_1002A0
label_2a8950:
    if (ctx->pc == 0x2A8950u) {
        ctx->pc = 0x2A8950u;
            // 0x2a8950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8954u;
        goto label_2a8954;
    }
    ctx->pc = 0x2A894Cu;
    SET_GPR_U32(ctx, 31, 0x2A8954u);
    ctx->pc = 0x2A8950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A894Cu;
            // 0x2a8950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8954u; }
        if (ctx->pc != 0x2A8954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8954u; }
        if (ctx->pc != 0x2A8954u) { return; }
    }
    ctx->pc = 0x2A8954u;
label_2a8954:
    // 0x2a8954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8958:
    // 0x2a8958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a895c:
    // 0x2a895c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a895cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8960:
    // 0x2a8960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8964:
    // 0x2a8964: 0x3e00008  jr          $ra
label_2a8968:
    if (ctx->pc == 0x2A8968u) {
        ctx->pc = 0x2A8968u;
            // 0x2a8968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A896Cu;
        goto label_2a896c;
    }
    ctx->pc = 0x2A8964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8964u;
            // 0x2a8968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A896Cu;
label_2a896c:
    // 0x2a896c: 0x0  nop
    ctx->pc = 0x2a896cu;
    // NOP
label_2a8970:
    // 0x2a8970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a8974:
    // 0x2a8974: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a8974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a8978:
    // 0x2a8978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a897c:
    // 0x2a897c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8980:
    // 0x2a8980: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x2a8980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_2a8984:
    // 0x2a8984: 0x8c63e168  lw          $v1, -0x1E98($v1)
    ctx->pc = 0x2a8984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959464)));
label_2a8988:
    // 0x2a8988: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2a898c:
    // 0x2a898c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_2a8990:
    if (ctx->pc == 0x2A8990u) {
        ctx->pc = 0x2A8990u;
            // 0x2a8990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8994u;
        goto label_2a8994;
    }
    ctx->pc = 0x2A898Cu;
    {
        const bool branch_taken_0x2a898c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A898Cu;
            // 0x2a8990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a898c) {
            ctx->pc = 0x2A89E0u;
            goto label_2a89e0;
        }
    }
    ctx->pc = 0x2A8994u;
label_2a8994:
    // 0x2a8994: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a8994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a8998:
    // 0x2a8998: 0x8c63e170  lw          $v1, -0x1E90($v1)
    ctx->pc = 0x2a8998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959472)));
label_2a899c:
    // 0x2a899c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a899cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2a89a0:
    // 0x2a89a0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_2a89a4:
    if (ctx->pc == 0x2A89A4u) {
        ctx->pc = 0x2A89A4u;
            // 0x2a89a4: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x2A89A8u;
        goto label_2a89a8;
    }
    ctx->pc = 0x2A89A0u;
    {
        const bool branch_taken_0x2a89a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89a0) {
            ctx->pc = 0x2A89A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89A0u;
            // 0x2a89a4: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A89C8u;
            goto label_2a89c8;
        }
    }
    ctx->pc = 0x2A89A8u;
label_2a89a8:
    // 0x2a89a8: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a89ac:
    // 0x2a89ac: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
label_2a89b0:
    if (ctx->pc == 0x2A89B0u) {
        ctx->pc = 0x2A89B0u;
            // 0x2a89b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2A89B4u;
        goto label_2a89b4;
    }
    ctx->pc = 0x2A89ACu;
    {
        const bool branch_taken_0x2a89ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89ac) {
            ctx->pc = 0x2A89B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89ACu;
            // 0x2a89b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A89E4u;
            goto label_2a89e4;
        }
    }
    ctx->pc = 0x2A89B4u;
label_2a89b4:
    // 0x2a89b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a89b8:
    // 0x2a89b8: 0xc0fe48c  jal         func_3F9230
label_2a89bc:
    if (ctx->pc == 0x2A89BCu) {
        ctx->pc = 0x2A89BCu;
            // 0x2a89bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x2A89C0u;
        goto label_2a89c0;
    }
    ctx->pc = 0x2A89B8u;
    SET_GPR_U32(ctx, 31, 0x2A89C0u);
    ctx->pc = 0x2A89BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89B8u;
            // 0x2a89bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89C0u; }
        if (ctx->pc != 0x2A89C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89C0u; }
        if (ctx->pc != 0x2A89C0u) { return; }
    }
    ctx->pc = 0x2A89C0u;
label_2a89c0:
    // 0x2a89c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a89c4:
    if (ctx->pc == 0x2A89C4u) {
        ctx->pc = 0x2A89C4u;
            // 0x2a89c4: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x2A89C8u;
        goto label_2a89c8;
    }
    ctx->pc = 0x2A89C0u;
    {
        const bool branch_taken_0x2a89c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A89C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89C0u;
            // 0x2a89c4: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89c0) {
            ctx->pc = 0x2A89E0u;
            goto label_2a89e0;
        }
    }
    ctx->pc = 0x2A89C8u;
label_2a89c8:
    // 0x2a89c8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2a89cc:
    if (ctx->pc == 0x2A89CCu) {
        ctx->pc = 0x2A89D0u;
        goto label_2a89d0;
    }
    ctx->pc = 0x2A89C8u;
    {
        const bool branch_taken_0x2a89c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89c8) {
            ctx->pc = 0x2A89E0u;
            goto label_2a89e0;
        }
    }
    ctx->pc = 0x2A89D0u;
label_2a89d0:
    // 0x2a89d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a89d4:
    // 0x2a89d4: 0xc0fe4e8  jal         func_3F93A0
label_2a89d8:
    if (ctx->pc == 0x2A89D8u) {
        ctx->pc = 0x2A89D8u;
            // 0x2a89d8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x2A89DCu;
        goto label_2a89dc;
    }
    ctx->pc = 0x2A89D4u;
    SET_GPR_U32(ctx, 31, 0x2A89DCu);
    ctx->pc = 0x2A89D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89D4u;
            // 0x2a89d8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89DCu; }
        if (ctx->pc != 0x2A89DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89DCu; }
        if (ctx->pc != 0x2A89DCu) { return; }
    }
    ctx->pc = 0x2A89DCu;
label_2a89dc:
    // 0x2a89dc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2a89dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2a89e0:
    // 0x2a89e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a89e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a89e4:
    // 0x2a89e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a89e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a89e8:
    // 0x2a89e8: 0x3e00008  jr          $ra
label_2a89ec:
    if (ctx->pc == 0x2A89ECu) {
        ctx->pc = 0x2A89ECu;
            // 0x2a89ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A89F0u;
        goto label_2a89f0;
    }
    ctx->pc = 0x2A89E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89E8u;
            // 0x2a89ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A89F0u;
label_2a89f0:
    // 0x2a89f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a89f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a89f4:
    // 0x2a89f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a89f8:
    // 0x2a89f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a89f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a89fc:
    // 0x2a89fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a89fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8a00:
    // 0x2a8a00: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2a8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_2a8a04:
    // 0x2a8a04: 0x8c42e158  lw          $v0, -0x1EA8($v0)
    ctx->pc = 0x2a8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959448)));
label_2a8a08:
    // 0x2a8a08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a8a0c:
    // 0x2a8a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a8a10:
    if (ctx->pc == 0x2A8A10u) {
        ctx->pc = 0x2A8A10u;
            // 0x2a8a10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A14u;
        goto label_2a8a14;
    }
    ctx->pc = 0x2A8A0Cu;
    {
        const bool branch_taken_0x2a8a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A0Cu;
            // 0x2a8a10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a0c) {
            ctx->pc = 0x2A8A1Cu;
            goto label_2a8a1c;
        }
    }
    ctx->pc = 0x2A8A14u;
label_2a8a14:
    // 0x2a8a14: 0x10000014  b           . + 4 + (0x14 << 2)
label_2a8a18:
    if (ctx->pc == 0x2A8A18u) {
        ctx->pc = 0x2A8A18u;
            // 0x2a8a18: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x2A8A1Cu;
        goto label_2a8a1c;
    }
    ctx->pc = 0x2A8A14u;
    {
        const bool branch_taken_0x2a8a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A14u;
            // 0x2a8a18: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a14) {
            ctx->pc = 0x2A8A68u;
            goto label_2a8a68;
        }
    }
    ctx->pc = 0x2A8A1Cu;
label_2a8a1c:
    // 0x2a8a1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a8a20:
    // 0x2a8a20: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2a8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2a8a24:
    // 0x2a8a24: 0x8c42e160  lw          $v0, -0x1EA0($v0)
    ctx->pc = 0x2a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959456)));
label_2a8a28:
    // 0x2a8a28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a8a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a8a2c:
    // 0x2a8a2c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2a8a30:
    if (ctx->pc == 0x2A8A30u) {
        ctx->pc = 0x2A8A30u;
            // 0x2a8a30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A34u;
        goto label_2a8a34;
    }
    ctx->pc = 0x2A8A2Cu;
    {
        const bool branch_taken_0x2a8a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8a2c) {
            ctx->pc = 0x2A8A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A2Cu;
            // 0x2a8a30: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8A50u;
            goto label_2a8a50;
        }
    }
    ctx->pc = 0x2A8A34u;
label_2a8a34:
    // 0x2a8a34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a8a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a8a38:
    // 0x2a8a38: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a8a3c:
    // 0x2a8a3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a8a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8a40:
    // 0x2a8a40: 0xc0400c4  jal         func_100310
label_2a8a44:
    if (ctx->pc == 0x2A8A44u) {
        ctx->pc = 0x2A8A44u;
            // 0x2a8a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A48u;
        goto label_2a8a48;
    }
    ctx->pc = 0x2A8A40u;
    SET_GPR_U32(ctx, 31, 0x2A8A48u);
    ctx->pc = 0x2A8A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A40u;
            // 0x2a8a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A48u; }
        if (ctx->pc != 0x2A8A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A48u; }
        if (ctx->pc != 0x2A8A48u) { return; }
    }
    ctx->pc = 0x2A8A48u;
label_2a8a48:
    // 0x2a8a48: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a8a4c:
    if (ctx->pc == 0x2A8A4Cu) {
        ctx->pc = 0x2A8A4Cu;
            // 0x2a8a4c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x2A8A50u;
        goto label_2a8a50;
    }
    ctx->pc = 0x2A8A48u;
    {
        const bool branch_taken_0x2a8a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A48u;
            // 0x2a8a4c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a48) {
            ctx->pc = 0x2A8A64u;
            goto label_2a8a64;
        }
    }
    ctx->pc = 0x2A8A50u;
label_2a8a50:
    // 0x2a8a50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2a8a54:
    // 0x2a8a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a8a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8a58:
    // 0x2a8a58: 0xc0400c4  jal         func_100310
label_2a8a5c:
    if (ctx->pc == 0x2A8A5Cu) {
        ctx->pc = 0x2A8A5Cu;
            // 0x2a8a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A60u;
        goto label_2a8a60;
    }
    ctx->pc = 0x2A8A58u;
    SET_GPR_U32(ctx, 31, 0x2A8A60u);
    ctx->pc = 0x2A8A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A58u;
            // 0x2a8a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A60u; }
        if (ctx->pc != 0x2A8A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A60u; }
        if (ctx->pc != 0x2A8A60u) { return; }
    }
    ctx->pc = 0x2A8A60u;
label_2a8a60:
    // 0x2a8a60: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2a8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2a8a64:
    // 0x2a8a64: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2a8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a8a68:
    // 0x2a8a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8a6c:
    // 0x2a8a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8a70:
    // 0x2a8a70: 0x3e00008  jr          $ra
label_2a8a74:
    if (ctx->pc == 0x2A8A74u) {
        ctx->pc = 0x2A8A74u;
            // 0x2a8a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A8A78u;
        goto label_2a8a78;
    }
    ctx->pc = 0x2A8A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A70u;
            // 0x2a8a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8A78u;
label_2a8a78:
    // 0x2a8a78: 0x0  nop
    ctx->pc = 0x2a8a78u;
    // NOP
label_2a8a7c:
    // 0x2a8a7c: 0x0  nop
    ctx->pc = 0x2a8a7cu;
    // NOP
label_2a8a80:
    // 0x2a8a80: 0x805a9b8  j           func_16A6E0
label_2a8a84:
    if (ctx->pc == 0x2A8A84u) {
        ctx->pc = 0x2A8A84u;
            // 0x2a8a84: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A88u;
        goto label_2a8a88;
    }
    ctx->pc = 0x2A8A80u;
    ctx->pc = 0x2A8A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A80u;
            // 0x2a8a84: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A6E0u;
    {
        auto targetFn = runtime->lookupFunction(0x16A6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2A8A88u;
label_2a8a88:
    // 0x2a8a88: 0x0  nop
    ctx->pc = 0x2a8a88u;
    // NOP
label_2a8a8c:
    // 0x2a8a8c: 0x0  nop
    ctx->pc = 0x2a8a8cu;
    // NOP
label_2a8a90:
    // 0x2a8a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a8a94:
    // 0x2a8a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a8a98:
    // 0x2a8a98: 0xc05abc4  jal         func_16AF10
label_2a8a9c:
    if (ctx->pc == 0x2A8A9Cu) {
        ctx->pc = 0x2A8A9Cu;
            // 0x2a8a9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AA0u;
        goto label_2a8aa0;
    }
    ctx->pc = 0x2A8A98u;
    SET_GPR_U32(ctx, 31, 0x2A8AA0u);
    ctx->pc = 0x2A8A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A98u;
            // 0x2a8a9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF10u;
    if (runtime->hasFunction(0x16AF10u)) {
        auto targetFn = runtime->lookupFunction(0x16AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AA0u; }
        if (ctx->pc != 0x2A8AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF10_0x16af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AA0u; }
        if (ctx->pc != 0x2A8AA0u) { return; }
    }
    ctx->pc = 0x2A8AA0u;
label_2a8aa0:
    // 0x2a8aa0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_2a8aa4:
    if (ctx->pc == 0x2A8AA4u) {
        ctx->pc = 0x2A8AA4u;
            // 0x2a8aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AA8u;
        goto label_2a8aa8;
    }
    ctx->pc = 0x2A8AA0u;
    {
        const bool branch_taken_0x2a8aa0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a8aa0) {
            ctx->pc = 0x2A8AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AA0u;
            // 0x2a8aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8AA8u;
            goto label_2a8aa8;
        }
    }
    ctx->pc = 0x2A8AA8u;
label_2a8aa8:
    // 0x2a8aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8aac:
    // 0x2a8aac: 0x3e00008  jr          $ra
label_2a8ab0:
    if (ctx->pc == 0x2A8AB0u) {
        ctx->pc = 0x2A8AB0u;
            // 0x2a8ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A8AB4u;
        goto label_2a8ab4;
    }
    ctx->pc = 0x2A8AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AACu;
            // 0x2a8ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8AB4u;
label_2a8ab4:
    // 0x2a8ab4: 0x0  nop
    ctx->pc = 0x2a8ab4u;
    // NOP
label_2a8ab8:
    // 0x2a8ab8: 0x0  nop
    ctx->pc = 0x2a8ab8u;
    // NOP
label_2a8abc:
    // 0x2a8abc: 0x0  nop
    ctx->pc = 0x2a8abcu;
    // NOP
label_2a8ac0:
    // 0x2a8ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a8ac4:
    // 0x2a8ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a8ac8:
    // 0x2a8ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8acc:
    // 0x2a8acc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a8accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ad0:
    // 0x2a8ad0: 0xc05abde  jal         func_16AF78
label_2a8ad4:
    if (ctx->pc == 0x2A8AD4u) {
        ctx->pc = 0x2A8AD4u;
            // 0x2a8ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AD8u;
        goto label_2a8ad8;
    }
    ctx->pc = 0x2A8AD0u;
    SET_GPR_U32(ctx, 31, 0x2A8AD8u);
    ctx->pc = 0x2A8AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AD0u;
            // 0x2a8ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF78u;
    if (runtime->hasFunction(0x16AF78u)) {
        auto targetFn = runtime->lookupFunction(0x16AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AD8u; }
        if (ctx->pc != 0x2A8AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF78_0x16af78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AD8u; }
        if (ctx->pc != 0x2A8AD8u) { return; }
    }
    ctx->pc = 0x2A8AD8u;
label_2a8ad8:
    // 0x2a8ad8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8adc:
    // 0x2a8adc: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
label_2a8ae0:
    if (ctx->pc == 0x2A8AE0u) {
        ctx->pc = 0x2A8AE0u;
            // 0x2a8ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A8AE4u;
        goto label_2a8ae4;
    }
    ctx->pc = 0x2A8ADCu;
    {
        const bool branch_taken_0x2a8adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8adc) {
            ctx->pc = 0x2A8AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8ADCu;
            // 0x2a8ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8B28u;
            goto label_2a8b28;
        }
    }
    ctx->pc = 0x2A8AE4u;
label_2a8ae4:
    // 0x2a8ae4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8ae8:
    // 0x2a8ae8: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
label_2a8aec:
    if (ctx->pc == 0x2A8AECu) {
        ctx->pc = 0x2A8AECu;
            // 0x2a8aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AF0u;
        goto label_2a8af0;
    }
    ctx->pc = 0x2A8AE8u;
    {
        const bool branch_taken_0x2a8ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8ae8) {
            ctx->pc = 0x2A8AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AE8u;
            // 0x2a8aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8B28u;
            goto label_2a8b28;
        }
    }
    ctx->pc = 0x2A8AF0u;
label_2a8af0:
    // 0x2a8af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8af4:
    // 0x2a8af4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2a8af8:
    if (ctx->pc == 0x2A8AF8u) {
        ctx->pc = 0x2A8AFCu;
        goto label_2a8afc;
    }
    ctx->pc = 0x2A8AF4u;
    {
        const bool branch_taken_0x2a8af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8af4) {
            ctx->pc = 0x2A8B08u;
            goto label_2a8b08;
        }
    }
    ctx->pc = 0x2A8AFCu;
label_2a8afc:
    // 0x2a8afc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a8b00:
    if (ctx->pc == 0x2A8B00u) {
        ctx->pc = 0x2A8B00u;
            // 0x2a8b00: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->pc = 0x2A8B04u;
        goto label_2a8b04;
    }
    ctx->pc = 0x2A8AFCu;
    {
        const bool branch_taken_0x2a8afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AFCu;
            // 0x2a8b00: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8afc) {
            ctx->pc = 0x2A8B10u;
            goto label_2a8b10;
        }
    }
    ctx->pc = 0x2A8B04u;
label_2a8b04:
    // 0x2a8b04: 0x0  nop
    ctx->pc = 0x2a8b04u;
    // NOP
label_2a8b08:
    // 0x2a8b08: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a8b0c:
    if (ctx->pc == 0x2A8B0Cu) {
        ctx->pc = 0x2A8B0Cu;
            // 0x2a8b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B10u;
        goto label_2a8b10;
    }
    ctx->pc = 0x2A8B08u;
    {
        const bool branch_taken_0x2a8b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B08u;
            // 0x2a8b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b08) {
            ctx->pc = 0x2A8B28u;
            goto label_2a8b28;
        }
    }
    ctx->pc = 0x2A8B10u;
label_2a8b10:
    // 0x2a8b10: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x2a8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_2a8b14:
    // 0x2a8b14: 0x40f809  jalr        $v0
label_2a8b18:
    if (ctx->pc == 0x2A8B18u) {
        ctx->pc = 0x2A8B18u;
            // 0x2a8b18: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2A8B1Cu;
        goto label_2a8b1c;
    }
    ctx->pc = 0x2A8B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8B1Cu);
        ctx->pc = 0x2A8B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B14u;
            // 0x2a8b18: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A8B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B1Cu; }
            if (ctx->pc != 0x2A8B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A8B1Cu;
label_2a8b1c:
    // 0x2a8b1c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_2a8b20:
    if (ctx->pc == 0x2A8B20u) {
        ctx->pc = 0x2A8B24u;
        goto label_2a8b24;
    }
    ctx->pc = 0x2A8B1Cu;
    {
        const bool branch_taken_0x2a8b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8b1c) {
            ctx->pc = 0x2A8AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8ad0;
        }
    }
    ctx->pc = 0x2A8B24u;
label_2a8b24:
    // 0x2a8b24: 0x0  nop
    ctx->pc = 0x2a8b24u;
    // NOP
label_2a8b28:
    // 0x2a8b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8b2c:
    // 0x2a8b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8b30:
    // 0x2a8b30: 0x3e00008  jr          $ra
label_2a8b34:
    if (ctx->pc == 0x2A8B34u) {
        ctx->pc = 0x2A8B34u;
            // 0x2a8b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A8B38u;
        goto label_2a8b38;
    }
    ctx->pc = 0x2A8B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B30u;
            // 0x2a8b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8B38u;
label_2a8b38:
    // 0x2a8b38: 0x0  nop
    ctx->pc = 0x2a8b38u;
    // NOP
label_2a8b3c:
    // 0x2a8b3c: 0x0  nop
    ctx->pc = 0x2a8b3cu;
    // NOP
label_2a8b40:
    // 0x2a8b40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a8b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a8b44:
    // 0x2a8b44: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x2a8b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_2a8b48:
    // 0x2a8b48: 0x3200008  jr          $t9
label_2a8b4c:
    if (ctx->pc == 0x2A8B4Cu) {
        ctx->pc = 0x2A8B50u;
        goto label_2a8b50;
    }
    ctx->pc = 0x2A8B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8B50u;
label_2a8b50:
    // 0x2a8b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a8b54:
    // 0x2a8b54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b58:
    // 0x2a8b58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a8b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b5c:
    // 0x2a8b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a8b60:
    // 0x2a8b60: 0xc05a992  jal         func_16A648
label_2a8b64:
    if (ctx->pc == 0x2A8B64u) {
        ctx->pc = 0x2A8B64u;
            // 0x2a8b64: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B68u;
        goto label_2a8b68;
    }
    ctx->pc = 0x2A8B60u;
    SET_GPR_U32(ctx, 31, 0x2A8B68u);
    ctx->pc = 0x2A8B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B60u;
            // 0x2a8b64: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A648u;
    if (runtime->hasFunction(0x16A648u)) {
        auto targetFn = runtime->lookupFunction(0x16A648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B68u; }
        if (ctx->pc != 0x2A8B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A648_0x16a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B68u; }
        if (ctx->pc != 0x2A8B68u) { return; }
    }
    ctx->pc = 0x2A8B68u;
label_2a8b68:
    // 0x2a8b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8b6c:
    // 0x2a8b6c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2a8b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a8b70:
    // 0x2a8b70: 0x3e00008  jr          $ra
label_2a8b74:
    if (ctx->pc == 0x2A8B74u) {
        ctx->pc = 0x2A8B74u;
            // 0x2a8b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A8B78u;
        goto label_2a8b78;
    }
    ctx->pc = 0x2A8B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B70u;
            // 0x2a8b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8B78u;
label_2a8b78:
    // 0x2a8b78: 0x0  nop
    ctx->pc = 0x2a8b78u;
    // NOP
label_2a8b7c:
    // 0x2a8b7c: 0x0  nop
    ctx->pc = 0x2a8b7cu;
    // NOP
label_2a8b80:
    // 0x2a8b80: 0x805ab1c  j           func_16AC70
label_2a8b84:
    if (ctx->pc == 0x2A8B84u) {
        ctx->pc = 0x2A8B84u;
            // 0x2a8b84: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B88u;
        goto label_2a8b88;
    }
    ctx->pc = 0x2A8B80u;
    ctx->pc = 0x2A8B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B80u;
            // 0x2a8b84: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AC70u;
    if (runtime->hasFunction(0x16AC70u)) {
        auto targetFn = runtime->lookupFunction(0x16AC70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016AC70_0x16ac70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A8B88u;
label_2a8b88:
    // 0x2a8b88: 0x0  nop
    ctx->pc = 0x2a8b88u;
    // NOP
label_2a8b8c:
    // 0x2a8b8c: 0x0  nop
    ctx->pc = 0x2a8b8cu;
    // NOP
label_2a8b90:
    // 0x2a8b90: 0x805a804  j           func_16A010
label_2a8b94:
    if (ctx->pc == 0x2A8B94u) {
        ctx->pc = 0x2A8B94u;
            // 0x2a8b94: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x2A8B98u;
        goto label_2a8b98;
    }
    ctx->pc = 0x2A8B90u;
    ctx->pc = 0x2A8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B90u;
            // 0x2a8b94: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016A010_0x16a010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A8B98u;
label_2a8b98:
    // 0x2a8b98: 0x0  nop
    ctx->pc = 0x2a8b98u;
    // NOP
label_2a8b9c:
    // 0x2a8b9c: 0x0  nop
    ctx->pc = 0x2a8b9cu;
    // NOP
label_2a8ba0:
    // 0x2a8ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a8ba4:
    // 0x2a8ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a8ba8:
    // 0x2a8ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8bac:
    // 0x2a8bac: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2a8bb0:
    // 0x2a8bb0: 0xc05a6a4  jal         func_169A90
label_2a8bb4:
    if (ctx->pc == 0x2A8BB4u) {
        ctx->pc = 0x2A8BB4u;
            // 0x2a8bb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BB8u;
        goto label_2a8bb8;
    }
    ctx->pc = 0x2A8BB0u;
    SET_GPR_U32(ctx, 31, 0x2A8BB8u);
    ctx->pc = 0x2A8BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BB0u;
            // 0x2a8bb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169A90u;
    if (runtime->hasFunction(0x169A90u)) {
        auto targetFn = runtime->lookupFunction(0x169A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8BB8u; }
        if (ctx->pc != 0x2A8BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169A90_0x169a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8BB8u; }
        if (ctx->pc != 0x2A8BB8u) { return; }
    }
    ctx->pc = 0x2A8BB8u;
label_2a8bb8:
    // 0x2a8bb8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a8bbc:
    if (ctx->pc == 0x2A8BBCu) {
        ctx->pc = 0x2A8BBCu;
            // 0x2a8bbc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2A8BC0u;
        goto label_2a8bc0;
    }
    ctx->pc = 0x2A8BB8u;
    {
        const bool branch_taken_0x2a8bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8bb8) {
            ctx->pc = 0x2A8BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BB8u;
            // 0x2a8bbc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8BC8u;
            goto label_2a8bc8;
        }
    }
    ctx->pc = 0x2A8BC0u;
label_2a8bc0:
    // 0x2a8bc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a8bc4:
    if (ctx->pc == 0x2A8BC4u) {
        ctx->pc = 0x2A8BC4u;
            // 0x2a8bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A8BC8u;
        goto label_2a8bc8;
    }
    ctx->pc = 0x2A8BC0u;
    {
        const bool branch_taken_0x2a8bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BC0u;
            // 0x2a8bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bc0) {
            ctx->pc = 0x2A8BDCu;
            goto label_2a8bdc;
        }
    }
    ctx->pc = 0x2A8BC8u;
label_2a8bc8:
    // 0x2a8bc8: 0xc05abde  jal         func_16AF78
label_2a8bcc:
    if (ctx->pc == 0x2A8BCCu) {
        ctx->pc = 0x2A8BD0u;
        goto label_2a8bd0;
    }
    ctx->pc = 0x2A8BC8u;
    SET_GPR_U32(ctx, 31, 0x2A8BD0u);
    ctx->pc = 0x16AF78u;
    if (runtime->hasFunction(0x16AF78u)) {
        auto targetFn = runtime->lookupFunction(0x16AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8BD0u; }
        if (ctx->pc != 0x2A8BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF78_0x16af78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8BD0u; }
        if (ctx->pc != 0x2A8BD0u) { return; }
    }
    ctx->pc = 0x2A8BD0u;
label_2a8bd0:
    // 0x2a8bd0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2a8bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2a8bd4:
    // 0x2a8bd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a8bd8:
    // 0x2a8bd8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2a8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2a8bdc:
    // 0x2a8bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8be0:
    // 0x2a8be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8be4:
    // 0x2a8be4: 0x3e00008  jr          $ra
label_2a8be8:
    if (ctx->pc == 0x2A8BE8u) {
        ctx->pc = 0x2A8BE8u;
            // 0x2a8be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A8BECu;
        goto label_2a8bec;
    }
    ctx->pc = 0x2A8BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BE4u;
            // 0x2a8be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8BECu;
label_2a8bec:
    // 0x2a8bec: 0x0  nop
    ctx->pc = 0x2a8becu;
    // NOP
label_2a8bf0:
    // 0x2a8bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a8bf4:
    // 0x2a8bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a8bf8:
    // 0x2a8bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8bfc:
    // 0x2a8bfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a8bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c00:
    // 0x2a8c00: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2a8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2a8c04:
    // 0x2a8c04: 0xc05a668  jal         func_1699A0
label_2a8c08:
    if (ctx->pc == 0x2A8C08u) {
        ctx->pc = 0x2A8C08u;
            // 0x2a8c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C0Cu;
        goto label_2a8c0c;
    }
    ctx->pc = 0x2A8C04u;
    SET_GPR_U32(ctx, 31, 0x2A8C0Cu);
    ctx->pc = 0x2A8C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C04u;
            // 0x2a8c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1699A0u;
    if (runtime->hasFunction(0x1699A0u)) {
        auto targetFn = runtime->lookupFunction(0x1699A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C0Cu; }
        if (ctx->pc != 0x2A8C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001699A0_0x1699a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C0Cu; }
        if (ctx->pc != 0x2A8C0Cu) { return; }
    }
    ctx->pc = 0x2A8C0Cu;
label_2a8c0c:
    // 0x2a8c0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2a8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2a8c10:
    // 0x2a8c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8c14:
    // 0x2a8c14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a8c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a8c18:
    // 0x2a8c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8c1c:
    // 0x2a8c1c: 0x3e00008  jr          $ra
label_2a8c20:
    if (ctx->pc == 0x2A8C20u) {
        ctx->pc = 0x2A8C20u;
            // 0x2a8c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A8C24u;
        goto label_2a8c24;
    }
    ctx->pc = 0x2A8C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C1Cu;
            // 0x2a8c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8C24u;
label_2a8c24:
    // 0x2a8c24: 0x0  nop
    ctx->pc = 0x2a8c24u;
    // NOP
label_2a8c28:
    // 0x2a8c28: 0x0  nop
    ctx->pc = 0x2a8c28u;
    // NOP
label_2a8c2c:
    // 0x2a8c2c: 0x0  nop
    ctx->pc = 0x2a8c2cu;
    // NOP
label_2a8c30:
    // 0x2a8c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a8c34:
    // 0x2a8c34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a8c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c38:
    // 0x2a8c38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a8c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a8c3c:
    // 0x2a8c3c: 0x24050603  addiu       $a1, $zero, 0x603
    ctx->pc = 0x2a8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
label_2a8c40:
    // 0x2a8c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a8c44:
    // 0x2a8c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a8c48:
    // 0x2a8c48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a8c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c4c:
    // 0x2a8c4c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a8c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c50:
    // 0x2a8c50: 0x240601ff  addiu       $a2, $zero, 0x1FF
    ctx->pc = 0x2a8c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_2a8c54:
    // 0x2a8c54: 0xc04461c  jal         func_111870
label_2a8c58:
    if (ctx->pc == 0x2A8C58u) {
        ctx->pc = 0x2A8C58u;
            // 0x2a8c58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2A8C5Cu;
        goto label_2a8c5c;
    }
    ctx->pc = 0x2A8C54u;
    SET_GPR_U32(ctx, 31, 0x2A8C5Cu);
    ctx->pc = 0x2A8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C54u;
            // 0x2a8c58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111870u;
    if (runtime->hasFunction(0x111870u)) {
        auto targetFn = runtime->lookupFunction(0x111870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C5Cu; }
        if (ctx->pc != 0x2A8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111870_0x111870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C5Cu; }
        if (ctx->pc != 0x2A8C5Cu) { return; }
    }
    ctx->pc = 0x2A8C5Cu;
label_2a8c5c:
    // 0x2a8c5c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2a8c60:
    if (ctx->pc == 0x2A8C60u) {
        ctx->pc = 0x2A8C60u;
            // 0x2a8c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C64u;
        goto label_2a8c64;
    }
    ctx->pc = 0x2A8C5Cu;
    {
        const bool branch_taken_0x2a8c5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A8C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C5Cu;
            // 0x2a8c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c5c) {
            ctx->pc = 0x2A8C6Cu;
            goto label_2a8c6c;
        }
    }
    ctx->pc = 0x2A8C64u;
label_2a8c64:
    // 0x2a8c64: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a8c68:
    if (ctx->pc == 0x2A8C68u) {
        ctx->pc = 0x2A8C68u;
            // 0x2a8c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C6Cu;
        goto label_2a8c6c;
    }
    ctx->pc = 0x2A8C64u;
    {
        const bool branch_taken_0x2a8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C64u;
            // 0x2a8c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c64) {
            ctx->pc = 0x2A8CA8u;
            goto label_2a8ca8;
        }
    }
    ctx->pc = 0x2A8C6Cu;
label_2a8c6c:
    // 0x2a8c6c: 0x262301ff  addiu       $v1, $s1, 0x1FF
    ctx->pc = 0x2a8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 511));
label_2a8c70:
    // 0x2a8c70: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x2a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
label_2a8c74:
    // 0x2a8c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a8c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c78:
    // 0x2a8c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c7c:
    // 0x2a8c7c: 0xc04484a  jal         func_112128
label_2a8c80:
    if (ctx->pc == 0x2A8C80u) {
        ctx->pc = 0x2A8C80u;
            // 0x2a8c80: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x2A8C84u;
        goto label_2a8c84;
    }
    ctx->pc = 0x2A8C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C84u);
    ctx->pc = 0x2A8C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C7Cu;
            // 0x2a8c80: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (runtime->hasFunction(0x112128u)) {
        auto targetFn = runtime->lookupFunction(0x112128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C84u; }
        if (ctx->pc != 0x2A8C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112128_0x112128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C84u; }
        if (ctx->pc != 0x2A8C84u) { return; }
    }
    ctx->pc = 0x2A8C84u;
label_2a8c84:
    // 0x2a8c84: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
label_2a8c88:
    if (ctx->pc == 0x2A8C88u) {
        ctx->pc = 0x2A8C88u;
            // 0x2a8c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C8Cu;
        goto label_2a8c8c;
    }
    ctx->pc = 0x2A8C84u;
    {
        const bool branch_taken_0x2a8c84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2a8c84) {
            ctx->pc = 0x2A8C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C84u;
            // 0x2a8c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8C9Cu;
            goto label_2a8c9c;
        }
    }
    ctx->pc = 0x2A8C8Cu;
label_2a8c8c:
    // 0x2a8c8c: 0xc0446c0  jal         func_111B00
label_2a8c90:
    if (ctx->pc == 0x2A8C90u) {
        ctx->pc = 0x2A8C90u;
            // 0x2a8c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C94u;
        goto label_2a8c94;
    }
    ctx->pc = 0x2A8C8Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C94u);
    ctx->pc = 0x2A8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C8Cu;
            // 0x2a8c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C94u; }
        if (ctx->pc != 0x2A8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8C94u; }
        if (ctx->pc != 0x2A8C94u) { return; }
    }
    ctx->pc = 0x2A8C94u;
label_2a8c94:
    // 0x2a8c94: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a8c98:
    if (ctx->pc == 0x2A8C98u) {
        ctx->pc = 0x2A8C98u;
            // 0x2a8c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C9Cu;
        goto label_2a8c9c;
    }
    ctx->pc = 0x2A8C94u;
    {
        const bool branch_taken_0x2a8c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8C94u;
            // 0x2a8c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c94) {
            ctx->pc = 0x2A8CA8u;
            goto label_2a8ca8;
        }
    }
    ctx->pc = 0x2A8C9Cu;
label_2a8c9c:
    // 0x2a8c9c: 0xc0446c0  jal         func_111B00
label_2a8ca0:
    if (ctx->pc == 0x2A8CA0u) {
        ctx->pc = 0x2A8CA4u;
        goto label_2a8ca4;
    }
    ctx->pc = 0x2A8C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A8CA4u);
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8CA4u; }
        if (ctx->pc != 0x2A8CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8CA4u; }
        if (ctx->pc != 0x2A8CA4u) { return; }
    }
    ctx->pc = 0x2A8CA4u;
label_2a8ca4:
    // 0x2a8ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8ca8:
    // 0x2a8ca8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a8ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8cac:
    // 0x2a8cac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a8cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a8cb0:
    // 0x2a8cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a8cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8cb4:
    // 0x2a8cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8cb8:
    // 0x2a8cb8: 0x3e00008  jr          $ra
label_2a8cbc:
    if (ctx->pc == 0x2A8CBCu) {
        ctx->pc = 0x2A8CBCu;
            // 0x2a8cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A8CC0u;
        goto label_fallthrough_0x2a8cb8;
    }
    ctx->pc = 0x2A8CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8CB8u;
            // 0x2a8cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a8cb8:
    ctx->pc = 0x2A8CC0u;
}
