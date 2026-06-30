#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F7BD0
// Address: 0x3f7bd0 - 0x3f8000
void sub_003F7BD0_0x3f7bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7BD0_0x3f7bd0");
#endif

    switch (ctx->pc) {
        case 0x3f7bd0u: goto label_3f7bd0;
        case 0x3f7bd4u: goto label_3f7bd4;
        case 0x3f7bd8u: goto label_3f7bd8;
        case 0x3f7bdcu: goto label_3f7bdc;
        case 0x3f7be0u: goto label_3f7be0;
        case 0x3f7be4u: goto label_3f7be4;
        case 0x3f7be8u: goto label_3f7be8;
        case 0x3f7becu: goto label_3f7bec;
        case 0x3f7bf0u: goto label_3f7bf0;
        case 0x3f7bf4u: goto label_3f7bf4;
        case 0x3f7bf8u: goto label_3f7bf8;
        case 0x3f7bfcu: goto label_3f7bfc;
        case 0x3f7c00u: goto label_3f7c00;
        case 0x3f7c04u: goto label_3f7c04;
        case 0x3f7c08u: goto label_3f7c08;
        case 0x3f7c0cu: goto label_3f7c0c;
        case 0x3f7c10u: goto label_3f7c10;
        case 0x3f7c14u: goto label_3f7c14;
        case 0x3f7c18u: goto label_3f7c18;
        case 0x3f7c1cu: goto label_3f7c1c;
        case 0x3f7c20u: goto label_3f7c20;
        case 0x3f7c24u: goto label_3f7c24;
        case 0x3f7c28u: goto label_3f7c28;
        case 0x3f7c2cu: goto label_3f7c2c;
        case 0x3f7c30u: goto label_3f7c30;
        case 0x3f7c34u: goto label_3f7c34;
        case 0x3f7c38u: goto label_3f7c38;
        case 0x3f7c3cu: goto label_3f7c3c;
        case 0x3f7c40u: goto label_3f7c40;
        case 0x3f7c44u: goto label_3f7c44;
        case 0x3f7c48u: goto label_3f7c48;
        case 0x3f7c4cu: goto label_3f7c4c;
        case 0x3f7c50u: goto label_3f7c50;
        case 0x3f7c54u: goto label_3f7c54;
        case 0x3f7c58u: goto label_3f7c58;
        case 0x3f7c5cu: goto label_3f7c5c;
        case 0x3f7c60u: goto label_3f7c60;
        case 0x3f7c64u: goto label_3f7c64;
        case 0x3f7c68u: goto label_3f7c68;
        case 0x3f7c6cu: goto label_3f7c6c;
        case 0x3f7c70u: goto label_3f7c70;
        case 0x3f7c74u: goto label_3f7c74;
        case 0x3f7c78u: goto label_3f7c78;
        case 0x3f7c7cu: goto label_3f7c7c;
        case 0x3f7c80u: goto label_3f7c80;
        case 0x3f7c84u: goto label_3f7c84;
        case 0x3f7c88u: goto label_3f7c88;
        case 0x3f7c8cu: goto label_3f7c8c;
        case 0x3f7c90u: goto label_3f7c90;
        case 0x3f7c94u: goto label_3f7c94;
        case 0x3f7c98u: goto label_3f7c98;
        case 0x3f7c9cu: goto label_3f7c9c;
        case 0x3f7ca0u: goto label_3f7ca0;
        case 0x3f7ca4u: goto label_3f7ca4;
        case 0x3f7ca8u: goto label_3f7ca8;
        case 0x3f7cacu: goto label_3f7cac;
        case 0x3f7cb0u: goto label_3f7cb0;
        case 0x3f7cb4u: goto label_3f7cb4;
        case 0x3f7cb8u: goto label_3f7cb8;
        case 0x3f7cbcu: goto label_3f7cbc;
        case 0x3f7cc0u: goto label_3f7cc0;
        case 0x3f7cc4u: goto label_3f7cc4;
        case 0x3f7cc8u: goto label_3f7cc8;
        case 0x3f7cccu: goto label_3f7ccc;
        case 0x3f7cd0u: goto label_3f7cd0;
        case 0x3f7cd4u: goto label_3f7cd4;
        case 0x3f7cd8u: goto label_3f7cd8;
        case 0x3f7cdcu: goto label_3f7cdc;
        case 0x3f7ce0u: goto label_3f7ce0;
        case 0x3f7ce4u: goto label_3f7ce4;
        case 0x3f7ce8u: goto label_3f7ce8;
        case 0x3f7cecu: goto label_3f7cec;
        case 0x3f7cf0u: goto label_3f7cf0;
        case 0x3f7cf4u: goto label_3f7cf4;
        case 0x3f7cf8u: goto label_3f7cf8;
        case 0x3f7cfcu: goto label_3f7cfc;
        case 0x3f7d00u: goto label_3f7d00;
        case 0x3f7d04u: goto label_3f7d04;
        case 0x3f7d08u: goto label_3f7d08;
        case 0x3f7d0cu: goto label_3f7d0c;
        case 0x3f7d10u: goto label_3f7d10;
        case 0x3f7d14u: goto label_3f7d14;
        case 0x3f7d18u: goto label_3f7d18;
        case 0x3f7d1cu: goto label_3f7d1c;
        case 0x3f7d20u: goto label_3f7d20;
        case 0x3f7d24u: goto label_3f7d24;
        case 0x3f7d28u: goto label_3f7d28;
        case 0x3f7d2cu: goto label_3f7d2c;
        case 0x3f7d30u: goto label_3f7d30;
        case 0x3f7d34u: goto label_3f7d34;
        case 0x3f7d38u: goto label_3f7d38;
        case 0x3f7d3cu: goto label_3f7d3c;
        case 0x3f7d40u: goto label_3f7d40;
        case 0x3f7d44u: goto label_3f7d44;
        case 0x3f7d48u: goto label_3f7d48;
        case 0x3f7d4cu: goto label_3f7d4c;
        case 0x3f7d50u: goto label_3f7d50;
        case 0x3f7d54u: goto label_3f7d54;
        case 0x3f7d58u: goto label_3f7d58;
        case 0x3f7d5cu: goto label_3f7d5c;
        case 0x3f7d60u: goto label_3f7d60;
        case 0x3f7d64u: goto label_3f7d64;
        case 0x3f7d68u: goto label_3f7d68;
        case 0x3f7d6cu: goto label_3f7d6c;
        case 0x3f7d70u: goto label_3f7d70;
        case 0x3f7d74u: goto label_3f7d74;
        case 0x3f7d78u: goto label_3f7d78;
        case 0x3f7d7cu: goto label_3f7d7c;
        case 0x3f7d80u: goto label_3f7d80;
        case 0x3f7d84u: goto label_3f7d84;
        case 0x3f7d88u: goto label_3f7d88;
        case 0x3f7d8cu: goto label_3f7d8c;
        case 0x3f7d90u: goto label_3f7d90;
        case 0x3f7d94u: goto label_3f7d94;
        case 0x3f7d98u: goto label_3f7d98;
        case 0x3f7d9cu: goto label_3f7d9c;
        case 0x3f7da0u: goto label_3f7da0;
        case 0x3f7da4u: goto label_3f7da4;
        case 0x3f7da8u: goto label_3f7da8;
        case 0x3f7dacu: goto label_3f7dac;
        case 0x3f7db0u: goto label_3f7db0;
        case 0x3f7db4u: goto label_3f7db4;
        case 0x3f7db8u: goto label_3f7db8;
        case 0x3f7dbcu: goto label_3f7dbc;
        case 0x3f7dc0u: goto label_3f7dc0;
        case 0x3f7dc4u: goto label_3f7dc4;
        case 0x3f7dc8u: goto label_3f7dc8;
        case 0x3f7dccu: goto label_3f7dcc;
        case 0x3f7dd0u: goto label_3f7dd0;
        case 0x3f7dd4u: goto label_3f7dd4;
        case 0x3f7dd8u: goto label_3f7dd8;
        case 0x3f7ddcu: goto label_3f7ddc;
        case 0x3f7de0u: goto label_3f7de0;
        case 0x3f7de4u: goto label_3f7de4;
        case 0x3f7de8u: goto label_3f7de8;
        case 0x3f7decu: goto label_3f7dec;
        case 0x3f7df0u: goto label_3f7df0;
        case 0x3f7df4u: goto label_3f7df4;
        case 0x3f7df8u: goto label_3f7df8;
        case 0x3f7dfcu: goto label_3f7dfc;
        case 0x3f7e00u: goto label_3f7e00;
        case 0x3f7e04u: goto label_3f7e04;
        case 0x3f7e08u: goto label_3f7e08;
        case 0x3f7e0cu: goto label_3f7e0c;
        case 0x3f7e10u: goto label_3f7e10;
        case 0x3f7e14u: goto label_3f7e14;
        case 0x3f7e18u: goto label_3f7e18;
        case 0x3f7e1cu: goto label_3f7e1c;
        case 0x3f7e20u: goto label_3f7e20;
        case 0x3f7e24u: goto label_3f7e24;
        case 0x3f7e28u: goto label_3f7e28;
        case 0x3f7e2cu: goto label_3f7e2c;
        case 0x3f7e30u: goto label_3f7e30;
        case 0x3f7e34u: goto label_3f7e34;
        case 0x3f7e38u: goto label_3f7e38;
        case 0x3f7e3cu: goto label_3f7e3c;
        case 0x3f7e40u: goto label_3f7e40;
        case 0x3f7e44u: goto label_3f7e44;
        case 0x3f7e48u: goto label_3f7e48;
        case 0x3f7e4cu: goto label_3f7e4c;
        case 0x3f7e50u: goto label_3f7e50;
        case 0x3f7e54u: goto label_3f7e54;
        case 0x3f7e58u: goto label_3f7e58;
        case 0x3f7e5cu: goto label_3f7e5c;
        case 0x3f7e60u: goto label_3f7e60;
        case 0x3f7e64u: goto label_3f7e64;
        case 0x3f7e68u: goto label_3f7e68;
        case 0x3f7e6cu: goto label_3f7e6c;
        case 0x3f7e70u: goto label_3f7e70;
        case 0x3f7e74u: goto label_3f7e74;
        case 0x3f7e78u: goto label_3f7e78;
        case 0x3f7e7cu: goto label_3f7e7c;
        case 0x3f7e80u: goto label_3f7e80;
        case 0x3f7e84u: goto label_3f7e84;
        case 0x3f7e88u: goto label_3f7e88;
        case 0x3f7e8cu: goto label_3f7e8c;
        case 0x3f7e90u: goto label_3f7e90;
        case 0x3f7e94u: goto label_3f7e94;
        case 0x3f7e98u: goto label_3f7e98;
        case 0x3f7e9cu: goto label_3f7e9c;
        case 0x3f7ea0u: goto label_3f7ea0;
        case 0x3f7ea4u: goto label_3f7ea4;
        case 0x3f7ea8u: goto label_3f7ea8;
        case 0x3f7eacu: goto label_3f7eac;
        case 0x3f7eb0u: goto label_3f7eb0;
        case 0x3f7eb4u: goto label_3f7eb4;
        case 0x3f7eb8u: goto label_3f7eb8;
        case 0x3f7ebcu: goto label_3f7ebc;
        case 0x3f7ec0u: goto label_3f7ec0;
        case 0x3f7ec4u: goto label_3f7ec4;
        case 0x3f7ec8u: goto label_3f7ec8;
        case 0x3f7eccu: goto label_3f7ecc;
        case 0x3f7ed0u: goto label_3f7ed0;
        case 0x3f7ed4u: goto label_3f7ed4;
        case 0x3f7ed8u: goto label_3f7ed8;
        case 0x3f7edcu: goto label_3f7edc;
        case 0x3f7ee0u: goto label_3f7ee0;
        case 0x3f7ee4u: goto label_3f7ee4;
        case 0x3f7ee8u: goto label_3f7ee8;
        case 0x3f7eecu: goto label_3f7eec;
        case 0x3f7ef0u: goto label_3f7ef0;
        case 0x3f7ef4u: goto label_3f7ef4;
        case 0x3f7ef8u: goto label_3f7ef8;
        case 0x3f7efcu: goto label_3f7efc;
        case 0x3f7f00u: goto label_3f7f00;
        case 0x3f7f04u: goto label_3f7f04;
        case 0x3f7f08u: goto label_3f7f08;
        case 0x3f7f0cu: goto label_3f7f0c;
        case 0x3f7f10u: goto label_3f7f10;
        case 0x3f7f14u: goto label_3f7f14;
        case 0x3f7f18u: goto label_3f7f18;
        case 0x3f7f1cu: goto label_3f7f1c;
        case 0x3f7f20u: goto label_3f7f20;
        case 0x3f7f24u: goto label_3f7f24;
        case 0x3f7f28u: goto label_3f7f28;
        case 0x3f7f2cu: goto label_3f7f2c;
        case 0x3f7f30u: goto label_3f7f30;
        case 0x3f7f34u: goto label_3f7f34;
        case 0x3f7f38u: goto label_3f7f38;
        case 0x3f7f3cu: goto label_3f7f3c;
        case 0x3f7f40u: goto label_3f7f40;
        case 0x3f7f44u: goto label_3f7f44;
        case 0x3f7f48u: goto label_3f7f48;
        case 0x3f7f4cu: goto label_3f7f4c;
        case 0x3f7f50u: goto label_3f7f50;
        case 0x3f7f54u: goto label_3f7f54;
        case 0x3f7f58u: goto label_3f7f58;
        case 0x3f7f5cu: goto label_3f7f5c;
        case 0x3f7f60u: goto label_3f7f60;
        case 0x3f7f64u: goto label_3f7f64;
        case 0x3f7f68u: goto label_3f7f68;
        case 0x3f7f6cu: goto label_3f7f6c;
        case 0x3f7f70u: goto label_3f7f70;
        case 0x3f7f74u: goto label_3f7f74;
        case 0x3f7f78u: goto label_3f7f78;
        case 0x3f7f7cu: goto label_3f7f7c;
        case 0x3f7f80u: goto label_3f7f80;
        case 0x3f7f84u: goto label_3f7f84;
        case 0x3f7f88u: goto label_3f7f88;
        case 0x3f7f8cu: goto label_3f7f8c;
        case 0x3f7f90u: goto label_3f7f90;
        case 0x3f7f94u: goto label_3f7f94;
        case 0x3f7f98u: goto label_3f7f98;
        case 0x3f7f9cu: goto label_3f7f9c;
        case 0x3f7fa0u: goto label_3f7fa0;
        case 0x3f7fa4u: goto label_3f7fa4;
        case 0x3f7fa8u: goto label_3f7fa8;
        case 0x3f7facu: goto label_3f7fac;
        case 0x3f7fb0u: goto label_3f7fb0;
        case 0x3f7fb4u: goto label_3f7fb4;
        case 0x3f7fb8u: goto label_3f7fb8;
        case 0x3f7fbcu: goto label_3f7fbc;
        case 0x3f7fc0u: goto label_3f7fc0;
        case 0x3f7fc4u: goto label_3f7fc4;
        case 0x3f7fc8u: goto label_3f7fc8;
        case 0x3f7fccu: goto label_3f7fcc;
        case 0x3f7fd0u: goto label_3f7fd0;
        case 0x3f7fd4u: goto label_3f7fd4;
        case 0x3f7fd8u: goto label_3f7fd8;
        case 0x3f7fdcu: goto label_3f7fdc;
        case 0x3f7fe0u: goto label_3f7fe0;
        case 0x3f7fe4u: goto label_3f7fe4;
        case 0x3f7fe8u: goto label_3f7fe8;
        case 0x3f7fecu: goto label_3f7fec;
        case 0x3f7ff0u: goto label_3f7ff0;
        case 0x3f7ff4u: goto label_3f7ff4;
        case 0x3f7ff8u: goto label_3f7ff8;
        case 0x3f7ffcu: goto label_3f7ffc;
        default: break;
    }

    ctx->pc = 0x3f7bd0u;

label_3f7bd0:
    // 0x3f7bd0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3f7bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3f7bd4:
    // 0x3f7bd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f7bd8:
    // 0x3f7bd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f7bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f7bdc:
    // 0x3f7bdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f7bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f7be0:
    // 0x3f7be0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f7be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f7be4:
    // 0x3f7be4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f7be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f7be8:
    // 0x3f7be8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f7be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7bec:
    // 0x3f7bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f7becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f7bf0:
    // 0x3f7bf0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3f7bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f7bf4:
    // 0x3f7bf4: 0x8e050a68  lw          $a1, 0xA68($s0)
    ctx->pc = 0x3f7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_3f7bf8:
    // 0x3f7bf8: 0x26060a50  addiu       $a2, $s0, 0xA50
    ctx->pc = 0x3f7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_3f7bfc:
    // 0x3f7bfc: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x3f7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3f7c00:
    // 0x3f7c00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3f7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3f7c04:
    // 0x3f7c04: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3f7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3f7c08:
    // 0x3f7c08: 0x108300e3  beq         $a0, $v1, . + 4 + (0xE3 << 2)
label_3f7c0c:
    if (ctx->pc == 0x3F7C0Cu) {
        ctx->pc = 0x3F7C0Cu;
            // 0x3f7c0c: 0x8cb10008  lw          $s1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->pc = 0x3F7C10u;
        goto label_3f7c10;
    }
    ctx->pc = 0x3F7C08u;
    {
        const bool branch_taken_0x3f7c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F7C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C08u;
            // 0x3f7c0c: 0x8cb10008  lw          $s1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c08) {
            ctx->pc = 0x3F7F98u;
            goto label_3f7f98;
        }
    }
    ctx->pc = 0x3F7C10u;
label_3f7c10:
    // 0x3f7c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7c14:
    // 0x3f7c14: 0x508300a1  beql        $a0, $v1, . + 4 + (0xA1 << 2)
label_3f7c18:
    if (ctx->pc == 0x3F7C18u) {
        ctx->pc = 0x3F7C18u;
            // 0x3f7c18: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x3F7C1Cu;
        goto label_3f7c1c;
    }
    ctx->pc = 0x3F7C14u;
    {
        const bool branch_taken_0x3f7c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f7c14) {
            ctx->pc = 0x3F7C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C14u;
            // 0x3f7c18: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7E9Cu;
            goto label_3f7e9c;
        }
    }
    ctx->pc = 0x3F7C1Cu;
label_3f7c1c:
    // 0x3f7c1c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3f7c20:
    if (ctx->pc == 0x3F7C20u) {
        ctx->pc = 0x3F7C20u;
            // 0x3f7c20: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x3F7C24u;
        goto label_3f7c24;
    }
    ctx->pc = 0x3F7C1Cu;
    {
        const bool branch_taken_0x3f7c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7c1c) {
            ctx->pc = 0x3F7C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C1Cu;
            // 0x3f7c20: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7C2Cu;
            goto label_3f7c2c;
        }
    }
    ctx->pc = 0x3F7C24u;
label_3f7c24:
    // 0x3f7c24: 0x100000ed  b           . + 4 + (0xED << 2)
label_3f7c28:
    if (ctx->pc == 0x3F7C28u) {
        ctx->pc = 0x3F7C28u;
            // 0x3f7c28: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F7C2Cu;
        goto label_3f7c2c;
    }
    ctx->pc = 0x3F7C24u;
    {
        const bool branch_taken_0x3f7c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C24u;
            // 0x3f7c28: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7c24) {
            ctx->pc = 0x3F7FDCu;
            goto label_3f7fdc;
        }
    }
    ctx->pc = 0x3F7C2Cu;
label_3f7c2c:
    // 0x3f7c2c: 0xc04cc04  jal         func_133010
label_3f7c30:
    if (ctx->pc == 0x3F7C30u) {
        ctx->pc = 0x3F7C30u;
            // 0x3f7c30: 0x260502d0  addiu       $a1, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->pc = 0x3F7C34u;
        goto label_3f7c34;
    }
    ctx->pc = 0x3F7C2Cu;
    SET_GPR_U32(ctx, 31, 0x3F7C34u);
    ctx->pc = 0x3F7C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C2Cu;
            // 0x3f7c30: 0x260502d0  addiu       $a1, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7C34u; }
        if (ctx->pc != 0x3F7C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7C34u; }
        if (ctx->pc != 0x3F7C34u) { return; }
    }
    ctx->pc = 0x3F7C34u;
label_3f7c34:
    // 0x3f7c34: 0x8e130d74  lw          $s3, 0xD74($s0)
    ctx->pc = 0x3f7c34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3f7c38:
    // 0x3f7c38: 0xc60202c8  lwc1        $f2, 0x2C8($s0)
    ctx->pc = 0x3f7c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f7c3c:
    // 0x3f7c3c: 0xc60102c4  lwc1        $f1, 0x2C4($s0)
    ctx->pc = 0x3f7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7c40:
    // 0x3f7c40: 0xc60002c0  lwc1        $f0, 0x2C0($s0)
    ctx->pc = 0x3f7c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7c44:
    // 0x3f7c44: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3f7c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3f7c48:
    // 0x3f7c48: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3f7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3f7c4c:
    // 0x3f7c4c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3f7c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3f7c50:
    // 0x3f7c50: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3f7c50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3f7c54:
    // 0x3f7c54: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3f7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3f7c58:
    // 0x3f7c58: 0xc0a5444  jal         func_295110
label_3f7c5c:
    if (ctx->pc == 0x3F7C5Cu) {
        ctx->pc = 0x3F7C5Cu;
            // 0x3f7c5c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F7C60u;
        goto label_3f7c60;
    }
    ctx->pc = 0x3F7C58u;
    SET_GPR_U32(ctx, 31, 0x3F7C60u);
    ctx->pc = 0x3F7C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C58u;
            // 0x3f7c5c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7C60u; }
        if (ctx->pc != 0x3F7C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7C60u; }
        if (ctx->pc != 0x3F7C60u) { return; }
    }
    ctx->pc = 0x3F7C60u;
label_3f7c60:
    // 0x3f7c60: 0xae6002d0  sw          $zero, 0x2D0($s3)
    ctx->pc = 0x3f7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 720), GPR_U32(ctx, 0));
label_3f7c64:
    // 0x3f7c64: 0xae6002d4  sw          $zero, 0x2D4($s3)
    ctx->pc = 0x3f7c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 724), GPR_U32(ctx, 0));
label_3f7c68:
    // 0x3f7c68: 0xae6002d8  sw          $zero, 0x2D8($s3)
    ctx->pc = 0x3f7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 0));
label_3f7c6c:
    // 0x3f7c6c: 0xae6002dc  sw          $zero, 0x2DC($s3)
    ctx->pc = 0x3f7c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
label_3f7c70:
    // 0x3f7c70: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7c74:
    // 0x3f7c74: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f7c78:
    // 0x3f7c78: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f7c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f7c7c:
    // 0x3f7c7c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f7c80:
    // 0x3f7c80: 0x320f809  jalr        $t9
label_3f7c84:
    if (ctx->pc == 0x3F7C84u) {
        ctx->pc = 0x3F7C84u;
            // 0x3f7c84: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F7C88u;
        goto label_3f7c88;
    }
    ctx->pc = 0x3F7C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7C88u);
        ctx->pc = 0x3F7C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7C80u;
            // 0x3f7c84: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7C88u; }
            if (ctx->pc != 0x3F7C88u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7C88u;
label_3f7c88:
    // 0x3f7c88: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7c8c:
    // 0x3f7c8c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3f7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f7c90:
    // 0x3f7c90: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f7c94:
    // 0x3f7c94: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7c98:
    // 0x3f7c98: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f7c9c:
    // 0x3f7c9c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7ca0:
    // 0x3f7ca0: 0xc04ccf4  jal         func_1333D0
label_3f7ca4:
    if (ctx->pc == 0x3F7CA4u) {
        ctx->pc = 0x3F7CA4u;
            // 0x3f7ca4: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7CA8u;
        goto label_3f7ca8;
    }
    ctx->pc = 0x3F7CA0u;
    SET_GPR_U32(ctx, 31, 0x3F7CA8u);
    ctx->pc = 0x3F7CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7CA0u;
            // 0x3f7ca4: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7CA8u; }
        if (ctx->pc != 0x3F7CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7CA8u; }
        if (ctx->pc != 0x3F7CA8u) { return; }
    }
    ctx->pc = 0x3F7CA8u;
label_3f7ca8:
    // 0x3f7ca8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7cac:
    // 0x3f7cac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f7cb0:
    // 0x3f7cb0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3f7cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f7cb4:
    // 0x3f7cb4: 0xc04cca0  jal         func_133280
label_3f7cb8:
    if (ctx->pc == 0x3F7CB8u) {
        ctx->pc = 0x3F7CB8u;
            // 0x3f7cb8: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F7CBCu;
        goto label_3f7cbc;
    }
    ctx->pc = 0x3F7CB4u;
    SET_GPR_U32(ctx, 31, 0x3F7CBCu);
    ctx->pc = 0x3F7CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7CB4u;
            // 0x3f7cb8: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7CBCu; }
        if (ctx->pc != 0x3F7CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7CBCu; }
        if (ctx->pc != 0x3F7CBCu) { return; }
    }
    ctx->pc = 0x3F7CBCu;
label_3f7cbc:
    // 0x3f7cbc: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3f7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3f7cc0:
    // 0x3f7cc0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3f7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f7cc4:
    // 0x3f7cc4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3f7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3f7cc8:
    // 0x3f7cc8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7ccc:
    // 0x3f7ccc: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f7cd0:
    // 0x3f7cd0: 0xc04cca0  jal         func_133280
label_3f7cd4:
    if (ctx->pc == 0x3F7CD4u) {
        ctx->pc = 0x3F7CD4u;
            // 0x3f7cd4: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7CD8u;
        goto label_3f7cd8;
    }
    ctx->pc = 0x3F7CD0u;
    SET_GPR_U32(ctx, 31, 0x3F7CD8u);
    ctx->pc = 0x3F7CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7CD0u;
            // 0x3f7cd4: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7CD8u; }
        if (ctx->pc != 0x3F7CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7CD8u; }
        if (ctx->pc != 0x3F7CD8u) { return; }
    }
    ctx->pc = 0x3F7CD8u;
label_3f7cd8:
    // 0x3f7cd8: 0x8e2301a8  lw          $v1, 0x1A8($s1)
    ctx->pc = 0x3f7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_3f7cdc:
    // 0x3f7cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f7ce0:
    // 0x3f7ce0: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_3f7ce4:
    if (ctx->pc == 0x3F7CE4u) {
        ctx->pc = 0x3F7CE4u;
            // 0x3f7ce4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F7CE8u;
        goto label_3f7ce8;
    }
    ctx->pc = 0x3F7CE0u;
    {
        const bool branch_taken_0x3f7ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f7ce0) {
            ctx->pc = 0x3F7CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7CE0u;
            // 0x3f7ce4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7D38u;
            goto label_3f7d38;
        }
    }
    ctx->pc = 0x3F7CE8u;
label_3f7ce8:
    // 0x3f7ce8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7cec:
    // 0x3f7cec: 0x24430a50  addiu       $v1, $v0, 0xA50
    ctx->pc = 0x3f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_3f7cf0:
    // 0x3f7cf0: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x3f7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
label_3f7cf4:
    // 0x3f7cf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f7cf8:
    // 0x3f7cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f7cfc:
    // 0x3f7cfc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3f7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f7d00:
    // 0x3f7d00: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3f7d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3f7d04:
    // 0x3f7d04: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f7d08:
    // 0x3f7d08: 0x320f809  jalr        $t9
label_3f7d0c:
    if (ctx->pc == 0x3F7D0Cu) {
        ctx->pc = 0x3F7D10u;
        goto label_3f7d10;
    }
    ctx->pc = 0x3F7D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7D10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7D10u; }
            if (ctx->pc != 0x3F7D10u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7D10u;
label_3f7d10:
    // 0x3f7d10: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7d14:
    // 0x3f7d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f7d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f7d18:
    // 0x3f7d18: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f7d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f7d1c:
    // 0x3f7d1c: 0x320f809  jalr        $t9
label_3f7d20:
    if (ctx->pc == 0x3F7D20u) {
        ctx->pc = 0x3F7D20u;
            // 0x3f7d20: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3F7D24u;
        goto label_3f7d24;
    }
    ctx->pc = 0x3F7D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7D24u);
        ctx->pc = 0x3F7D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7D1Cu;
            // 0x3f7d20: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7D24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7D24u; }
            if (ctx->pc != 0x3F7D24u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7D24u;
label_3f7d24:
    // 0x3f7d24: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7d28:
    // 0x3f7d28: 0x3c04bdbd  lui         $a0, 0xBDBD
    ctx->pc = 0x3f7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48573 << 16));
label_3f7d2c:
    // 0x3f7d2c: 0x3484a12f  ori         $a0, $a0, 0xA12F
    ctx->pc = 0x3f7d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)41263);
label_3f7d30:
    // 0x3f7d30: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_3f7d34:
    if (ctx->pc == 0x3F7D34u) {
        ctx->pc = 0x3F7D34u;
            // 0x3f7d34: 0xac640de4  sw          $a0, 0xDE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 4));
        ctx->pc = 0x3F7D38u;
        goto label_3f7d38;
    }
    ctx->pc = 0x3F7D30u;
    {
        const bool branch_taken_0x3f7d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7D30u;
            // 0x3f7d34: 0xac640de4  sw          $a0, 0xDE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7d30) {
            ctx->pc = 0x3F7FD8u;
            goto label_3f7fd8;
        }
    }
    ctx->pc = 0x3F7D38u;
label_3f7d38:
    // 0x3f7d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7d3c:
    // 0x3f7d3c: 0xc04cc08  jal         func_133020
label_3f7d40:
    if (ctx->pc == 0x3F7D40u) {
        ctx->pc = 0x3F7D40u;
            // 0x3f7d40: 0x244503d0  addiu       $a1, $v0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
        ctx->pc = 0x3F7D44u;
        goto label_3f7d44;
    }
    ctx->pc = 0x3F7D3Cu;
    SET_GPR_U32(ctx, 31, 0x3F7D44u);
    ctx->pc = 0x3F7D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7D3Cu;
            // 0x3f7d40: 0x244503d0  addiu       $a1, $v0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7D44u; }
        if (ctx->pc != 0x3F7D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7D44u; }
        if (ctx->pc != 0x3F7D44u) { return; }
    }
    ctx->pc = 0x3F7D44u;
label_3f7d44:
    // 0x3f7d44: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x3f7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_3f7d48:
    // 0x3f7d48: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3f7d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3f7d4c:
    // 0x3f7d4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f7d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7d50:
    // 0x3f7d50: 0x0  nop
    ctx->pc = 0x3f7d50u;
    // NOP
label_3f7d54:
    // 0x3f7d54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f7d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7d58:
    // 0x3f7d58: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
label_3f7d5c:
    if (ctx->pc == 0x3F7D5Cu) {
        ctx->pc = 0x3F7D5Cu;
            // 0x3f7d5c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F7D60u;
        goto label_3f7d60;
    }
    ctx->pc = 0x3F7D58u;
    {
        const bool branch_taken_0x3f7d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7d58) {
            ctx->pc = 0x3F7D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7D58u;
            // 0x3f7d5c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7E3Cu;
            goto label_3f7e3c;
        }
    }
    ctx->pc = 0x3F7D60u;
label_3f7d60:
    // 0x3f7d60: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7d64:
    // 0x3f7d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7d68:
    // 0x3f7d68: 0xc04cc08  jal         func_133020
label_3f7d6c:
    if (ctx->pc == 0x3F7D6Cu) {
        ctx->pc = 0x3F7D6Cu;
            // 0x3f7d6c: 0x244505d0  addiu       $a1, $v0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
        ctx->pc = 0x3F7D70u;
        goto label_3f7d70;
    }
    ctx->pc = 0x3F7D68u;
    SET_GPR_U32(ctx, 31, 0x3F7D70u);
    ctx->pc = 0x3F7D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7D68u;
            // 0x3f7d6c: 0x244505d0  addiu       $a1, $v0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7D70u; }
        if (ctx->pc != 0x3F7D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7D70u; }
        if (ctx->pc != 0x3F7D70u) { return; }
    }
    ctx->pc = 0x3F7D70u;
label_3f7d70:
    // 0x3f7d70: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x3f7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_3f7d74:
    // 0x3f7d74: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3f7d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3f7d78:
    // 0x3f7d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f7d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7d7c:
    // 0x3f7d7c: 0x0  nop
    ctx->pc = 0x3f7d7cu;
    // NOP
label_3f7d80:
    // 0x3f7d80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f7d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7d84:
    // 0x3f7d84: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_3f7d88:
    if (ctx->pc == 0x3F7D88u) {
        ctx->pc = 0x3F7D88u;
            // 0x3f7d88: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F7D8Cu;
        goto label_3f7d8c;
    }
    ctx->pc = 0x3F7D84u;
    {
        const bool branch_taken_0x3f7d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7d84) {
            ctx->pc = 0x3F7D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7D84u;
            // 0x3f7d88: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7DF0u;
            goto label_3f7df0;
        }
    }
    ctx->pc = 0x3F7D8Cu;
label_3f7d8c:
    // 0x3f7d8c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7d90:
    // 0x3f7d90: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3f7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_3f7d94:
    // 0x3f7d94: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x3f7d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3f7d98:
    // 0x3f7d98: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x3f7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_3f7d9c:
    // 0x3f7d9c: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3f7d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7da0:
    // 0x3f7da0: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x3f7da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_3f7da4:
    // 0x3f7da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f7da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7da8:
    // 0x3f7da8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f7da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7dac:
    // 0x3f7dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f7dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f7db0:
    // 0x3f7db0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f7db4:
    // 0x3f7db4: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3f7db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3f7db8:
    // 0x3f7db8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7dbc:
    // 0x3f7dbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7dc0:
    // 0x3f7dc0: 0xc0767f0  jal         func_1D9FC0
label_3f7dc4:
    if (ctx->pc == 0x3F7DC4u) {
        ctx->pc = 0x3F7DC4u;
            // 0x3f7dc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7DC8u;
        goto label_3f7dc8;
    }
    ctx->pc = 0x3F7DC0u;
    SET_GPR_U32(ctx, 31, 0x3F7DC8u);
    ctx->pc = 0x3F7DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7DC0u;
            // 0x3f7dc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7DC8u; }
        if (ctx->pc != 0x3F7DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7DC8u; }
        if (ctx->pc != 0x3F7DC8u) { return; }
    }
    ctx->pc = 0x3F7DC8u;
label_3f7dc8:
    // 0x3f7dc8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3f7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7dcc:
    // 0x3f7dcc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3f7dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3f7dd0:
    // 0x3f7dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7dd4:
    // 0x3f7dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7dd8:
    // 0x3f7dd8: 0x8ca50d60  lw          $a1, 0xD60($a1)
    ctx->pc = 0x3f7dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_3f7ddc:
    // 0x3f7ddc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3f7ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_3f7de0:
    // 0x3f7de0: 0xc0effcc  jal         func_3BFF30
label_3f7de4:
    if (ctx->pc == 0x3F7DE4u) {
        ctx->pc = 0x3F7DE4u;
            // 0x3f7de4: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x3F7DE8u;
        goto label_3f7de8;
    }
    ctx->pc = 0x3F7DE0u;
    SET_GPR_U32(ctx, 31, 0x3F7DE8u);
    ctx->pc = 0x3F7DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7DE0u;
            // 0x3f7de4: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFF30u;
    if (runtime->hasFunction(0x3BFF30u)) {
        auto targetFn = runtime->lookupFunction(0x3BFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7DE8u; }
        if (ctx->pc != 0x3F7DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFF30_0x3bff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7DE8u; }
        if (ctx->pc != 0x3F7DE8u) { return; }
    }
    ctx->pc = 0x3F7DE8u;
label_3f7de8:
    // 0x3f7de8: 0x1000007b  b           . + 4 + (0x7B << 2)
label_3f7dec:
    if (ctx->pc == 0x3F7DECu) {
        ctx->pc = 0x3F7DF0u;
        goto label_3f7df0;
    }
    ctx->pc = 0x3F7DE8u;
    {
        const bool branch_taken_0x3f7de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7de8) {
            ctx->pc = 0x3F7FD8u;
            goto label_3f7fd8;
        }
    }
    ctx->pc = 0x3F7DF0u;
label_3f7df0:
    // 0x3f7df0: 0x24430a50  addiu       $v1, $v0, 0xA50
    ctx->pc = 0x3f7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_3f7df4:
    // 0x3f7df4: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x3f7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
label_3f7df8:
    // 0x3f7df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f7dfc:
    // 0x3f7dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f7e00:
    // 0x3f7e00: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3f7e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f7e04:
    // 0x3f7e04: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3f7e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3f7e08:
    // 0x3f7e08: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f7e0c:
    // 0x3f7e0c: 0x320f809  jalr        $t9
label_3f7e10:
    if (ctx->pc == 0x3F7E10u) {
        ctx->pc = 0x3F7E14u;
        goto label_3f7e14;
    }
    ctx->pc = 0x3F7E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7E14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7E14u; }
            if (ctx->pc != 0x3F7E14u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7E14u;
label_3f7e14:
    // 0x3f7e14: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7e18:
    // 0x3f7e18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f7e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f7e1c:
    // 0x3f7e1c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f7e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f7e20:
    // 0x3f7e20: 0x320f809  jalr        $t9
label_3f7e24:
    if (ctx->pc == 0x3F7E24u) {
        ctx->pc = 0x3F7E24u;
            // 0x3f7e24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3F7E28u;
        goto label_3f7e28;
    }
    ctx->pc = 0x3F7E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7E28u);
        ctx->pc = 0x3F7E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7E20u;
            // 0x3f7e24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7E28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7E28u; }
            if (ctx->pc != 0x3F7E28u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7E28u;
label_3f7e28:
    // 0x3f7e28: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7e2c:
    // 0x3f7e2c: 0x3c04bdbd  lui         $a0, 0xBDBD
    ctx->pc = 0x3f7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48573 << 16));
label_3f7e30:
    // 0x3f7e30: 0x3484a12f  ori         $a0, $a0, 0xA12F
    ctx->pc = 0x3f7e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)41263);
label_3f7e34:
    // 0x3f7e34: 0x10000068  b           . + 4 + (0x68 << 2)
label_3f7e38:
    if (ctx->pc == 0x3F7E38u) {
        ctx->pc = 0x3F7E38u;
            // 0x3f7e38: 0xac640de4  sw          $a0, 0xDE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 4));
        ctx->pc = 0x3F7E3Cu;
        goto label_3f7e3c;
    }
    ctx->pc = 0x3F7E34u;
    {
        const bool branch_taken_0x3f7e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7E34u;
            // 0x3f7e38: 0xac640de4  sw          $a0, 0xDE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e34) {
            ctx->pc = 0x3F7FD8u;
            goto label_3f7fd8;
        }
    }
    ctx->pc = 0x3F7E3Cu;
label_3f7e3c:
    // 0x3f7e3c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3f7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_3f7e40:
    // 0x3f7e40: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x3f7e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3f7e44:
    // 0x3f7e44: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x3f7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_3f7e48:
    // 0x3f7e48: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3f7e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7e4c:
    // 0x3f7e4c: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x3f7e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_3f7e50:
    // 0x3f7e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f7e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7e54:
    // 0x3f7e54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f7e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7e58:
    // 0x3f7e58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f7e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f7e5c:
    // 0x3f7e5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f7e60:
    // 0x3f7e60: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3f7e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3f7e64:
    // 0x3f7e64: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7e68:
    // 0x3f7e68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7e6c:
    // 0x3f7e6c: 0xc0767f0  jal         func_1D9FC0
label_3f7e70:
    if (ctx->pc == 0x3F7E70u) {
        ctx->pc = 0x3F7E70u;
            // 0x3f7e70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E74u;
        goto label_3f7e74;
    }
    ctx->pc = 0x3F7E6Cu;
    SET_GPR_U32(ctx, 31, 0x3F7E74u);
    ctx->pc = 0x3F7E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7E6Cu;
            // 0x3f7e70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7E74u; }
        if (ctx->pc != 0x3F7E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7E74u; }
        if (ctx->pc != 0x3F7E74u) { return; }
    }
    ctx->pc = 0x3F7E74u;
label_3f7e74:
    // 0x3f7e74: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3f7e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7e78:
    // 0x3f7e78: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3f7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3f7e7c:
    // 0x3f7e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f7e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7e80:
    // 0x3f7e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e84:
    // 0x3f7e84: 0x8ca50d60  lw          $a1, 0xD60($a1)
    ctx->pc = 0x3f7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_3f7e88:
    // 0x3f7e88: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3f7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_3f7e8c:
    // 0x3f7e8c: 0xc0effcc  jal         func_3BFF30
label_3f7e90:
    if (ctx->pc == 0x3F7E90u) {
        ctx->pc = 0x3F7E90u;
            // 0x3f7e90: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x3F7E94u;
        goto label_3f7e94;
    }
    ctx->pc = 0x3F7E8Cu;
    SET_GPR_U32(ctx, 31, 0x3F7E94u);
    ctx->pc = 0x3F7E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7E8Cu;
            // 0x3f7e90: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFF30u;
    if (runtime->hasFunction(0x3BFF30u)) {
        auto targetFn = runtime->lookupFunction(0x3BFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7E94u; }
        if (ctx->pc != 0x3F7E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFF30_0x3bff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7E94u; }
        if (ctx->pc != 0x3F7E94u) { return; }
    }
    ctx->pc = 0x3F7E94u;
label_3f7e94:
    // 0x3f7e94: 0x10000050  b           . + 4 + (0x50 << 2)
label_3f7e98:
    if (ctx->pc == 0x3F7E98u) {
        ctx->pc = 0x3F7E9Cu;
        goto label_3f7e9c;
    }
    ctx->pc = 0x3F7E94u;
    {
        const bool branch_taken_0x3f7e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7e94) {
            ctx->pc = 0x3F7FD8u;
            goto label_3f7fd8;
        }
    }
    ctx->pc = 0x3F7E9Cu;
label_3f7e9c:
    // 0x3f7e9c: 0xc04cc04  jal         func_133010
label_3f7ea0:
    if (ctx->pc == 0x3F7EA0u) {
        ctx->pc = 0x3F7EA0u;
            // 0x3f7ea0: 0x260502d0  addiu       $a1, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->pc = 0x3F7EA4u;
        goto label_3f7ea4;
    }
    ctx->pc = 0x3F7E9Cu;
    SET_GPR_U32(ctx, 31, 0x3F7EA4u);
    ctx->pc = 0x3F7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7E9Cu;
            // 0x3f7ea0: 0x260502d0  addiu       $a1, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7EA4u; }
        if (ctx->pc != 0x3F7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7EA4u; }
        if (ctx->pc != 0x3F7EA4u) { return; }
    }
    ctx->pc = 0x3F7EA4u;
label_3f7ea4:
    // 0x3f7ea4: 0x8e110d74  lw          $s1, 0xD74($s0)
    ctx->pc = 0x3f7ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3f7ea8:
    // 0x3f7ea8: 0xc60202c8  lwc1        $f2, 0x2C8($s0)
    ctx->pc = 0x3f7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f7eac:
    // 0x3f7eac: 0xc60102c4  lwc1        $f1, 0x2C4($s0)
    ctx->pc = 0x3f7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7eb0:
    // 0x3f7eb0: 0xc60002c0  lwc1        $f0, 0x2C0($s0)
    ctx->pc = 0x3f7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7eb4:
    // 0x3f7eb4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f7eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f7eb8:
    // 0x3f7eb8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f7eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3f7ebc:
    // 0x3f7ebc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3f7ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3f7ec0:
    // 0x3f7ec0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3f7ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3f7ec4:
    // 0x3f7ec4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f7ec8:
    // 0x3f7ec8: 0xc0a5444  jal         func_295110
label_3f7ecc:
    if (ctx->pc == 0x3F7ECCu) {
        ctx->pc = 0x3F7ECCu;
            // 0x3f7ecc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F7ED0u;
        goto label_3f7ed0;
    }
    ctx->pc = 0x3F7EC8u;
    SET_GPR_U32(ctx, 31, 0x3F7ED0u);
    ctx->pc = 0x3F7ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7EC8u;
            // 0x3f7ecc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7ED0u; }
        if (ctx->pc != 0x3F7ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7ED0u; }
        if (ctx->pc != 0x3F7ED0u) { return; }
    }
    ctx->pc = 0x3F7ED0u;
label_3f7ed0:
    // 0x3f7ed0: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x3f7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_3f7ed4:
    // 0x3f7ed4: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x3f7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_3f7ed8:
    // 0x3f7ed8: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x3f7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_3f7edc:
    // 0x3f7edc: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x3f7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_3f7ee0:
    // 0x3f7ee0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7ee4:
    // 0x3f7ee4: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f7ee8:
    // 0x3f7ee8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f7ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f7eec:
    // 0x3f7eec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f7ef0:
    // 0x3f7ef0: 0x320f809  jalr        $t9
label_3f7ef4:
    if (ctx->pc == 0x3F7EF4u) {
        ctx->pc = 0x3F7EF4u;
            // 0x3f7ef4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F7EF8u;
        goto label_3f7ef8;
    }
    ctx->pc = 0x3F7EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7EF8u);
        ctx->pc = 0x3F7EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7EF0u;
            // 0x3f7ef4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7EF8u; }
            if (ctx->pc != 0x3F7EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7EF8u;
label_3f7ef8:
    // 0x3f7ef8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7efc:
    // 0x3f7efc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f7f00:
    // 0x3f7f00: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f7f04:
    // 0x3f7f04: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f08:
    // 0x3f7f08: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f7f0c:
    // 0x3f7f0c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f10:
    // 0x3f7f10: 0xc04ccf4  jal         func_1333D0
label_3f7f14:
    if (ctx->pc == 0x3F7F14u) {
        ctx->pc = 0x3F7F14u;
            // 0x3f7f14: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7F18u;
        goto label_3f7f18;
    }
    ctx->pc = 0x3F7F10u;
    SET_GPR_U32(ctx, 31, 0x3F7F18u);
    ctx->pc = 0x3F7F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7F10u;
            // 0x3f7f14: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F18u; }
        if (ctx->pc != 0x3F7F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F18u; }
        if (ctx->pc != 0x3F7F18u) { return; }
    }
    ctx->pc = 0x3F7F18u;
label_3f7f18:
    // 0x3f7f18: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f1c:
    // 0x3f7f1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f7f20:
    // 0x3f7f20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3f7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f7f24:
    // 0x3f7f24: 0xc04cca0  jal         func_133280
label_3f7f28:
    if (ctx->pc == 0x3F7F28u) {
        ctx->pc = 0x3F7F28u;
            // 0x3f7f28: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F7F2Cu;
        goto label_3f7f2c;
    }
    ctx->pc = 0x3F7F24u;
    SET_GPR_U32(ctx, 31, 0x3F7F2Cu);
    ctx->pc = 0x3F7F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7F24u;
            // 0x3f7f28: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F2Cu; }
        if (ctx->pc != 0x3F7F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F2Cu; }
        if (ctx->pc != 0x3F7F2Cu) { return; }
    }
    ctx->pc = 0x3F7F2Cu;
label_3f7f2c:
    // 0x3f7f2c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3f7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3f7f30:
    // 0x3f7f30: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3f7f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f7f34:
    // 0x3f7f34: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3f7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3f7f38:
    // 0x3f7f38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f3c:
    // 0x3f7f3c: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f7f40:
    // 0x3f7f40: 0xc04cca0  jal         func_133280
label_3f7f44:
    if (ctx->pc == 0x3F7F44u) {
        ctx->pc = 0x3F7F44u;
            // 0x3f7f44: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7F48u;
        goto label_3f7f48;
    }
    ctx->pc = 0x3F7F40u;
    SET_GPR_U32(ctx, 31, 0x3F7F48u);
    ctx->pc = 0x3F7F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7F40u;
            // 0x3f7f44: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F48u; }
        if (ctx->pc != 0x3F7F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F48u; }
        if (ctx->pc != 0x3F7F48u) { return; }
    }
    ctx->pc = 0x3F7F48u;
label_3f7f48:
    // 0x3f7f48: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f4c:
    // 0x3f7f4c: 0x24430a50  addiu       $v1, $v0, 0xA50
    ctx->pc = 0x3f7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_3f7f50:
    // 0x3f7f50: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x3f7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
label_3f7f54:
    // 0x3f7f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f7f58:
    // 0x3f7f58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f7f5c:
    // 0x3f7f5c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3f7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f7f60:
    // 0x3f7f60: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3f7f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3f7f64:
    // 0x3f7f64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f7f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f7f68:
    // 0x3f7f68: 0x320f809  jalr        $t9
label_3f7f6c:
    if (ctx->pc == 0x3F7F6Cu) {
        ctx->pc = 0x3F7F70u;
        goto label_3f7f70;
    }
    ctx->pc = 0x3F7F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7F70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F70u; }
            if (ctx->pc != 0x3F7F70u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7F70u;
label_3f7f70:
    // 0x3f7f70: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f74:
    // 0x3f7f74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f7f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f7f78:
    // 0x3f7f78: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f7f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f7f7c:
    // 0x3f7f7c: 0x320f809  jalr        $t9
label_3f7f80:
    if (ctx->pc == 0x3F7F80u) {
        ctx->pc = 0x3F7F80u;
            // 0x3f7f80: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3F7F84u;
        goto label_3f7f84;
    }
    ctx->pc = 0x3F7F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7F84u);
        ctx->pc = 0x3F7F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7F7Cu;
            // 0x3f7f80: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7F84u; }
            if (ctx->pc != 0x3F7F84u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7F84u;
label_3f7f84:
    // 0x3f7f84: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7f88:
    // 0x3f7f88: 0x3c04bdbd  lui         $a0, 0xBDBD
    ctx->pc = 0x3f7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48573 << 16));
label_3f7f8c:
    // 0x3f7f8c: 0x3484a12f  ori         $a0, $a0, 0xA12F
    ctx->pc = 0x3f7f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)41263);
label_3f7f90:
    // 0x3f7f90: 0x10000011  b           . + 4 + (0x11 << 2)
label_3f7f94:
    if (ctx->pc == 0x3F7F94u) {
        ctx->pc = 0x3F7F94u;
            // 0x3f7f94: 0xac640de4  sw          $a0, 0xDE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 4));
        ctx->pc = 0x3F7F98u;
        goto label_3f7f98;
    }
    ctx->pc = 0x3F7F90u;
    {
        const bool branch_taken_0x3f7f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7F90u;
            // 0x3f7f94: 0xac640de4  sw          $a0, 0xDE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f90) {
            ctx->pc = 0x3F7FD8u;
            goto label_3f7fd8;
        }
    }
    ctx->pc = 0x3F7F98u;
label_3f7f98:
    // 0x3f7f98: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x3f7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_3f7f9c:
    // 0x3f7f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7fa0:
    // 0x3f7fa0: 0x344338e4  ori         $v1, $v0, 0x38E4
    ctx->pc = 0x3f7fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_3f7fa4:
    // 0x3f7fa4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f7fa8:
    // 0x3f7fa8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f7fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7fac:
    // 0x3f7fac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7fb0:
    // 0x3f7fb0: 0xc0767f0  jal         func_1D9FC0
label_3f7fb4:
    if (ctx->pc == 0x3F7FB4u) {
        ctx->pc = 0x3F7FB4u;
            // 0x3f7fb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7FB8u;
        goto label_3f7fb8;
    }
    ctx->pc = 0x3F7FB0u;
    SET_GPR_U32(ctx, 31, 0x3F7FB8u);
    ctx->pc = 0x3F7FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7FB0u;
            // 0x3f7fb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7FB8u; }
        if (ctx->pc != 0x3F7FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7FB8u; }
        if (ctx->pc != 0x3F7FB8u) { return; }
    }
    ctx->pc = 0x3F7FB8u;
label_3f7fb8:
    // 0x3f7fb8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3f7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7fbc:
    // 0x3f7fbc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3f7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3f7fc0:
    // 0x3f7fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7fc4:
    // 0x3f7fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7fc8:
    // 0x3f7fc8: 0x8ca50d60  lw          $a1, 0xD60($a1)
    ctx->pc = 0x3f7fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_3f7fcc:
    // 0x3f7fcc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3f7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_3f7fd0:
    // 0x3f7fd0: 0xc0effcc  jal         func_3BFF30
label_3f7fd4:
    if (ctx->pc == 0x3F7FD4u) {
        ctx->pc = 0x3F7FD4u;
            // 0x3f7fd4: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x3F7FD8u;
        goto label_3f7fd8;
    }
    ctx->pc = 0x3F7FD0u;
    SET_GPR_U32(ctx, 31, 0x3F7FD8u);
    ctx->pc = 0x3F7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7FD0u;
            // 0x3f7fd4: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFF30u;
    if (runtime->hasFunction(0x3BFF30u)) {
        auto targetFn = runtime->lookupFunction(0x3BFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7FD8u; }
        if (ctx->pc != 0x3F7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFF30_0x3bff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7FD8u; }
        if (ctx->pc != 0x3F7FD8u) { return; }
    }
    ctx->pc = 0x3F7FD8u;
label_3f7fd8:
    // 0x3f7fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f7fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f7fdc:
    // 0x3f7fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f7fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7fe0:
    // 0x3f7fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f7fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7fe4:
    // 0x3f7fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f7fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7fe8:
    // 0x3f7fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f7fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f7fec:
    // 0x3f7fec: 0x3e00008  jr          $ra
label_3f7ff0:
    if (ctx->pc == 0x3F7FF0u) {
        ctx->pc = 0x3F7FF0u;
            // 0x3f7ff0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3F7FF4u;
        goto label_3f7ff4;
    }
    ctx->pc = 0x3F7FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7FECu;
            // 0x3f7ff0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F7FF4u;
label_3f7ff4:
    // 0x3f7ff4: 0x0  nop
    ctx->pc = 0x3f7ff4u;
    // NOP
label_3f7ff8:
    // 0x3f7ff8: 0x0  nop
    ctx->pc = 0x3f7ff8u;
    // NOP
label_3f7ffc:
    // 0x3f7ffc: 0x0  nop
    ctx->pc = 0x3f7ffcu;
    // NOP
}
