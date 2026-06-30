#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4CC0
// Address: 0x1e4cc0 - 0x1e4fd0
void sub_001E4CC0_0x1e4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4CC0_0x1e4cc0");
#endif

    switch (ctx->pc) {
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        case 0x1e4e28u: goto label_1e4e28;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e48u: goto label_1e4e48;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e50u: goto label_1e4e50;
        case 0x1e4e54u: goto label_1e4e54;
        case 0x1e4e58u: goto label_1e4e58;
        case 0x1e4e5cu: goto label_1e4e5c;
        case 0x1e4e60u: goto label_1e4e60;
        case 0x1e4e64u: goto label_1e4e64;
        case 0x1e4e68u: goto label_1e4e68;
        case 0x1e4e6cu: goto label_1e4e6c;
        case 0x1e4e70u: goto label_1e4e70;
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e78u: goto label_1e4e78;
        case 0x1e4e7cu: goto label_1e4e7c;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e84u: goto label_1e4e84;
        case 0x1e4e88u: goto label_1e4e88;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e90u: goto label_1e4e90;
        case 0x1e4e94u: goto label_1e4e94;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4e9cu: goto label_1e4e9c;
        case 0x1e4ea0u: goto label_1e4ea0;
        case 0x1e4ea4u: goto label_1e4ea4;
        case 0x1e4ea8u: goto label_1e4ea8;
        case 0x1e4eacu: goto label_1e4eac;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4eb4u: goto label_1e4eb4;
        case 0x1e4eb8u: goto label_1e4eb8;
        case 0x1e4ebcu: goto label_1e4ebc;
        case 0x1e4ec0u: goto label_1e4ec0;
        case 0x1e4ec4u: goto label_1e4ec4;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4ed0u: goto label_1e4ed0;
        case 0x1e4ed4u: goto label_1e4ed4;
        case 0x1e4ed8u: goto label_1e4ed8;
        case 0x1e4edcu: goto label_1e4edc;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ee4u: goto label_1e4ee4;
        case 0x1e4ee8u: goto label_1e4ee8;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4ef0u: goto label_1e4ef0;
        case 0x1e4ef4u: goto label_1e4ef4;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f00u: goto label_1e4f00;
        case 0x1e4f04u: goto label_1e4f04;
        case 0x1e4f08u: goto label_1e4f08;
        case 0x1e4f0cu: goto label_1e4f0c;
        case 0x1e4f10u: goto label_1e4f10;
        case 0x1e4f14u: goto label_1e4f14;
        case 0x1e4f18u: goto label_1e4f18;
        case 0x1e4f1cu: goto label_1e4f1c;
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f24u: goto label_1e4f24;
        case 0x1e4f28u: goto label_1e4f28;
        case 0x1e4f2cu: goto label_1e4f2c;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        default: break;
    }

    ctx->pc = 0x1e4cc0u;

label_1e4cc0:
    // 0x1e4cc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e4cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e4cc4:
    // 0x1e4cc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e4cc8:
    // 0x1e4cc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e4cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e4ccc:
    // 0x1e4ccc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4cd0:
    // 0x1e4cd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4cd4:
    // 0x1e4cd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4cd8:
    // 0x1e4cd8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e4cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cdc:
    // 0x1e4cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4ce0:
    // 0x1e4ce0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e4ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ce4:
    // 0x1e4ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4ce8:
    // 0x1e4ce8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1e4ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1e4cec:
    // 0x1e4cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4cf0:
    // 0x1e4cf0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e4cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cf4:
    // 0x1e4cf4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e4cf8:
    // 0x1e4cf8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e4cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cfc:
    // 0x1e4cfc: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e4d00:
    // 0x1e4d00: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e4d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e4d04:
    // 0x1e4d04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e4d08:
    if (ctx->pc == 0x1E4D08u) {
        ctx->pc = 0x1E4D08u;
            // 0x1e4d08: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1E4D0Cu;
        goto label_1e4d0c;
    }
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D04u;
            // 0x1e4d08: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4D40u;
            goto label_1e4d40;
        }
    }
    ctx->pc = 0x1E4D0Cu;
label_1e4d0c:
    // 0x1e4d0c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1e4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e4d10:
    // 0x1e4d10: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e4d14:
    // 0x1e4d14: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x1e4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_1e4d18:
    // 0x1e4d18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e4d1c:
    // 0x1e4d1c: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x1e4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
label_1e4d20:
    // 0x1e4d20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e4d24:
    // 0x1e4d24: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e4d28:
    // 0x1e4d28: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e4d2c:
    // 0x1e4d2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e4d30:
    // 0x1e4d30: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e4d34:
    // 0x1e4d34: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e4d38:
    // 0x1e4d38: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e4d3c:
    // 0x1e4d3c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e4d40:
    // 0x1e4d40: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1e4d40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4d44:
    // 0x1e4d44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4d48:
    // 0x1e4d48: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
label_1e4d4c:
    // 0x1e4d4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e4d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d50:
    // 0x1e4d50: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d54:
    // 0x1e4d54: 0x27a80078  addiu       $t0, $sp, 0x78
    ctx->pc = 0x1e4d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1e4d58:
    // 0x1e4d58: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x1e4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_1e4d5c:
    // 0x1e4d5c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e4d60:
    // 0x1e4d60: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1e4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1e4d64:
    // 0x1e4d64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e4d68:
    // 0x1e4d68: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e4d6c:
    // 0x1e4d6c: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1e4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_1e4d70:
    // 0x1e4d70: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1e4d74:
    // 0x1e4d74: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1e4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1e4d78:
    // 0x1e4d78: 0xa3a0007c  sb          $zero, 0x7C($sp)
    ctx->pc = 0x1e4d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 0));
label_1e4d7c:
    // 0x1e4d7c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1e4d80:
    // 0x1e4d80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4d84:
    // 0x1e4d84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e4d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e4d88:
    // 0x1e4d88: 0x320f809  jalr        $t9
label_1e4d8c:
    if (ctx->pc == 0x1E4D8Cu) {
        ctx->pc = 0x1E4D8Cu;
            // 0x1e4d8c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E4D90u;
        goto label_1e4d90;
    }
    ctx->pc = 0x1E4D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4D90u);
        ctx->pc = 0x1E4D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D88u;
            // 0x1e4d8c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4D90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D90u; }
            if (ctx->pc != 0x1E4D90u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4D90u;
label_1e4d90:
    // 0x1e4d90: 0x83a3007c  lb          $v1, 0x7C($sp)
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
label_1e4d94:
    // 0x1e4d94: 0x5060003f  beql        $v1, $zero, . + 4 + (0x3F << 2)
label_1e4d98:
    if (ctx->pc == 0x1E4D98u) {
        ctx->pc = 0x1E4D98u;
            // 0x1e4d98: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x1E4D9Cu;
        goto label_1e4d9c;
    }
    ctx->pc = 0x1E4D94u;
    {
        const bool branch_taken_0x1e4d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d94) {
            ctx->pc = 0x1E4D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D94u;
            // 0x1e4d98: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4E94u;
            goto label_1e4e94;
        }
    }
    ctx->pc = 0x1E4D9Cu;
label_1e4d9c:
    // 0x1e4d9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4da0:
    // 0x1e4da0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e4da4:
    // 0x1e4da4: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e4da8:
    // 0x1e4da8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4dac:
    // 0x1e4dac: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e4db0:
    // 0x1e4db0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e4db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e4db4:
    // 0x1e4db4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e4db8:
    if (ctx->pc == 0x1E4DB8u) {
        ctx->pc = 0x1E4DB8u;
            // 0x1e4db8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E4DBCu;
        goto label_1e4dbc;
    }
    ctx->pc = 0x1E4DB4u;
    {
        const bool branch_taken_0x1e4db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DB4u;
            // 0x1e4db8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4db4) {
            ctx->pc = 0x1E4DE4u;
            goto label_1e4de4;
        }
    }
    ctx->pc = 0x1E4DBCu;
label_1e4dbc:
    // 0x1e4dbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e4dc0:
    // 0x1e4dc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e4dc4:
    // 0x1e4dc4: 0x2442a960  addiu       $v0, $v0, -0x56A0
    ctx->pc = 0x1e4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945120));
label_1e4dc8:
    // 0x1e4dc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e4dcc:
    // 0x1e4dcc: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e4dd0:
    // 0x1e4dd0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e4dd4:
    // 0x1e4dd4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e4dd8:
    // 0x1e4dd8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e4ddc:
    // 0x1e4ddc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e4de0:
    // 0x1e4de0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e4de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e4de4:
    // 0x1e4de4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1e4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1e4de8:
    // 0x1e4de8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e4dec:
    // 0x1e4dec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e4df0:
    // 0x1e4df0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1e4df4:
    // 0x1e4df4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1e4df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1e4df8:
    // 0x1e4df8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1e4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e4dfc:
    // 0x1e4dfc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1e4e00:
    if (ctx->pc == 0x1E4E00u) {
        ctx->pc = 0x1E4E00u;
            // 0x1e4e00: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x1E4E04u;
        goto label_1e4e04;
    }
    ctx->pc = 0x1E4DFCu;
    {
        const bool branch_taken_0x1e4dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4dfc) {
            ctx->pc = 0x1E4E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DFCu;
            // 0x1e4e00: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4E70u;
            goto label_1e4e70;
        }
    }
    ctx->pc = 0x1E4E04u;
label_1e4e04:
    // 0x1e4e04: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x1e4e04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e4e08:
    // 0x1e4e08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e4e0c:
    // 0x1e4e0c: 0x82420010  lb          $v0, 0x10($s2)
    ctx->pc = 0x1e4e0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1e4e10:
    // 0x1e4e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e14:
    // 0x1e4e14: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x1e4e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e4e18:
    // 0x1e4e18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e4e1c:
    // 0x1e4e1c: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x1e4e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4e20:
    // 0x1e4e20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e4e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e4e24:
    // 0x1e4e24: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1e4e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e4e28:
    // 0x1e4e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e4e2c:
    if (ctx->pc == 0x1E4E2Cu) {
        ctx->pc = 0x1E4E2Cu;
            // 0x1e4e2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E30u;
        goto label_1e4e30;
    }
    ctx->pc = 0x1E4E28u;
    {
        const bool branch_taken_0x1e4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E28u;
            // 0x1e4e2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e28) {
            ctx->pc = 0x1E4E38u;
            goto label_1e4e38;
        }
    }
    ctx->pc = 0x1E4E30u;
label_1e4e30:
    // 0x1e4e30: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e4e34:
    if (ctx->pc == 0x1E4E34u) {
        ctx->pc = 0x1E4E34u;
            // 0x1e4e34: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->pc = 0x1E4E38u;
        goto label_1e4e38;
    }
    ctx->pc = 0x1E4E30u;
    {
        const bool branch_taken_0x1e4e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E30u;
            // 0x1e4e34: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e30) {
            ctx->pc = 0x1E4E3Cu;
            goto label_1e4e3c;
        }
    }
    ctx->pc = 0x1E4E38u;
label_1e4e38:
    // 0x1e4e38: 0x254301a0  addiu       $v1, $t2, 0x1A0
    ctx->pc = 0x1e4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 416));
label_1e4e3c:
    // 0x1e4e3c: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x1e4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1e4e40:
    // 0x1e4e40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e4e44:
    // 0x1e4e44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e4e48:
    // 0x1e4e48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1e4e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4e4c:
    // 0x1e4e4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e4e50:
    // 0x1e4e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4e54:
    // 0x1e4e54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4e58:
    // 0x1e4e58: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1e4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1e4e5c:
    // 0x1e4e5c: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e4e60:
    // 0x1e4e60: 0x40f809  jalr        $v0
label_1e4e64:
    if (ctx->pc == 0x1E4E64u) {
        ctx->pc = 0x1E4E68u;
        goto label_1e4e68;
    }
    ctx->pc = 0x1E4E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4E68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E68u; }
            if (ctx->pc != 0x1E4E68u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4E68u;
label_1e4e68:
    // 0x1e4e68: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1e4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1e4e6c:
    // 0x1e4e6c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1e4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e4e70:
    // 0x1e4e70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e4e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e74:
    // 0x1e4e74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e78:
    // 0x1e4e78: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e4e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e7c:
    // 0x1e4e7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4e80:
    // 0x1e4e80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e4e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e4e84:
    // 0x1e4e84: 0x320f809  jalr        $t9
label_1e4e88:
    if (ctx->pc == 0x1E4E88u) {
        ctx->pc = 0x1E4E88u;
            // 0x1e4e88: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E4E8Cu;
        goto label_1e4e8c;
    }
    ctx->pc = 0x1E4E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4E8Cu);
        ctx->pc = 0x1E4E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E84u;
            // 0x1e4e88: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E8Cu; }
            if (ctx->pc != 0x1E4E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E4E8Cu;
label_1e4e8c:
    // 0x1e4e8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e4e90:
    if (ctx->pc == 0x1E4E90u) {
        ctx->pc = 0x1E4E94u;
        goto label_1e4e94;
    }
    ctx->pc = 0x1E4E8Cu;
    {
        const bool branch_taken_0x1e4e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e8c) {
            ctx->pc = 0x1E4EB0u;
            goto label_1e4eb0;
        }
    }
    ctx->pc = 0x1E4E94u;
label_1e4e94:
    // 0x1e4e94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e4e98:
    if (ctx->pc == 0x1E4E98u) {
        ctx->pc = 0x1E4E9Cu;
        goto label_1e4e9c;
    }
    ctx->pc = 0x1E4E94u;
    {
        const bool branch_taken_0x1e4e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e94) {
            ctx->pc = 0x1E4EB0u;
            goto label_1e4eb0;
        }
    }
    ctx->pc = 0x1E4E9Cu;
label_1e4e9c:
    // 0x1e4e9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4ea0:
    // 0x1e4ea0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e4ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e4ea4:
    // 0x1e4ea4: 0x320f809  jalr        $t9
label_1e4ea8:
    if (ctx->pc == 0x1E4EA8u) {
        ctx->pc = 0x1E4EA8u;
            // 0x1e4ea8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1E4EACu;
        goto label_1e4eac;
    }
    ctx->pc = 0x1E4EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4EACu);
        ctx->pc = 0x1E4EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EA4u;
            // 0x1e4ea8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EACu; }
            if (ctx->pc != 0x1E4EACu) { return; }
        }
        }
    }
    ctx->pc = 0x1E4EACu;
label_1e4eac:
    // 0x1e4eac: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1e4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_1e4eb0:
    // 0x1e4eb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e4eb4:
    // 0x1e4eb4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e4eb8:
    // 0x1e4eb8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e4eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e4ebc:
    // 0x1e4ebc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e4ec0:
    // 0x1e4ec0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e4ec4:
    // 0x1e4ec4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e4ec4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4ec8:
    // 0x1e4ec8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e4ecc:
    if (ctx->pc == 0x1E4ECCu) {
        ctx->pc = 0x1E4ECCu;
            // 0x1e4ecc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E4ED0u;
        goto label_1e4ed0;
    }
    ctx->pc = 0x1E4EC8u;
    {
        const bool branch_taken_0x1e4ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EC8u;
            // 0x1e4ecc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ec8) {
            ctx->pc = 0x1E4EF8u;
            goto label_1e4ef8;
        }
    }
    ctx->pc = 0x1E4ED0u;
label_1e4ed0:
    // 0x1e4ed0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e4ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e4ed4:
    // 0x1e4ed4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e4ed8:
    // 0x1e4ed8: 0x2463a968  addiu       $v1, $v1, -0x5698
    ctx->pc = 0x1e4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945128));
label_1e4edc:
    // 0x1e4edc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e4ee0:
    // 0x1e4ee0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e4ee4:
    // 0x1e4ee4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e4ee8:
    // 0x1e4ee8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e4eec:
    // 0x1e4eec: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e4ef0:
    // 0x1e4ef0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e4ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e4ef4:
    // 0x1e4ef4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e4ef8:
    // 0x1e4ef8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e4efc:
    // 0x1e4efc: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e4f00:
    // 0x1e4f00: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1e4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_1e4f04:
    // 0x1e4f04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e4f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4f08:
    // 0x1e4f08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4f08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4f0c:
    // 0x1e4f0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4f10:
    // 0x1e4f10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4f14:
    // 0x1e4f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4f18:
    // 0x1e4f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4f1c:
    // 0x1e4f1c: 0x3e00008  jr          $ra
label_1e4f20:
    if (ctx->pc == 0x1E4F20u) {
        ctx->pc = 0x1E4F20u;
            // 0x1e4f20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1E4F24u;
        goto label_1e4f24;
    }
    ctx->pc = 0x1E4F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F1Cu;
            // 0x1e4f20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4F24u;
label_1e4f24:
    // 0x1e4f24: 0x0  nop
    ctx->pc = 0x1e4f24u;
    // NOP
label_1e4f28:
    // 0x1e4f28: 0x0  nop
    ctx->pc = 0x1e4f28u;
    // NOP
label_1e4f2c:
    // 0x1e4f2c: 0x0  nop
    ctx->pc = 0x1e4f2cu;
    // NOP
label_1e4f30:
    // 0x1e4f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4f34:
    // 0x1e4f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e4f38:
    // 0x1e4f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4f3c:
    // 0x1e4f3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f40:
    // 0x1e4f40: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1e4f44:
    if (ctx->pc == 0x1E4F44u) {
        ctx->pc = 0x1E4F44u;
            // 0x1e4f44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E4F48u;
        goto label_1e4f48;
    }
    ctx->pc = 0x1E4F40u;
    {
        const bool branch_taken_0x1e4f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F40u;
            // 0x1e4f44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f40) {
            ctx->pc = 0x1E4FB8u;
            goto label_1e4fb8;
        }
    }
    ctx->pc = 0x1E4F48u;
label_1e4f48:
    // 0x1e4f48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4f4c:
    // 0x1e4f4c: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x1e4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
label_1e4f50:
    // 0x1e4f50: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e4f54:
    if (ctx->pc == 0x1E4F54u) {
        ctx->pc = 0x1E4F54u;
            // 0x1e4f54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4F58u;
        goto label_1e4f58;
    }
    ctx->pc = 0x1E4F50u;
    {
        const bool branch_taken_0x1e4f50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F50u;
            // 0x1e4f54: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f50) {
            ctx->pc = 0x1E4F64u;
            goto label_1e4f64;
        }
    }
    ctx->pc = 0x1E4F58u;
label_1e4f58:
    // 0x1e4f58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4f5c:
    // 0x1e4f5c: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x1e4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
label_1e4f60:
    // 0x1e4f60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e4f64:
    // 0x1e4f64: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e4f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e4f68:
    // 0x1e4f68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e4f68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e4f6c:
    // 0x1e4f6c: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1e4f70:
    if (ctx->pc == 0x1E4F70u) {
        ctx->pc = 0x1E4F70u;
            // 0x1e4f70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F74u;
        goto label_1e4f74;
    }
    ctx->pc = 0x1E4F6Cu;
    {
        const bool branch_taken_0x1e4f6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e4f6c) {
            ctx->pc = 0x1E4F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F6Cu;
            // 0x1e4f70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4FBCu;
            goto label_1e4fbc;
        }
    }
    ctx->pc = 0x1E4F74u;
label_1e4f74:
    // 0x1e4f74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4f78:
    // 0x1e4f78: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e4f7c:
    // 0x1e4f7c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4f80:
    // 0x1e4f80: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e4f84:
    // 0x1e4f84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e4f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4f88:
    // 0x1e4f88: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1e4f8c:
    if (ctx->pc == 0x1E4F8Cu) {
        ctx->pc = 0x1E4F8Cu;
            // 0x1e4f8c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1E4F90u;
        goto label_1e4f90;
    }
    ctx->pc = 0x1E4F88u;
    {
        const bool branch_taken_0x1e4f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f88) {
            ctx->pc = 0x1E4F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F88u;
            // 0x1e4f8c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4FA4u;
            goto label_1e4fa4;
        }
    }
    ctx->pc = 0x1E4F90u;
label_1e4f90:
    // 0x1e4f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f94:
    // 0x1e4f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4f98:
    // 0x1e4f98: 0xc0a79ec  jal         func_29E7B0
label_1e4f9c:
    if (ctx->pc == 0x1E4F9Cu) {
        ctx->pc = 0x1E4F9Cu;
            // 0x1e4f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FA0u;
        goto label_1e4fa0;
    }
    ctx->pc = 0x1E4F98u;
    SET_GPR_U32(ctx, 31, 0x1E4FA0u);
    ctx->pc = 0x1E4F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F98u;
            // 0x1e4f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FA0u; }
        if (ctx->pc != 0x1E4FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FA0u; }
        if (ctx->pc != 0x1E4FA0u) { return; }
    }
    ctx->pc = 0x1E4FA0u;
label_1e4fa0:
    // 0x1e4fa0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4fa4:
    // 0x1e4fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e4fa8:
    // 0x1e4fa8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1e4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1e4fac:
    // 0x1e4fac: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e4facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e4fb0:
    // 0x1e4fb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e4fb4:
    // 0x1e4fb4: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1e4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_1e4fb8:
    // 0x1e4fb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e4fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fbc:
    // 0x1e4fbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4fc0:
    // 0x1e4fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4fc4:
    // 0x1e4fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4fc8:
    // 0x1e4fc8: 0x3e00008  jr          $ra
label_1e4fcc:
    if (ctx->pc == 0x1E4FCCu) {
        ctx->pc = 0x1E4FCCu;
            // 0x1e4fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4FD0u;
        goto label_fallthrough_0x1e4fc8;
    }
    ctx->pc = 0x1E4FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FC8u;
            // 0x1e4fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4fc8:
    ctx->pc = 0x1E4FD0u;
}
