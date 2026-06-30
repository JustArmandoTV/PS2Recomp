#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002429D0
// Address: 0x2429d0 - 0x242f00
void sub_002429D0_0x2429d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002429D0_0x2429d0");
#endif

    switch (ctx->pc) {
        case 0x2429d0u: goto label_2429d0;
        case 0x2429d4u: goto label_2429d4;
        case 0x2429d8u: goto label_2429d8;
        case 0x2429dcu: goto label_2429dc;
        case 0x2429e0u: goto label_2429e0;
        case 0x2429e4u: goto label_2429e4;
        case 0x2429e8u: goto label_2429e8;
        case 0x2429ecu: goto label_2429ec;
        case 0x2429f0u: goto label_2429f0;
        case 0x2429f4u: goto label_2429f4;
        case 0x2429f8u: goto label_2429f8;
        case 0x2429fcu: goto label_2429fc;
        case 0x242a00u: goto label_242a00;
        case 0x242a04u: goto label_242a04;
        case 0x242a08u: goto label_242a08;
        case 0x242a0cu: goto label_242a0c;
        case 0x242a10u: goto label_242a10;
        case 0x242a14u: goto label_242a14;
        case 0x242a18u: goto label_242a18;
        case 0x242a1cu: goto label_242a1c;
        case 0x242a20u: goto label_242a20;
        case 0x242a24u: goto label_242a24;
        case 0x242a28u: goto label_242a28;
        case 0x242a2cu: goto label_242a2c;
        case 0x242a30u: goto label_242a30;
        case 0x242a34u: goto label_242a34;
        case 0x242a38u: goto label_242a38;
        case 0x242a3cu: goto label_242a3c;
        case 0x242a40u: goto label_242a40;
        case 0x242a44u: goto label_242a44;
        case 0x242a48u: goto label_242a48;
        case 0x242a4cu: goto label_242a4c;
        case 0x242a50u: goto label_242a50;
        case 0x242a54u: goto label_242a54;
        case 0x242a58u: goto label_242a58;
        case 0x242a5cu: goto label_242a5c;
        case 0x242a60u: goto label_242a60;
        case 0x242a64u: goto label_242a64;
        case 0x242a68u: goto label_242a68;
        case 0x242a6cu: goto label_242a6c;
        case 0x242a70u: goto label_242a70;
        case 0x242a74u: goto label_242a74;
        case 0x242a78u: goto label_242a78;
        case 0x242a7cu: goto label_242a7c;
        case 0x242a80u: goto label_242a80;
        case 0x242a84u: goto label_242a84;
        case 0x242a88u: goto label_242a88;
        case 0x242a8cu: goto label_242a8c;
        case 0x242a90u: goto label_242a90;
        case 0x242a94u: goto label_242a94;
        case 0x242a98u: goto label_242a98;
        case 0x242a9cu: goto label_242a9c;
        case 0x242aa0u: goto label_242aa0;
        case 0x242aa4u: goto label_242aa4;
        case 0x242aa8u: goto label_242aa8;
        case 0x242aacu: goto label_242aac;
        case 0x242ab0u: goto label_242ab0;
        case 0x242ab4u: goto label_242ab4;
        case 0x242ab8u: goto label_242ab8;
        case 0x242abcu: goto label_242abc;
        case 0x242ac0u: goto label_242ac0;
        case 0x242ac4u: goto label_242ac4;
        case 0x242ac8u: goto label_242ac8;
        case 0x242accu: goto label_242acc;
        case 0x242ad0u: goto label_242ad0;
        case 0x242ad4u: goto label_242ad4;
        case 0x242ad8u: goto label_242ad8;
        case 0x242adcu: goto label_242adc;
        case 0x242ae0u: goto label_242ae0;
        case 0x242ae4u: goto label_242ae4;
        case 0x242ae8u: goto label_242ae8;
        case 0x242aecu: goto label_242aec;
        case 0x242af0u: goto label_242af0;
        case 0x242af4u: goto label_242af4;
        case 0x242af8u: goto label_242af8;
        case 0x242afcu: goto label_242afc;
        case 0x242b00u: goto label_242b00;
        case 0x242b04u: goto label_242b04;
        case 0x242b08u: goto label_242b08;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b10u: goto label_242b10;
        case 0x242b14u: goto label_242b14;
        case 0x242b18u: goto label_242b18;
        case 0x242b1cu: goto label_242b1c;
        case 0x242b20u: goto label_242b20;
        case 0x242b24u: goto label_242b24;
        case 0x242b28u: goto label_242b28;
        case 0x242b2cu: goto label_242b2c;
        case 0x242b30u: goto label_242b30;
        case 0x242b34u: goto label_242b34;
        case 0x242b38u: goto label_242b38;
        case 0x242b3cu: goto label_242b3c;
        case 0x242b40u: goto label_242b40;
        case 0x242b44u: goto label_242b44;
        case 0x242b48u: goto label_242b48;
        case 0x242b4cu: goto label_242b4c;
        case 0x242b50u: goto label_242b50;
        case 0x242b54u: goto label_242b54;
        case 0x242b58u: goto label_242b58;
        case 0x242b5cu: goto label_242b5c;
        case 0x242b60u: goto label_242b60;
        case 0x242b64u: goto label_242b64;
        case 0x242b68u: goto label_242b68;
        case 0x242b6cu: goto label_242b6c;
        case 0x242b70u: goto label_242b70;
        case 0x242b74u: goto label_242b74;
        case 0x242b78u: goto label_242b78;
        case 0x242b7cu: goto label_242b7c;
        case 0x242b80u: goto label_242b80;
        case 0x242b84u: goto label_242b84;
        case 0x242b88u: goto label_242b88;
        case 0x242b8cu: goto label_242b8c;
        case 0x242b90u: goto label_242b90;
        case 0x242b94u: goto label_242b94;
        case 0x242b98u: goto label_242b98;
        case 0x242b9cu: goto label_242b9c;
        case 0x242ba0u: goto label_242ba0;
        case 0x242ba4u: goto label_242ba4;
        case 0x242ba8u: goto label_242ba8;
        case 0x242bacu: goto label_242bac;
        case 0x242bb0u: goto label_242bb0;
        case 0x242bb4u: goto label_242bb4;
        case 0x242bb8u: goto label_242bb8;
        case 0x242bbcu: goto label_242bbc;
        case 0x242bc0u: goto label_242bc0;
        case 0x242bc4u: goto label_242bc4;
        case 0x242bc8u: goto label_242bc8;
        case 0x242bccu: goto label_242bcc;
        case 0x242bd0u: goto label_242bd0;
        case 0x242bd4u: goto label_242bd4;
        case 0x242bd8u: goto label_242bd8;
        case 0x242bdcu: goto label_242bdc;
        case 0x242be0u: goto label_242be0;
        case 0x242be4u: goto label_242be4;
        case 0x242be8u: goto label_242be8;
        case 0x242becu: goto label_242bec;
        case 0x242bf0u: goto label_242bf0;
        case 0x242bf4u: goto label_242bf4;
        case 0x242bf8u: goto label_242bf8;
        case 0x242bfcu: goto label_242bfc;
        case 0x242c00u: goto label_242c00;
        case 0x242c04u: goto label_242c04;
        case 0x242c08u: goto label_242c08;
        case 0x242c0cu: goto label_242c0c;
        case 0x242c10u: goto label_242c10;
        case 0x242c14u: goto label_242c14;
        case 0x242c18u: goto label_242c18;
        case 0x242c1cu: goto label_242c1c;
        case 0x242c20u: goto label_242c20;
        case 0x242c24u: goto label_242c24;
        case 0x242c28u: goto label_242c28;
        case 0x242c2cu: goto label_242c2c;
        case 0x242c30u: goto label_242c30;
        case 0x242c34u: goto label_242c34;
        case 0x242c38u: goto label_242c38;
        case 0x242c3cu: goto label_242c3c;
        case 0x242c40u: goto label_242c40;
        case 0x242c44u: goto label_242c44;
        case 0x242c48u: goto label_242c48;
        case 0x242c4cu: goto label_242c4c;
        case 0x242c50u: goto label_242c50;
        case 0x242c54u: goto label_242c54;
        case 0x242c58u: goto label_242c58;
        case 0x242c5cu: goto label_242c5c;
        case 0x242c60u: goto label_242c60;
        case 0x242c64u: goto label_242c64;
        case 0x242c68u: goto label_242c68;
        case 0x242c6cu: goto label_242c6c;
        case 0x242c70u: goto label_242c70;
        case 0x242c74u: goto label_242c74;
        case 0x242c78u: goto label_242c78;
        case 0x242c7cu: goto label_242c7c;
        case 0x242c80u: goto label_242c80;
        case 0x242c84u: goto label_242c84;
        case 0x242c88u: goto label_242c88;
        case 0x242c8cu: goto label_242c8c;
        case 0x242c90u: goto label_242c90;
        case 0x242c94u: goto label_242c94;
        case 0x242c98u: goto label_242c98;
        case 0x242c9cu: goto label_242c9c;
        case 0x242ca0u: goto label_242ca0;
        case 0x242ca4u: goto label_242ca4;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cacu: goto label_242cac;
        case 0x242cb0u: goto label_242cb0;
        case 0x242cb4u: goto label_242cb4;
        case 0x242cb8u: goto label_242cb8;
        case 0x242cbcu: goto label_242cbc;
        case 0x242cc0u: goto label_242cc0;
        case 0x242cc4u: goto label_242cc4;
        case 0x242cc8u: goto label_242cc8;
        case 0x242cccu: goto label_242ccc;
        case 0x242cd0u: goto label_242cd0;
        case 0x242cd4u: goto label_242cd4;
        case 0x242cd8u: goto label_242cd8;
        case 0x242cdcu: goto label_242cdc;
        case 0x242ce0u: goto label_242ce0;
        case 0x242ce4u: goto label_242ce4;
        case 0x242ce8u: goto label_242ce8;
        case 0x242cecu: goto label_242cec;
        case 0x242cf0u: goto label_242cf0;
        case 0x242cf4u: goto label_242cf4;
        case 0x242cf8u: goto label_242cf8;
        case 0x242cfcu: goto label_242cfc;
        case 0x242d00u: goto label_242d00;
        case 0x242d04u: goto label_242d04;
        case 0x242d08u: goto label_242d08;
        case 0x242d0cu: goto label_242d0c;
        case 0x242d10u: goto label_242d10;
        case 0x242d14u: goto label_242d14;
        case 0x242d18u: goto label_242d18;
        case 0x242d1cu: goto label_242d1c;
        case 0x242d20u: goto label_242d20;
        case 0x242d24u: goto label_242d24;
        case 0x242d28u: goto label_242d28;
        case 0x242d2cu: goto label_242d2c;
        case 0x242d30u: goto label_242d30;
        case 0x242d34u: goto label_242d34;
        case 0x242d38u: goto label_242d38;
        case 0x242d3cu: goto label_242d3c;
        case 0x242d40u: goto label_242d40;
        case 0x242d44u: goto label_242d44;
        case 0x242d48u: goto label_242d48;
        case 0x242d4cu: goto label_242d4c;
        case 0x242d50u: goto label_242d50;
        case 0x242d54u: goto label_242d54;
        case 0x242d58u: goto label_242d58;
        case 0x242d5cu: goto label_242d5c;
        case 0x242d60u: goto label_242d60;
        case 0x242d64u: goto label_242d64;
        case 0x242d68u: goto label_242d68;
        case 0x242d6cu: goto label_242d6c;
        case 0x242d70u: goto label_242d70;
        case 0x242d74u: goto label_242d74;
        case 0x242d78u: goto label_242d78;
        case 0x242d7cu: goto label_242d7c;
        case 0x242d80u: goto label_242d80;
        case 0x242d84u: goto label_242d84;
        case 0x242d88u: goto label_242d88;
        case 0x242d8cu: goto label_242d8c;
        case 0x242d90u: goto label_242d90;
        case 0x242d94u: goto label_242d94;
        case 0x242d98u: goto label_242d98;
        case 0x242d9cu: goto label_242d9c;
        case 0x242da0u: goto label_242da0;
        case 0x242da4u: goto label_242da4;
        case 0x242da8u: goto label_242da8;
        case 0x242dacu: goto label_242dac;
        case 0x242db0u: goto label_242db0;
        case 0x242db4u: goto label_242db4;
        case 0x242db8u: goto label_242db8;
        case 0x242dbcu: goto label_242dbc;
        case 0x242dc0u: goto label_242dc0;
        case 0x242dc4u: goto label_242dc4;
        case 0x242dc8u: goto label_242dc8;
        case 0x242dccu: goto label_242dcc;
        case 0x242dd0u: goto label_242dd0;
        case 0x242dd4u: goto label_242dd4;
        case 0x242dd8u: goto label_242dd8;
        case 0x242ddcu: goto label_242ddc;
        case 0x242de0u: goto label_242de0;
        case 0x242de4u: goto label_242de4;
        case 0x242de8u: goto label_242de8;
        case 0x242decu: goto label_242dec;
        case 0x242df0u: goto label_242df0;
        case 0x242df4u: goto label_242df4;
        case 0x242df8u: goto label_242df8;
        case 0x242dfcu: goto label_242dfc;
        case 0x242e00u: goto label_242e00;
        case 0x242e04u: goto label_242e04;
        case 0x242e08u: goto label_242e08;
        case 0x242e0cu: goto label_242e0c;
        case 0x242e10u: goto label_242e10;
        case 0x242e14u: goto label_242e14;
        case 0x242e18u: goto label_242e18;
        case 0x242e1cu: goto label_242e1c;
        case 0x242e20u: goto label_242e20;
        case 0x242e24u: goto label_242e24;
        case 0x242e28u: goto label_242e28;
        case 0x242e2cu: goto label_242e2c;
        case 0x242e30u: goto label_242e30;
        case 0x242e34u: goto label_242e34;
        case 0x242e38u: goto label_242e38;
        case 0x242e3cu: goto label_242e3c;
        case 0x242e40u: goto label_242e40;
        case 0x242e44u: goto label_242e44;
        case 0x242e48u: goto label_242e48;
        case 0x242e4cu: goto label_242e4c;
        case 0x242e50u: goto label_242e50;
        case 0x242e54u: goto label_242e54;
        case 0x242e58u: goto label_242e58;
        case 0x242e5cu: goto label_242e5c;
        case 0x242e60u: goto label_242e60;
        case 0x242e64u: goto label_242e64;
        case 0x242e68u: goto label_242e68;
        case 0x242e6cu: goto label_242e6c;
        case 0x242e70u: goto label_242e70;
        case 0x242e74u: goto label_242e74;
        case 0x242e78u: goto label_242e78;
        case 0x242e7cu: goto label_242e7c;
        case 0x242e80u: goto label_242e80;
        case 0x242e84u: goto label_242e84;
        case 0x242e88u: goto label_242e88;
        case 0x242e8cu: goto label_242e8c;
        case 0x242e90u: goto label_242e90;
        case 0x242e94u: goto label_242e94;
        case 0x242e98u: goto label_242e98;
        case 0x242e9cu: goto label_242e9c;
        case 0x242ea0u: goto label_242ea0;
        case 0x242ea4u: goto label_242ea4;
        case 0x242ea8u: goto label_242ea8;
        case 0x242eacu: goto label_242eac;
        case 0x242eb0u: goto label_242eb0;
        case 0x242eb4u: goto label_242eb4;
        case 0x242eb8u: goto label_242eb8;
        case 0x242ebcu: goto label_242ebc;
        case 0x242ec0u: goto label_242ec0;
        case 0x242ec4u: goto label_242ec4;
        case 0x242ec8u: goto label_242ec8;
        case 0x242eccu: goto label_242ecc;
        case 0x242ed0u: goto label_242ed0;
        case 0x242ed4u: goto label_242ed4;
        case 0x242ed8u: goto label_242ed8;
        case 0x242edcu: goto label_242edc;
        case 0x242ee0u: goto label_242ee0;
        case 0x242ee4u: goto label_242ee4;
        case 0x242ee8u: goto label_242ee8;
        case 0x242eecu: goto label_242eec;
        case 0x242ef0u: goto label_242ef0;
        case 0x242ef4u: goto label_242ef4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242efcu: goto label_242efc;
        default: break;
    }

    ctx->pc = 0x2429d0u;

label_2429d0:
    // 0x2429d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2429d4:
    // 0x2429d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2429d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2429d8:
    // 0x2429d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2429d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2429dc:
    // 0x2429dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2429dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2429e0:
    // 0x2429e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2429e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2429e4:
    // 0x2429e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2429e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2429e8:
    // 0x2429e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2429e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2429ec:
    // 0x2429ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2429ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2429f0:
    // 0x2429f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2429f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2429f4:
    // 0x2429f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2429f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2429f8:
    // 0x2429f8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2429f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2429fc:
    // 0x2429fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2429fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_242a00:
    // 0x242a00: 0x90a20021  lbu         $v0, 0x21($a1)
    ctx->pc = 0x242a00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
label_242a04:
    // 0x242a04: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x242a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_242a08:
    // 0x242a08: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_242a0c:
    if (ctx->pc == 0x242A0Cu) {
        ctx->pc = 0x242A0Cu;
            // 0x242a0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242A10u;
        goto label_242a10;
    }
    ctx->pc = 0x242A08u;
    {
        const bool branch_taken_0x242a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A08u;
            // 0x242a0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a08) {
            ctx->pc = 0x242A58u;
            goto label_242a58;
        }
    }
    ctx->pc = 0x242A10u;
label_242a10:
    // 0x242a10: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x242a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242a14:
    // 0x242a14: 0x0  nop
    ctx->pc = 0x242a14u;
    // NOP
label_242a18:
    // 0x242a18: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x242a18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_242a1c:
    // 0x242a1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x242a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_242a20:
    // 0x242a20: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_242a24:
    if (ctx->pc == 0x242A24u) {
        ctx->pc = 0x242A28u;
        goto label_242a28;
    }
    ctx->pc = 0x242A20u;
    {
        const bool branch_taken_0x242a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x242a20) {
            ctx->pc = 0x242A40u;
            goto label_242a40;
        }
    }
    ctx->pc = 0x242A28u;
label_242a28:
    // 0x242a28: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_242a2c:
    // 0x242a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242a30:
    // 0x242a30: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x242a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_242a34:
    // 0x242a34: 0x320f809  jalr        $t9
label_242a38:
    if (ctx->pc == 0x242A38u) {
        ctx->pc = 0x242A38u;
            // 0x242a38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242A3Cu;
        goto label_242a3c;
    }
    ctx->pc = 0x242A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242A3Cu);
        ctx->pc = 0x242A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A34u;
            // 0x242a38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242A3Cu; }
            if (ctx->pc != 0x242A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x242A3Cu;
label_242a3c:
    // 0x242a3c: 0x0  nop
    ctx->pc = 0x242a3cu;
    // NOP
label_242a40:
    // 0x242a40: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x242a40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
label_242a44:
    // 0x242a44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x242a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_242a48:
    // 0x242a48: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x242a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_242a4c:
    // 0x242a4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_242a50:
    if (ctx->pc == 0x242A50u) {
        ctx->pc = 0x242A50u;
            // 0x242a50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x242A54u;
        goto label_242a54;
    }
    ctx->pc = 0x242A4Cu;
    {
        const bool branch_taken_0x242a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A4Cu;
            // 0x242a50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a4c) {
            ctx->pc = 0x242A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242a18;
        }
    }
    ctx->pc = 0x242A54u;
label_242a54:
    // 0x242a54: 0x0  nop
    ctx->pc = 0x242a54u;
    // NOP
label_242a58:
    // 0x242a58: 0xa2800021  sb          $zero, 0x21($s4)
    ctx->pc = 0x242a58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 33), (uint8_t)GPR_U32(ctx, 0));
label_242a5c:
    // 0x242a5c: 0xa2a00002  sb          $zero, 0x2($s5)
    ctx->pc = 0x242a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 0));
label_242a60:
    // 0x242a60: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_242a64:
    // 0x242a64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x242a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_242a68:
    // 0x242a68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_242a6c:
    // 0x242a6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x242a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242a70:
    // 0x242a70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242a74:
    // 0x242a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242a78:
    // 0x242a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242a7c:
    // 0x242a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242a80:
    // 0x242a80: 0x3e00008  jr          $ra
label_242a84:
    if (ctx->pc == 0x242A84u) {
        ctx->pc = 0x242A84u;
            // 0x242a84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x242A88u;
        goto label_242a88;
    }
    ctx->pc = 0x242A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A80u;
            // 0x242a84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242A88u;
label_242a88:
    // 0x242a88: 0x0  nop
    ctx->pc = 0x242a88u;
    // NOP
label_242a8c:
    // 0x242a8c: 0x0  nop
    ctx->pc = 0x242a8cu;
    // NOP
label_242a90:
    // 0x242a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242a94:
    // 0x242a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_242a98:
    // 0x242a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_242a9c:
    // 0x242a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242aa0:
    // 0x242aa0: 0x90a40021  lbu         $a0, 0x21($a1)
    ctx->pc = 0x242aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
label_242aa4:
    // 0x242aa4: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x242aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_242aa8:
    // 0x242aa8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_242aac:
    if (ctx->pc == 0x242AACu) {
        ctx->pc = 0x242AACu;
            // 0x242aac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242AB0u;
        goto label_242ab0;
    }
    ctx->pc = 0x242AA8u;
    {
        const bool branch_taken_0x242aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x242AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AA8u;
            // 0x242aac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242aa8) {
            ctx->pc = 0x242AF0u;
            goto label_242af0;
        }
    }
    ctx->pc = 0x242AB0u;
label_242ab0:
    // 0x242ab0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x242ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_242ab4:
    // 0x242ab4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x242ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242ab8:
    // 0x242ab8: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x242ab8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_242abc:
    // 0x242abc: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
label_242ac0:
    if (ctx->pc == 0x242AC0u) {
        ctx->pc = 0x242AC4u;
        goto label_242ac4;
    }
    ctx->pc = 0x242ABCu;
    {
        const bool branch_taken_0x242abc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x242abc) {
            ctx->pc = 0x242AE0u;
            goto label_242ae0;
        }
    }
    ctx->pc = 0x242AC4u;
label_242ac4:
    // 0x242ac4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x242ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242ac8:
    // 0x242ac8: 0xc079198  jal         func_1E4660
label_242acc:
    if (ctx->pc == 0x242ACCu) {
        ctx->pc = 0x242ACCu;
            // 0x242acc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242AD0u;
        goto label_242ad0;
    }
    ctx->pc = 0x242AC8u;
    SET_GPR_U32(ctx, 31, 0x242AD0u);
    ctx->pc = 0x242ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242AC8u;
            // 0x242acc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4660u;
    if (runtime->hasFunction(0x1E4660u)) {
        auto targetFn = runtime->lookupFunction(0x1E4660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AD0u; }
        if (ctx->pc != 0x242AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4660_0x1e4660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AD0u; }
        if (ctx->pc != 0x242AD0u) { return; }
    }
    ctx->pc = 0x242AD0u;
label_242ad0:
    // 0x242ad0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x242ad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_242ad4:
    // 0x242ad4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x242ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_242ad8:
    // 0x242ad8: 0x10000005  b           . + 4 + (0x5 << 2)
label_242adc:
    if (ctx->pc == 0x242ADCu) {
        ctx->pc = 0x242ADCu;
            // 0x242adc: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x242AE0u;
        goto label_242ae0;
    }
    ctx->pc = 0x242AD8u;
    {
        const bool branch_taken_0x242ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AD8u;
            // 0x242adc: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ad8) {
            ctx->pc = 0x242AF0u;
            goto label_242af0;
        }
    }
    ctx->pc = 0x242AE0u;
label_242ae0:
    // 0x242ae0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x242ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_242ae4:
    // 0x242ae4: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x242ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_242ae8:
    // 0x242ae8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_242aec:
    if (ctx->pc == 0x242AECu) {
        ctx->pc = 0x242AECu;
            // 0x242aec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x242AF0u;
        goto label_242af0;
    }
    ctx->pc = 0x242AE8u;
    {
        const bool branch_taken_0x242ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AE8u;
            // 0x242aec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ae8) {
            ctx->pc = 0x242AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242ab8;
        }
    }
    ctx->pc = 0x242AF0u;
label_242af0:
    // 0x242af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242af4:
    // 0x242af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242af8:
    // 0x242af8: 0x3e00008  jr          $ra
label_242afc:
    if (ctx->pc == 0x242AFCu) {
        ctx->pc = 0x242AFCu;
            // 0x242afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x242B00u;
        goto label_242b00;
    }
    ctx->pc = 0x242AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242AF8u;
            // 0x242afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242B00u;
label_242b00:
    // 0x242b00: 0x90a70021  lbu         $a3, 0x21($a1)
    ctx->pc = 0x242b00u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
label_242b04:
    // 0x242b04: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x242b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_242b08:
    // 0x242b08: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_242b0c:
    if (ctx->pc == 0x242B0Cu) {
        ctx->pc = 0x242B0Cu;
            // 0x242b0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242B10u;
        goto label_242b10;
    }
    ctx->pc = 0x242B08u;
    {
        const bool branch_taken_0x242b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B08u;
            // 0x242b0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b08) {
            ctx->pc = 0x242B40u;
            goto label_242b40;
        }
    }
    ctx->pc = 0x242B10u;
label_242b10:
    // 0x242b10: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x242b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242b14:
    // 0x242b14: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x242b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_242b18:
    // 0x242b18: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x242b18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_242b1c:
    // 0x242b1c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_242b20:
    if (ctx->pc == 0x242B20u) {
        ctx->pc = 0x242B20u;
            // 0x242b20: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x242B24u;
        goto label_242b24;
    }
    ctx->pc = 0x242B1Cu;
    {
        const bool branch_taken_0x242b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x242B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B1Cu;
            // 0x242b20: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b1c) {
            ctx->pc = 0x242B30u;
            goto label_242b30;
        }
    }
    ctx->pc = 0x242B24u;
label_242b24:
    // 0x242b24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_242b28:
    // 0x242b28: 0x10000005  b           . + 4 + (0x5 << 2)
label_242b2c:
    if (ctx->pc == 0x242B2Cu) {
        ctx->pc = 0x242B2Cu;
            // 0x242b2c: 0xa4660002  sh          $a2, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x242B30u;
        goto label_242b30;
    }
    ctx->pc = 0x242B28u;
    {
        const bool branch_taken_0x242b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B28u;
            // 0x242b2c: 0xa4660002  sh          $a2, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b28) {
            ctx->pc = 0x242B40u;
            goto label_242b40;
        }
    }
    ctx->pc = 0x242B30u;
label_242b30:
    // 0x242b30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x242b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_242b34:
    // 0x242b34: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x242b34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_242b38:
    // 0x242b38: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_242b3c:
    if (ctx->pc == 0x242B3Cu) {
        ctx->pc = 0x242B3Cu;
            // 0x242b3c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x242B40u;
        goto label_242b40;
    }
    ctx->pc = 0x242B38u;
    {
        const bool branch_taken_0x242b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B38u;
            // 0x242b3c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b38) {
            ctx->pc = 0x242B18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242b18;
        }
    }
    ctx->pc = 0x242B40u;
label_242b40:
    // 0x242b40: 0x3e00008  jr          $ra
label_242b44:
    if (ctx->pc == 0x242B44u) {
        ctx->pc = 0x242B48u;
        goto label_242b48;
    }
    ctx->pc = 0x242B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242B48u;
label_242b48:
    // 0x242b48: 0x0  nop
    ctx->pc = 0x242b48u;
    // NOP
label_242b4c:
    // 0x242b4c: 0x0  nop
    ctx->pc = 0x242b4cu;
    // NOP
label_242b50:
    // 0x242b50: 0x3e00008  jr          $ra
label_242b54:
    if (ctx->pc == 0x242B54u) {
        ctx->pc = 0x242B58u;
        goto label_242b58;
    }
    ctx->pc = 0x242B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242B58u;
label_242b58:
    // 0x242b58: 0x0  nop
    ctx->pc = 0x242b58u;
    // NOP
label_242b5c:
    // 0x242b5c: 0x0  nop
    ctx->pc = 0x242b5cu;
    // NOP
label_242b60:
    // 0x242b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_242b64:
    // 0x242b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_242b68:
    // 0x242b68: 0xc090a74  jal         func_2429D0
label_242b6c:
    if (ctx->pc == 0x242B6Cu) {
        ctx->pc = 0x242B70u;
        goto label_242b70;
    }
    ctx->pc = 0x242B68u;
    SET_GPR_U32(ctx, 31, 0x242B70u);
    ctx->pc = 0x2429D0u;
    goto label_2429d0;
    ctx->pc = 0x242B70u;
label_242b70:
    // 0x242b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242b74:
    // 0x242b74: 0x3e00008  jr          $ra
label_242b78:
    if (ctx->pc == 0x242B78u) {
        ctx->pc = 0x242B78u;
            // 0x242b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x242B7Cu;
        goto label_242b7c;
    }
    ctx->pc = 0x242B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B74u;
            // 0x242b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242B7Cu;
label_242b7c:
    // 0x242b7c: 0x0  nop
    ctx->pc = 0x242b7cu;
    // NOP
label_242b80:
    // 0x242b80: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x242b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_242b84:
    // 0x242b84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x242b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_242b88:
    // 0x242b88: 0x27a3024c  addiu       $v1, $sp, 0x24C
    ctx->pc = 0x242b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_242b8c:
    // 0x242b8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x242b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_242b90:
    // 0x242b90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x242b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_242b94:
    // 0x242b94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x242b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_242b98:
    // 0x242b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x242b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_242b9c:
    // 0x242b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x242b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_242ba0:
    // 0x242ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x242ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_242ba4:
    // 0x242ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_242ba8:
    // 0x242ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_242bac:
    // 0x242bac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x242bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242bb0:
    // 0x242bb0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242bb4:
    // 0x242bb4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_242bb8:
    // 0x242bb8: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x242bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_242bbc:
    // 0x242bbc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x242bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_242bc0:
    // 0x242bc0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x242bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_242bc4:
    // 0x242bc4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x242bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_242bc8:
    // 0x242bc8: 0xa3a2024c  sb          $v0, 0x24C($sp)
    ctx->pc = 0x242bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 588), (uint8_t)GPR_U32(ctx, 2));
label_242bcc:
    // 0x242bcc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_242bd0:
    // 0x242bd0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_242bd4:
    if (ctx->pc == 0x242BD4u) {
        ctx->pc = 0x242BD8u;
        goto label_242bd8;
    }
    ctx->pc = 0x242BD0u;
    {
        const bool branch_taken_0x242bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242bd0) {
            ctx->pc = 0x242C00u;
            goto label_242c00;
        }
    }
    ctx->pc = 0x242BD8u;
label_242bd8:
    // 0x242bd8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x242bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_242bdc:
    // 0x242bdc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x242bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_242be0:
    // 0x242be0: 0x2442ce78  addiu       $v0, $v0, -0x3188
    ctx->pc = 0x242be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954616));
label_242be4:
    // 0x242be4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x242be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_242be8:
    // 0x242be8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x242be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_242bec:
    // 0x242bec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x242becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_242bf0:
    // 0x242bf0: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x242bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_242bf4:
    // 0x242bf4: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x242bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_242bf8:
    // 0x242bf8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x242bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_242bfc:
    // 0x242bfc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x242bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_242c00:
    // 0x242c00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242c04:
    // 0x242c04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x242c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_242c08:
    // 0x242c08: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_242c0c:
    // 0x242c0c: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x242c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_242c10:
    // 0x242c10: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x242c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_242c14:
    // 0x242c14: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x242c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_242c18:
    // 0x242c18: 0x27af00f0  addiu       $t7, $sp, 0xF0
    ctx->pc = 0x242c18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_242c1c:
    // 0x242c1c: 0x27ae0100  addiu       $t6, $sp, 0x100
    ctx->pc = 0x242c1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_242c20:
    // 0x242c20: 0x27ad0110  addiu       $t5, $sp, 0x110
    ctx->pc = 0x242c20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_242c24:
    // 0x242c24: 0x27ac0120  addiu       $t4, $sp, 0x120
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_242c28:
    // 0x242c28: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x242c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_242c2c:
    // 0x242c2c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x242c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242c30:
    // 0x242c30: 0x27b60200  addiu       $s6, $sp, 0x200
    ctx->pc = 0x242c30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_242c34:
    // 0x242c34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x242c34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242c38:
    // 0x242c38: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x242c38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_242c3c:
    // 0x242c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x242c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242c40:
    // 0x242c40: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x242c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242c44:
    // 0x242c44: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x242c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_242c48:
    // 0x242c48: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x242c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_242c4c:
    // 0x242c4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x242c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_242c50:
    // 0x242c50: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x242c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_242c54:
    // 0x242c54: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x242c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_242c58:
    // 0x242c58: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x242c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_242c5c:
    // 0x242c5c: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x242c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
label_242c60:
    // 0x242c60: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x242c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_242c64:
    // 0x242c64: 0xc7a30230  lwc1        $f3, 0x230($sp)
    ctx->pc = 0x242c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242c68:
    // 0x242c68: 0xc7a20234  lwc1        $f2, 0x234($sp)
    ctx->pc = 0x242c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242c6c:
    // 0x242c6c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x242c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242c70:
    // 0x242c70: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x242c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242c74:
    // 0x242c74: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x242c74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_242c78:
    // 0x242c78: 0xe7a30220  swc1        $f3, 0x220($sp)
    ctx->pc = 0x242c78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_242c7c:
    // 0x242c7c: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x242c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242c80:
    // 0x242c80: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x242c80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_242c84:
    // 0x242c84: 0xe7a20224  swc1        $f2, 0x224($sp)
    ctx->pc = 0x242c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_242c88:
    // 0x242c88: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x242c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242c8c:
    // 0x242c8c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x242c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_242c90:
    // 0x242c90: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x242c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_242c94:
    // 0x242c94: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x242c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242c98:
    // 0x242c98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x242c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_242c9c:
    // 0x242c9c: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x242c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_242ca0:
    // 0x242ca0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x242ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242ca4:
    // 0x242ca4: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x242ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_242ca8:
    // 0x242ca8: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x242ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_242cac:
    // 0x242cac: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x242cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_242cb0:
    // 0x242cb0: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x242cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_242cb4:
    // 0x242cb4: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x242cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_242cb8:
    // 0x242cb8: 0xc7a30210  lwc1        $f3, 0x210($sp)
    ctx->pc = 0x242cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242cbc:
    // 0x242cbc: 0xc7a20214  lwc1        $f2, 0x214($sp)
    ctx->pc = 0x242cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242cc0:
    // 0x242cc0: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x242cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242cc4:
    // 0x242cc4: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x242cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242cc8:
    // 0x242cc8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x242cc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_242ccc:
    // 0x242ccc: 0xe7a30200  swc1        $f3, 0x200($sp)
    ctx->pc = 0x242cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_242cd0:
    // 0x242cd0: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x242cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242cd4:
    // 0x242cd4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x242cd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_242cd8:
    // 0x242cd8: 0xe7a20204  swc1        $f2, 0x204($sp)
    ctx->pc = 0x242cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_242cdc:
    // 0x242cdc: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x242cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242ce0:
    // 0x242ce0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x242ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_242ce4:
    // 0x242ce4: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x242ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_242ce8:
    // 0x242ce8: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x242ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242cec:
    // 0x242cec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x242cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_242cf0:
    // 0x242cf0: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x242cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_242cf4:
    // 0x242cf4: 0x8c950008  lw          $s5, 0x8($a0)
    ctx->pc = 0x242cf4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_242cf8:
    // 0x242cf8: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x242cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_242cfc:
    // 0x242cfc: 0x8c980000  lw          $t8, 0x0($a0)
    ctx->pc = 0x242cfcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242d00:
    // 0x242d00: 0x8c94000c  lw          $s4, 0xC($a0)
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_242d04:
    // 0x242d04: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x242d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242d08:
    // 0x242d08: 0x8f320008  lw          $s2, 0x8($t9)
    ctx->pc = 0x242d08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_242d0c:
    // 0x242d0c: 0x8f130008  lw          $s3, 0x8($t8)
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_242d10:
    // 0x242d10: 0xafb800d0  sw          $t8, 0xD0($sp)
    ctx->pc = 0x242d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 24));
label_242d14:
    // 0x242d14: 0xafb900d4  sw          $t9, 0xD4($sp)
    ctx->pc = 0x242d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 25));
label_242d18:
    // 0x242d18: 0xafb500d8  sw          $s5, 0xD8($sp)
    ctx->pc = 0x242d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 21));
label_242d1c:
    // 0x242d1c: 0xafb400dc  sw          $s4, 0xDC($sp)
    ctx->pc = 0x242d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 20));
label_242d20:
    // 0x242d20: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x242d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
label_242d24:
    // 0x242d24: 0xafb300e4  sw          $s3, 0xE4($sp)
    ctx->pc = 0x242d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 19));
label_242d28:
    // 0x242d28: 0xafb200e8  sw          $s2, 0xE8($sp)
    ctx->pc = 0x242d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 18));
label_242d2c:
    // 0x242d2c: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x242d2cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_242d30:
    // 0x242d30: 0x7d680000  sq          $t0, 0x0($t3)
    ctx->pc = 0x242d30u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 8));
label_242d34:
    // 0x242d34: 0x78880020  lq          $t0, 0x20($a0)
    ctx->pc = 0x242d34u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_242d38:
    // 0x242d38: 0x7d480000  sq          $t0, 0x0($t2)
    ctx->pc = 0x242d38u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 8));
label_242d3c:
    // 0x242d3c: 0x78880030  lq          $t0, 0x30($a0)
    ctx->pc = 0x242d3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_242d40:
    // 0x242d40: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x242d40u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_242d44:
    // 0x242d44: 0x78840040  lq          $a0, 0x40($a0)
    ctx->pc = 0x242d44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_242d48:
    // 0x242d48: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x242d48u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_242d4c:
    // 0x242d4c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x242d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d50:
    // 0x242d50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x242d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_242d54:
    // 0x242d54: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x242d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_242d58:
    // 0x242d58: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x242d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d5c:
    // 0x242d5c: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x242d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
label_242d60:
    // 0x242d60: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x242d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d64:
    // 0x242d64: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x242d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_242d68:
    // 0x242d68: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x242d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d6c:
    // 0x242d6c: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x242d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
label_242d70:
    // 0x242d70: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x242d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d74:
    // 0x242d74: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x242d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_242d78:
    // 0x242d78: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x242d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d7c:
    // 0x242d7c: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x242d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_242d80:
    // 0x242d80: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x242d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d84:
    // 0x242d84: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x242d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_242d88:
    // 0x242d88: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x242d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d8c:
    // 0x242d8c: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x242d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
label_242d90:
    // 0x242d90: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x242d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d94:
    // 0x242d94: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x242d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_242d98:
    // 0x242d98: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x242d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242d9c:
    // 0x242d9c: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x242d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_242da0:
    // 0x242da0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x242da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242da4:
    // 0x242da4: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x242da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_242da8:
    // 0x242da8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x242da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242dac:
    // 0x242dac: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x242dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_242db0:
    // 0x242db0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x242db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242db4:
    // 0x242db4: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x242db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_242db8:
    // 0x242db8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x242db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242dbc:
    // 0x242dbc: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x242dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_242dc0:
    // 0x242dc0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x242dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242dc4:
    // 0x242dc4: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x242dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_242dc8:
    // 0x242dc8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x242dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242dcc:
    // 0x242dcc: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x242dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_242dd0:
    // 0x242dd0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x242dd0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_242dd4:
    // 0x242dd4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x242dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_242dd8:
    // 0x242dd8: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x242dd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_242ddc:
    // 0x242ddc: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x242ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
label_242de0:
    // 0x242de0: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x242de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_242de4:
    // 0x242de4: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x242de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_242de8:
    // 0x242de8: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x242de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_242dec:
    // 0x242dec: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x242decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_242df0:
    // 0x242df0: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x242df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_242df4:
    // 0x242df4: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x242df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_242df8:
    // 0x242df8: 0xc7aa0150  lwc1        $f10, 0x150($sp)
    ctx->pc = 0x242df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_242dfc:
    // 0x242dfc: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x242dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242e00:
    // 0x242e00: 0xc7a30140  lwc1        $f3, 0x140($sp)
    ctx->pc = 0x242e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242e04:
    // 0x242e04: 0xc7a90154  lwc1        $f9, 0x154($sp)
    ctx->pc = 0x242e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_242e08:
    // 0x242e08: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x242e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242e0c:
    // 0x242e0c: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x242e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242e10:
    // 0x242e10: 0xc7a70158  lwc1        $f7, 0x158($sp)
    ctx->pc = 0x242e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_242e14:
    // 0x242e14: 0x46015200  add.s       $f8, $f10, $f1
    ctx->pc = 0x242e14u;
    ctx->f[8] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_242e18:
    // 0x242e18: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x242e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242e1c:
    // 0x242e1c: 0xe7a80160  swc1        $f8, 0x160($sp)
    ctx->pc = 0x242e1cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_242e20:
    // 0x242e20: 0x46004a00  add.s       $f8, $f9, $f0
    ctx->pc = 0x242e20u;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_242e24:
    // 0x242e24: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x242e24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
label_242e28:
    // 0x242e28: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x242e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_242e2c:
    // 0x242e2c: 0x460350c0  add.s       $f3, $f10, $f3
    ctx->pc = 0x242e2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
label_242e30:
    // 0x242e30: 0xc7a60138  lwc1        $f6, 0x138($sp)
    ctx->pc = 0x242e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_242e34:
    // 0x242e34: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x242e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_242e38:
    // 0x242e38: 0xc7a5015c  lwc1        $f5, 0x15C($sp)
    ctx->pc = 0x242e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_242e3c:
    // 0x242e3c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x242e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242e40:
    // 0x242e40: 0xc7a4013c  lwc1        $f4, 0x13C($sp)
    ctx->pc = 0x242e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_242e44:
    // 0x242e44: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x242e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_242e48:
    // 0x242e48: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x242e48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_242e4c:
    // 0x242e4c: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x242e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_242e50:
    // 0x242e50: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x242e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_242e54:
    // 0x242e54: 0xe7a80164  swc1        $f8, 0x164($sp)
    ctx->pc = 0x242e54u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_242e58:
    // 0x242e58: 0xe7a30170  swc1        $f3, 0x170($sp)
    ctx->pc = 0x242e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_242e5c:
    // 0x242e5c: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x242e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_242e60:
    // 0x242e60: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x242e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_242e64:
    // 0x242e64: 0xc093648  jal         func_24D920
label_242e68:
    if (ctx->pc == 0x242E68u) {
        ctx->pc = 0x242E68u;
            // 0x242e68: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->pc = 0x242E6Cu;
        goto label_242e6c;
    }
    ctx->pc = 0x242E64u;
    SET_GPR_U32(ctx, 31, 0x242E6Cu);
    ctx->pc = 0x242E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E64u;
            // 0x242e68: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D920u;
    if (runtime->hasFunction(0x24D920u)) {
        auto targetFn = runtime->lookupFunction(0x24D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E6Cu; }
        if (ctx->pc != 0x242E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024D920_0x24d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E6Cu; }
        if (ctx->pc != 0x242E6Cu) { return; }
    }
    ctx->pc = 0x242E6Cu;
label_242e6c:
    // 0x242e6c: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x242e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_242e70:
    // 0x242e70: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x242e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_242e74:
    // 0x242e74: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x242e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_242e78:
    // 0x242e78: 0x27a30248  addiu       $v1, $sp, 0x248
    ctx->pc = 0x242e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_242e7c:
    // 0x242e7c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x242e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_242e80:
    // 0x242e80: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x242e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_242e84:
    // 0x242e84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x242e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_242e88:
    // 0x242e88: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x242e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_242e8c:
    // 0x242e8c: 0xa3a20248  sb          $v0, 0x248($sp)
    ctx->pc = 0x242e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 584), (uint8_t)GPR_U32(ctx, 2));
label_242e90:
    // 0x242e90: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x242e90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_242e94:
    // 0x242e94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_242e98:
    if (ctx->pc == 0x242E98u) {
        ctx->pc = 0x242E9Cu;
        goto label_242e9c;
    }
    ctx->pc = 0x242E94u;
    {
        const bool branch_taken_0x242e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e94) {
            ctx->pc = 0x242EC8u;
            goto label_242ec8;
        }
    }
    ctx->pc = 0x242E9Cu;
label_242e9c:
    // 0x242e9c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x242e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_242ea0:
    // 0x242ea0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x242ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_242ea4:
    // 0x242ea4: 0x2442ce88  addiu       $v0, $v0, -0x3178
    ctx->pc = 0x242ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954632));
label_242ea8:
    // 0x242ea8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x242ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_242eac:
    // 0x242eac: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x242eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_242eb0:
    // 0x242eb0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x242eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_242eb4:
    // 0x242eb4: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x242eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_242eb8:
    // 0x242eb8: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x242eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_242ebc:
    // 0x242ebc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x242ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_242ec0:
    // 0x242ec0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x242ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_242ec4:
    // 0x242ec4: 0x0  nop
    ctx->pc = 0x242ec4u;
    // NOP
label_242ec8:
    // 0x242ec8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x242ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_242ecc:
    // 0x242ecc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x242eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_242ed0:
    // 0x242ed0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x242ed0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_242ed4:
    // 0x242ed4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x242ed4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_242ed8:
    // 0x242ed8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242ed8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_242edc:
    // 0x242edc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x242edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242ee0:
    // 0x242ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242ee4:
    // 0x242ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242ee8:
    // 0x242ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242eec:
    // 0x242eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242ef0:
    // 0x242ef0: 0x3e00008  jr          $ra
label_242ef4:
    if (ctx->pc == 0x242EF4u) {
        ctx->pc = 0x242EF4u;
            // 0x242ef4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x242EF8u;
        goto label_242ef8;
    }
    ctx->pc = 0x242EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242EF0u;
            // 0x242ef4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242EF8u;
label_242ef8:
    // 0x242ef8: 0x0  nop
    ctx->pc = 0x242ef8u;
    // NOP
label_242efc:
    // 0x242efc: 0x0  nop
    ctx->pc = 0x242efcu;
    // NOP
}
