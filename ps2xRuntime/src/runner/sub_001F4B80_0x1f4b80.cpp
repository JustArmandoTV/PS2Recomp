#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4B80
// Address: 0x1f4b80 - 0x1f4fa0
void sub_001F4B80_0x1f4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4B80_0x1f4b80");
#endif

    switch (ctx->pc) {
        case 0x1f4b80u: goto label_1f4b80;
        case 0x1f4b84u: goto label_1f4b84;
        case 0x1f4b88u: goto label_1f4b88;
        case 0x1f4b8cu: goto label_1f4b8c;
        case 0x1f4b90u: goto label_1f4b90;
        case 0x1f4b94u: goto label_1f4b94;
        case 0x1f4b98u: goto label_1f4b98;
        case 0x1f4b9cu: goto label_1f4b9c;
        case 0x1f4ba0u: goto label_1f4ba0;
        case 0x1f4ba4u: goto label_1f4ba4;
        case 0x1f4ba8u: goto label_1f4ba8;
        case 0x1f4bacu: goto label_1f4bac;
        case 0x1f4bb0u: goto label_1f4bb0;
        case 0x1f4bb4u: goto label_1f4bb4;
        case 0x1f4bb8u: goto label_1f4bb8;
        case 0x1f4bbcu: goto label_1f4bbc;
        case 0x1f4bc0u: goto label_1f4bc0;
        case 0x1f4bc4u: goto label_1f4bc4;
        case 0x1f4bc8u: goto label_1f4bc8;
        case 0x1f4bccu: goto label_1f4bcc;
        case 0x1f4bd0u: goto label_1f4bd0;
        case 0x1f4bd4u: goto label_1f4bd4;
        case 0x1f4bd8u: goto label_1f4bd8;
        case 0x1f4bdcu: goto label_1f4bdc;
        case 0x1f4be0u: goto label_1f4be0;
        case 0x1f4be4u: goto label_1f4be4;
        case 0x1f4be8u: goto label_1f4be8;
        case 0x1f4becu: goto label_1f4bec;
        case 0x1f4bf0u: goto label_1f4bf0;
        case 0x1f4bf4u: goto label_1f4bf4;
        case 0x1f4bf8u: goto label_1f4bf8;
        case 0x1f4bfcu: goto label_1f4bfc;
        case 0x1f4c00u: goto label_1f4c00;
        case 0x1f4c04u: goto label_1f4c04;
        case 0x1f4c08u: goto label_1f4c08;
        case 0x1f4c0cu: goto label_1f4c0c;
        case 0x1f4c10u: goto label_1f4c10;
        case 0x1f4c14u: goto label_1f4c14;
        case 0x1f4c18u: goto label_1f4c18;
        case 0x1f4c1cu: goto label_1f4c1c;
        case 0x1f4c20u: goto label_1f4c20;
        case 0x1f4c24u: goto label_1f4c24;
        case 0x1f4c28u: goto label_1f4c28;
        case 0x1f4c2cu: goto label_1f4c2c;
        case 0x1f4c30u: goto label_1f4c30;
        case 0x1f4c34u: goto label_1f4c34;
        case 0x1f4c38u: goto label_1f4c38;
        case 0x1f4c3cu: goto label_1f4c3c;
        case 0x1f4c40u: goto label_1f4c40;
        case 0x1f4c44u: goto label_1f4c44;
        case 0x1f4c48u: goto label_1f4c48;
        case 0x1f4c4cu: goto label_1f4c4c;
        case 0x1f4c50u: goto label_1f4c50;
        case 0x1f4c54u: goto label_1f4c54;
        case 0x1f4c58u: goto label_1f4c58;
        case 0x1f4c5cu: goto label_1f4c5c;
        case 0x1f4c60u: goto label_1f4c60;
        case 0x1f4c64u: goto label_1f4c64;
        case 0x1f4c68u: goto label_1f4c68;
        case 0x1f4c6cu: goto label_1f4c6c;
        case 0x1f4c70u: goto label_1f4c70;
        case 0x1f4c74u: goto label_1f4c74;
        case 0x1f4c78u: goto label_1f4c78;
        case 0x1f4c7cu: goto label_1f4c7c;
        case 0x1f4c80u: goto label_1f4c80;
        case 0x1f4c84u: goto label_1f4c84;
        case 0x1f4c88u: goto label_1f4c88;
        case 0x1f4c8cu: goto label_1f4c8c;
        case 0x1f4c90u: goto label_1f4c90;
        case 0x1f4c94u: goto label_1f4c94;
        case 0x1f4c98u: goto label_1f4c98;
        case 0x1f4c9cu: goto label_1f4c9c;
        case 0x1f4ca0u: goto label_1f4ca0;
        case 0x1f4ca4u: goto label_1f4ca4;
        case 0x1f4ca8u: goto label_1f4ca8;
        case 0x1f4cacu: goto label_1f4cac;
        case 0x1f4cb0u: goto label_1f4cb0;
        case 0x1f4cb4u: goto label_1f4cb4;
        case 0x1f4cb8u: goto label_1f4cb8;
        case 0x1f4cbcu: goto label_1f4cbc;
        case 0x1f4cc0u: goto label_1f4cc0;
        case 0x1f4cc4u: goto label_1f4cc4;
        case 0x1f4cc8u: goto label_1f4cc8;
        case 0x1f4cccu: goto label_1f4ccc;
        case 0x1f4cd0u: goto label_1f4cd0;
        case 0x1f4cd4u: goto label_1f4cd4;
        case 0x1f4cd8u: goto label_1f4cd8;
        case 0x1f4cdcu: goto label_1f4cdc;
        case 0x1f4ce0u: goto label_1f4ce0;
        case 0x1f4ce4u: goto label_1f4ce4;
        case 0x1f4ce8u: goto label_1f4ce8;
        case 0x1f4cecu: goto label_1f4cec;
        case 0x1f4cf0u: goto label_1f4cf0;
        case 0x1f4cf4u: goto label_1f4cf4;
        case 0x1f4cf8u: goto label_1f4cf8;
        case 0x1f4cfcu: goto label_1f4cfc;
        case 0x1f4d00u: goto label_1f4d00;
        case 0x1f4d04u: goto label_1f4d04;
        case 0x1f4d08u: goto label_1f4d08;
        case 0x1f4d0cu: goto label_1f4d0c;
        case 0x1f4d10u: goto label_1f4d10;
        case 0x1f4d14u: goto label_1f4d14;
        case 0x1f4d18u: goto label_1f4d18;
        case 0x1f4d1cu: goto label_1f4d1c;
        case 0x1f4d20u: goto label_1f4d20;
        case 0x1f4d24u: goto label_1f4d24;
        case 0x1f4d28u: goto label_1f4d28;
        case 0x1f4d2cu: goto label_1f4d2c;
        case 0x1f4d30u: goto label_1f4d30;
        case 0x1f4d34u: goto label_1f4d34;
        case 0x1f4d38u: goto label_1f4d38;
        case 0x1f4d3cu: goto label_1f4d3c;
        case 0x1f4d40u: goto label_1f4d40;
        case 0x1f4d44u: goto label_1f4d44;
        case 0x1f4d48u: goto label_1f4d48;
        case 0x1f4d4cu: goto label_1f4d4c;
        case 0x1f4d50u: goto label_1f4d50;
        case 0x1f4d54u: goto label_1f4d54;
        case 0x1f4d58u: goto label_1f4d58;
        case 0x1f4d5cu: goto label_1f4d5c;
        case 0x1f4d60u: goto label_1f4d60;
        case 0x1f4d64u: goto label_1f4d64;
        case 0x1f4d68u: goto label_1f4d68;
        case 0x1f4d6cu: goto label_1f4d6c;
        case 0x1f4d70u: goto label_1f4d70;
        case 0x1f4d74u: goto label_1f4d74;
        case 0x1f4d78u: goto label_1f4d78;
        case 0x1f4d7cu: goto label_1f4d7c;
        case 0x1f4d80u: goto label_1f4d80;
        case 0x1f4d84u: goto label_1f4d84;
        case 0x1f4d88u: goto label_1f4d88;
        case 0x1f4d8cu: goto label_1f4d8c;
        case 0x1f4d90u: goto label_1f4d90;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4d98u: goto label_1f4d98;
        case 0x1f4d9cu: goto label_1f4d9c;
        case 0x1f4da0u: goto label_1f4da0;
        case 0x1f4da4u: goto label_1f4da4;
        case 0x1f4da8u: goto label_1f4da8;
        case 0x1f4dacu: goto label_1f4dac;
        case 0x1f4db0u: goto label_1f4db0;
        case 0x1f4db4u: goto label_1f4db4;
        case 0x1f4db8u: goto label_1f4db8;
        case 0x1f4dbcu: goto label_1f4dbc;
        case 0x1f4dc0u: goto label_1f4dc0;
        case 0x1f4dc4u: goto label_1f4dc4;
        case 0x1f4dc8u: goto label_1f4dc8;
        case 0x1f4dccu: goto label_1f4dcc;
        case 0x1f4dd0u: goto label_1f4dd0;
        case 0x1f4dd4u: goto label_1f4dd4;
        case 0x1f4dd8u: goto label_1f4dd8;
        case 0x1f4ddcu: goto label_1f4ddc;
        case 0x1f4de0u: goto label_1f4de0;
        case 0x1f4de4u: goto label_1f4de4;
        case 0x1f4de8u: goto label_1f4de8;
        case 0x1f4decu: goto label_1f4dec;
        case 0x1f4df0u: goto label_1f4df0;
        case 0x1f4df4u: goto label_1f4df4;
        case 0x1f4df8u: goto label_1f4df8;
        case 0x1f4dfcu: goto label_1f4dfc;
        case 0x1f4e00u: goto label_1f4e00;
        case 0x1f4e04u: goto label_1f4e04;
        case 0x1f4e08u: goto label_1f4e08;
        case 0x1f4e0cu: goto label_1f4e0c;
        case 0x1f4e10u: goto label_1f4e10;
        case 0x1f4e14u: goto label_1f4e14;
        case 0x1f4e18u: goto label_1f4e18;
        case 0x1f4e1cu: goto label_1f4e1c;
        case 0x1f4e20u: goto label_1f4e20;
        case 0x1f4e24u: goto label_1f4e24;
        case 0x1f4e28u: goto label_1f4e28;
        case 0x1f4e2cu: goto label_1f4e2c;
        case 0x1f4e30u: goto label_1f4e30;
        case 0x1f4e34u: goto label_1f4e34;
        case 0x1f4e38u: goto label_1f4e38;
        case 0x1f4e3cu: goto label_1f4e3c;
        case 0x1f4e40u: goto label_1f4e40;
        case 0x1f4e44u: goto label_1f4e44;
        case 0x1f4e48u: goto label_1f4e48;
        case 0x1f4e4cu: goto label_1f4e4c;
        case 0x1f4e50u: goto label_1f4e50;
        case 0x1f4e54u: goto label_1f4e54;
        case 0x1f4e58u: goto label_1f4e58;
        case 0x1f4e5cu: goto label_1f4e5c;
        case 0x1f4e60u: goto label_1f4e60;
        case 0x1f4e64u: goto label_1f4e64;
        case 0x1f4e68u: goto label_1f4e68;
        case 0x1f4e6cu: goto label_1f4e6c;
        case 0x1f4e70u: goto label_1f4e70;
        case 0x1f4e74u: goto label_1f4e74;
        case 0x1f4e78u: goto label_1f4e78;
        case 0x1f4e7cu: goto label_1f4e7c;
        case 0x1f4e80u: goto label_1f4e80;
        case 0x1f4e84u: goto label_1f4e84;
        case 0x1f4e88u: goto label_1f4e88;
        case 0x1f4e8cu: goto label_1f4e8c;
        case 0x1f4e90u: goto label_1f4e90;
        case 0x1f4e94u: goto label_1f4e94;
        case 0x1f4e98u: goto label_1f4e98;
        case 0x1f4e9cu: goto label_1f4e9c;
        case 0x1f4ea0u: goto label_1f4ea0;
        case 0x1f4ea4u: goto label_1f4ea4;
        case 0x1f4ea8u: goto label_1f4ea8;
        case 0x1f4eacu: goto label_1f4eac;
        case 0x1f4eb0u: goto label_1f4eb0;
        case 0x1f4eb4u: goto label_1f4eb4;
        case 0x1f4eb8u: goto label_1f4eb8;
        case 0x1f4ebcu: goto label_1f4ebc;
        case 0x1f4ec0u: goto label_1f4ec0;
        case 0x1f4ec4u: goto label_1f4ec4;
        case 0x1f4ec8u: goto label_1f4ec8;
        case 0x1f4eccu: goto label_1f4ecc;
        case 0x1f4ed0u: goto label_1f4ed0;
        case 0x1f4ed4u: goto label_1f4ed4;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4edcu: goto label_1f4edc;
        case 0x1f4ee0u: goto label_1f4ee0;
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4ee8u: goto label_1f4ee8;
        case 0x1f4eecu: goto label_1f4eec;
        case 0x1f4ef0u: goto label_1f4ef0;
        case 0x1f4ef4u: goto label_1f4ef4;
        case 0x1f4ef8u: goto label_1f4ef8;
        case 0x1f4efcu: goto label_1f4efc;
        case 0x1f4f00u: goto label_1f4f00;
        case 0x1f4f04u: goto label_1f4f04;
        case 0x1f4f08u: goto label_1f4f08;
        case 0x1f4f0cu: goto label_1f4f0c;
        case 0x1f4f10u: goto label_1f4f10;
        case 0x1f4f14u: goto label_1f4f14;
        case 0x1f4f18u: goto label_1f4f18;
        case 0x1f4f1cu: goto label_1f4f1c;
        case 0x1f4f20u: goto label_1f4f20;
        case 0x1f4f24u: goto label_1f4f24;
        case 0x1f4f28u: goto label_1f4f28;
        case 0x1f4f2cu: goto label_1f4f2c;
        case 0x1f4f30u: goto label_1f4f30;
        case 0x1f4f34u: goto label_1f4f34;
        case 0x1f4f38u: goto label_1f4f38;
        case 0x1f4f3cu: goto label_1f4f3c;
        case 0x1f4f40u: goto label_1f4f40;
        case 0x1f4f44u: goto label_1f4f44;
        case 0x1f4f48u: goto label_1f4f48;
        case 0x1f4f4cu: goto label_1f4f4c;
        case 0x1f4f50u: goto label_1f4f50;
        case 0x1f4f54u: goto label_1f4f54;
        case 0x1f4f58u: goto label_1f4f58;
        case 0x1f4f5cu: goto label_1f4f5c;
        case 0x1f4f60u: goto label_1f4f60;
        case 0x1f4f64u: goto label_1f4f64;
        case 0x1f4f68u: goto label_1f4f68;
        case 0x1f4f6cu: goto label_1f4f6c;
        case 0x1f4f70u: goto label_1f4f70;
        case 0x1f4f74u: goto label_1f4f74;
        case 0x1f4f78u: goto label_1f4f78;
        case 0x1f4f7cu: goto label_1f4f7c;
        case 0x1f4f80u: goto label_1f4f80;
        case 0x1f4f84u: goto label_1f4f84;
        case 0x1f4f88u: goto label_1f4f88;
        case 0x1f4f8cu: goto label_1f4f8c;
        case 0x1f4f90u: goto label_1f4f90;
        case 0x1f4f94u: goto label_1f4f94;
        case 0x1f4f98u: goto label_1f4f98;
        case 0x1f4f9cu: goto label_1f4f9c;
        default: break;
    }

    ctx->pc = 0x1f4b80u;

label_1f4b80:
    // 0x1f4b80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4b84:
    // 0x1f4b84: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f4b88:
    // 0x1f4b88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f4b8c:
    // 0x1f4b8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4b90:
    // 0x1f4b90: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f4b94:
    // 0x1f4b94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f4b98:
    // 0x1f4b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4b9c:
    // 0x1f4b9c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1f4b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_1f4ba0:
    // 0x1f4ba0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4ba4:
    // 0x1f4ba4: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f4ba8:
    // 0x1f4ba8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f4bac:
    // 0x1f4bac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4bb0:
    // 0x1f4bb0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1f4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1f4bb4:
    // 0x1f4bb4: 0x2442dc50  addiu       $v0, $v0, -0x23B0
    ctx->pc = 0x1f4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
label_1f4bb8:
    // 0x1f4bb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f4bbc:
    // 0x1f4bbc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1f4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f4bc0:
    // 0x1f4bc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f4bc4:
    if (ctx->pc == 0x1F4BC4u) {
        ctx->pc = 0x1F4BC4u;
            // 0x1f4bc4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BC8u;
        goto label_1f4bc8;
    }
    ctx->pc = 0x1F4BC0u;
    {
        const bool branch_taken_0x1f4bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BC0u;
            // 0x1f4bc4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bc0) {
            ctx->pc = 0x1F4BE8u;
            goto label_1f4be8;
        }
    }
    ctx->pc = 0x1F4BC8u;
label_1f4bc8:
    // 0x1f4bc8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f4bcc:
    // 0x1f4bcc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f4bd0:
    // 0x1f4bd0: 0x0  nop
    ctx->pc = 0x1f4bd0u;
    // NOP
label_1f4bd4:
    // 0x1f4bd4: 0x0  nop
    ctx->pc = 0x1f4bd4u;
    // NOP
label_1f4bd8:
    // 0x1f4bd8: 0x0  nop
    ctx->pc = 0x1f4bd8u;
    // NOP
label_1f4bdc:
    // 0x1f4bdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4be0:
    if (ctx->pc == 0x1F4BE0u) {
        ctx->pc = 0x1F4BE4u;
        goto label_1f4be4;
    }
    ctx->pc = 0x1F4BDCu;
    {
        const bool branch_taken_0x1f4bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4bdc) {
            ctx->pc = 0x1F4BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4bc8;
        }
    }
    ctx->pc = 0x1F4BE4u;
label_1f4be4:
    // 0x1f4be4: 0x0  nop
    ctx->pc = 0x1f4be4u;
    // NOP
label_1f4be8:
    // 0x1f4be8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1f4bec:
    // 0x1f4bec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1f4becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1f4bf0:
    // 0x1f4bf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f4bf4:
    if (ctx->pc == 0x1F4BF4u) {
        ctx->pc = 0x1F4BF4u;
            // 0x1f4bf4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BF8u;
        goto label_1f4bf8;
    }
    ctx->pc = 0x1F4BF0u;
    {
        const bool branch_taken_0x1f4bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BF0u;
            // 0x1f4bf4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bf0) {
            ctx->pc = 0x1F4C18u;
            goto label_1f4c18;
        }
    }
    ctx->pc = 0x1F4BF8u;
label_1f4bf8:
    // 0x1f4bf8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1f4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f4bfc:
    // 0x1f4bfc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f4c00:
    // 0x1f4c00: 0x0  nop
    ctx->pc = 0x1f4c00u;
    // NOP
label_1f4c04:
    // 0x1f4c04: 0x0  nop
    ctx->pc = 0x1f4c04u;
    // NOP
label_1f4c08:
    // 0x1f4c08: 0x0  nop
    ctx->pc = 0x1f4c08u;
    // NOP
label_1f4c0c:
    // 0x1f4c0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4c10:
    if (ctx->pc == 0x1F4C10u) {
        ctx->pc = 0x1F4C14u;
        goto label_1f4c14;
    }
    ctx->pc = 0x1F4C0Cu;
    {
        const bool branch_taken_0x1f4c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c0c) {
            ctx->pc = 0x1F4BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4bf8;
        }
    }
    ctx->pc = 0x1F4C14u;
label_1f4c14:
    // 0x1f4c14: 0x0  nop
    ctx->pc = 0x1f4c14u;
    // NOP
label_1f4c18:
    // 0x1f4c18: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1f4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1f4c1c:
    // 0x1f4c1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4c20:
    // 0x1f4c20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f4c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c24:
    // 0x1f4c24: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f4c28:
    // 0x1f4c28: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1f4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_1f4c2c:
    // 0x1f4c2c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4c30:
    // 0x1f4c30: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f4c34:
    // 0x1f4c34: 0x3e00008  jr          $ra
label_1f4c38:
    if (ctx->pc == 0x1F4C38u) {
        ctx->pc = 0x1F4C38u;
            // 0x1f4c38: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4C3Cu;
        goto label_1f4c3c;
    }
    ctx->pc = 0x1F4C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C34u;
            // 0x1f4c38: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4C3Cu;
label_1f4c3c:
    // 0x1f4c3c: 0x0  nop
    ctx->pc = 0x1f4c3cu;
    // NOP
label_1f4c40:
    // 0x1f4c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f4c44:
    // 0x1f4c44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f4c48:
    // 0x1f4c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f4c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f4c4c:
    // 0x1f4c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f4c50:
    // 0x1f4c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f4c54:
    // 0x1f4c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f4c58:
    // 0x1f4c58: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f4c58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c5c:
    // 0x1f4c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f4c60:
    // 0x1f4c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f4c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c64:
    // 0x1f4c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4c68:
    // 0x1f4c68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f4c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c6c:
    // 0x1f4c6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f4c70:
    // 0x1f4c70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f4c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c74:
    // 0x1f4c74: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1f4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1f4c78:
    // 0x1f4c78: 0xc0a7a88  jal         func_29EA20
label_1f4c7c:
    if (ctx->pc == 0x1F4C7Cu) {
        ctx->pc = 0x1F4C7Cu;
            // 0x1f4c7c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F4C80u;
        goto label_1f4c80;
    }
    ctx->pc = 0x1F4C78u;
    SET_GPR_U32(ctx, 31, 0x1F4C80u);
    ctx->pc = 0x1F4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C78u;
            // 0x1f4c7c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C80u; }
        if (ctx->pc != 0x1F4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C80u; }
        if (ctx->pc != 0x1F4C80u) { return; }
    }
    ctx->pc = 0x1F4C80u;
label_1f4c80:
    // 0x1f4c80: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1f4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1f4c84:
    // 0x1f4c84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f4c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c88:
    // 0x1f4c88: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_1f4c8c:
    if (ctx->pc == 0x1F4C8Cu) {
        ctx->pc = 0x1F4C8Cu;
            // 0x1f4c8c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F4C90u;
        goto label_1f4c90;
    }
    ctx->pc = 0x1F4C88u;
    {
        const bool branch_taken_0x1f4c88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C88u;
            // 0x1f4c8c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c88) {
            ctx->pc = 0x1F4CA4u;
            goto label_1f4ca4;
        }
    }
    ctx->pc = 0x1F4C90u;
label_1f4c90:
    // 0x1f4c90: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f4c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c94:
    // 0x1f4c94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c98:
    // 0x1f4c98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c9c:
    // 0x1f4c9c: 0xc07d2e0  jal         func_1F4B80
label_1f4ca0:
    if (ctx->pc == 0x1F4CA0u) {
        ctx->pc = 0x1F4CA0u;
            // 0x1f4ca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CA4u;
        goto label_1f4ca4;
    }
    ctx->pc = 0x1F4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F4CA4u);
    ctx->pc = 0x1F4CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C9Cu;
            // 0x1f4ca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B80u;
    goto label_1f4b80;
    ctx->pc = 0x1F4CA4u;
label_1f4ca4:
    // 0x1f4ca4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x1f4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1f4ca8:
    // 0x1f4ca8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1f4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1f4cac:
    // 0x1f4cac: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_1f4cb0:
    if (ctx->pc == 0x1F4CB0u) {
        ctx->pc = 0x1F4CB0u;
            // 0x1f4cb0: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x1F4CB4u;
        goto label_1f4cb4;
    }
    ctx->pc = 0x1F4CACu;
    {
        const bool branch_taken_0x1f4cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4cac) {
            ctx->pc = 0x1F4CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CACu;
            // 0x1f4cb0: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4D24u;
            goto label_1f4d24;
        }
    }
    ctx->pc = 0x1F4CB4u;
label_1f4cb4:
    // 0x1f4cb4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f4cb8:
    // 0x1f4cb8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f4cbc:
    // 0x1f4cbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f4cc0:
    if (ctx->pc == 0x1F4CC0u) {
        ctx->pc = 0x1F4CC0u;
            // 0x1f4cc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CC4u;
        goto label_1f4cc4;
    }
    ctx->pc = 0x1F4CBCu;
    {
        const bool branch_taken_0x1f4cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CBCu;
            // 0x1f4cc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cbc) {
            ctx->pc = 0x1F4CE0u;
            goto label_1f4ce0;
        }
    }
    ctx->pc = 0x1F4CC4u;
label_1f4cc4:
    // 0x1f4cc4: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1f4cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f4cc8:
    // 0x1f4cc8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1f4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f4ccc:
    // 0x1f4ccc: 0x0  nop
    ctx->pc = 0x1f4cccu;
    // NOP
label_1f4cd0:
    // 0x1f4cd0: 0x0  nop
    ctx->pc = 0x1f4cd0u;
    // NOP
label_1f4cd4:
    // 0x1f4cd4: 0x0  nop
    ctx->pc = 0x1f4cd4u;
    // NOP
label_1f4cd8:
    // 0x1f4cd8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4cdc:
    if (ctx->pc == 0x1F4CDCu) {
        ctx->pc = 0x1F4CE0u;
        goto label_1f4ce0;
    }
    ctx->pc = 0x1F4CD8u;
    {
        const bool branch_taken_0x1f4cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cd8) {
            ctx->pc = 0x1F4CC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4cc4;
        }
    }
    ctx->pc = 0x1F4CE0u;
label_1f4ce0:
    // 0x1f4ce0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f4ce4:
    // 0x1f4ce4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f4ce8:
    if (ctx->pc == 0x1F4CE8u) {
        ctx->pc = 0x1F4CE8u;
            // 0x1f4ce8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CECu;
        goto label_1f4cec;
    }
    ctx->pc = 0x1F4CE4u;
    {
        const bool branch_taken_0x1f4ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4CE4u;
            // 0x1f4ce8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ce4) {
            ctx->pc = 0x1F4D08u;
            goto label_1f4d08;
        }
    }
    ctx->pc = 0x1F4CECu;
label_1f4cec:
    // 0x1f4cec: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x1f4cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1f4cf0:
    // 0x1f4cf0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1f4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1f4cf4:
    // 0x1f4cf4: 0x0  nop
    ctx->pc = 0x1f4cf4u;
    // NOP
label_1f4cf8:
    // 0x1f4cf8: 0x0  nop
    ctx->pc = 0x1f4cf8u;
    // NOP
label_1f4cfc:
    // 0x1f4cfc: 0x0  nop
    ctx->pc = 0x1f4cfcu;
    // NOP
label_1f4d00:
    // 0x1f4d00: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4d04:
    if (ctx->pc == 0x1F4D04u) {
        ctx->pc = 0x1F4D08u;
        goto label_1f4d08;
    }
    ctx->pc = 0x1F4D00u;
    {
        const bool branch_taken_0x1f4d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4d00) {
            ctx->pc = 0x1F4CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4cec;
        }
    }
    ctx->pc = 0x1F4D08u;
label_1f4d08:
    // 0x1f4d08: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f4d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f4d0c:
    // 0x1f4d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f4d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d10:
    // 0x1f4d10: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1f4d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1f4d14:
    // 0x1f4d14: 0x320f809  jalr        $t9
label_1f4d18:
    if (ctx->pc == 0x1F4D18u) {
        ctx->pc = 0x1F4D18u;
            // 0x1f4d18: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D1Cu;
        goto label_1f4d1c;
    }
    ctx->pc = 0x1F4D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4D1Cu);
        ctx->pc = 0x1F4D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D14u;
            // 0x1f4d18: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4D1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D1Cu; }
            if (ctx->pc != 0x1F4D1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F4D1Cu;
label_1f4d1c:
    // 0x1f4d1c: 0xae930014  sw          $s3, 0x14($s4)
    ctx->pc = 0x1f4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 19));
label_1f4d20:
    // 0x1f4d20: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1f4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1f4d24:
    // 0x1f4d24: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1f4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1f4d28:
    // 0x1f4d28: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
label_1f4d2c:
    if (ctx->pc == 0x1F4D2Cu) {
        ctx->pc = 0x1F4D2Cu;
            // 0x1f4d2c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D30u;
        goto label_1f4d30;
    }
    ctx->pc = 0x1F4D28u;
    {
        const bool branch_taken_0x1f4d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4d28) {
            ctx->pc = 0x1F4D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D28u;
            // 0x1f4d2c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4DA4u;
            goto label_1f4da4;
        }
    }
    ctx->pc = 0x1F4D30u;
label_1f4d30:
    // 0x1f4d30: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f4d34:
    // 0x1f4d34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f4d38:
    if (ctx->pc == 0x1F4D38u) {
        ctx->pc = 0x1F4D38u;
            // 0x1f4d38: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1F4D3Cu;
        goto label_1f4d3c;
    }
    ctx->pc = 0x1F4D34u;
    {
        const bool branch_taken_0x1f4d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D34u;
            // 0x1f4d38: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d34) {
            ctx->pc = 0x1F4D58u;
            goto label_1f4d58;
        }
    }
    ctx->pc = 0x1F4D3Cu;
label_1f4d3c:
    // 0x1f4d3c: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1f4d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f4d40:
    // 0x1f4d40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f4d44:
    // 0x1f4d44: 0x0  nop
    ctx->pc = 0x1f4d44u;
    // NOP
label_1f4d48:
    // 0x1f4d48: 0x0  nop
    ctx->pc = 0x1f4d48u;
    // NOP
label_1f4d4c:
    // 0x1f4d4c: 0x0  nop
    ctx->pc = 0x1f4d4cu;
    // NOP
label_1f4d50:
    // 0x1f4d50: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4d54:
    if (ctx->pc == 0x1F4D54u) {
        ctx->pc = 0x1F4D58u;
        goto label_1f4d58;
    }
    ctx->pc = 0x1F4D50u;
    {
        const bool branch_taken_0x1f4d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4d50) {
            ctx->pc = 0x1F4D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4d3c;
        }
    }
    ctx->pc = 0x1F4D58u;
label_1f4d58:
    // 0x1f4d58: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f4d5c:
    // 0x1f4d5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f4d60:
    if (ctx->pc == 0x1F4D60u) {
        ctx->pc = 0x1F4D64u;
        goto label_1f4d64;
    }
    ctx->pc = 0x1F4D5Cu;
    {
        const bool branch_taken_0x1f4d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4d5c) {
            ctx->pc = 0x1F4D80u;
            goto label_1f4d80;
        }
    }
    ctx->pc = 0x1F4D64u;
label_1f4d64:
    // 0x1f4d64: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f4d68:
    // 0x1f4d68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f4d6c:
    // 0x1f4d6c: 0x0  nop
    ctx->pc = 0x1f4d6cu;
    // NOP
label_1f4d70:
    // 0x1f4d70: 0x0  nop
    ctx->pc = 0x1f4d70u;
    // NOP
label_1f4d74:
    // 0x1f4d74: 0x0  nop
    ctx->pc = 0x1f4d74u;
    // NOP
label_1f4d78:
    // 0x1f4d78: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4d7c:
    if (ctx->pc == 0x1F4D7Cu) {
        ctx->pc = 0x1F4D80u;
        goto label_1f4d80;
    }
    ctx->pc = 0x1F4D78u;
    {
        const bool branch_taken_0x1f4d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4d78) {
            ctx->pc = 0x1F4D64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4d64;
        }
    }
    ctx->pc = 0x1F4D80u;
label_1f4d80:
    // 0x1f4d80: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f4d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f4d84:
    // 0x1f4d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f4d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d88:
    // 0x1f4d88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d8c:
    // 0x1f4d8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f4d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d90:
    // 0x1f4d90: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1f4d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1f4d94:
    // 0x1f4d94: 0x320f809  jalr        $t9
label_1f4d98:
    if (ctx->pc == 0x1F4D98u) {
        ctx->pc = 0x1F4D98u;
            // 0x1f4d98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D9Cu;
        goto label_1f4d9c;
    }
    ctx->pc = 0x1F4D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4D9Cu);
        ctx->pc = 0x1F4D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4D94u;
            // 0x1f4d98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4D9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D9Cu; }
            if (ctx->pc != 0x1F4D9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F4D9Cu;
label_1f4d9c:
    // 0x1f4d9c: 0xae930018  sw          $s3, 0x18($s4)
    ctx->pc = 0x1f4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 19));
label_1f4da0:
    // 0x1f4da0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1f4da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f4da4:
    // 0x1f4da4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f4da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4da8:
    // 0x1f4da8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f4da8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4dac:
    // 0x1f4dac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f4dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4db0:
    // 0x1f4db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4db4:
    // 0x1f4db4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4db8:
    // 0x1f4db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4dbc:
    // 0x1f4dbc: 0x3e00008  jr          $ra
label_1f4dc0:
    if (ctx->pc == 0x1F4DC0u) {
        ctx->pc = 0x1F4DC0u;
            // 0x1f4dc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F4DC4u;
        goto label_1f4dc4;
    }
    ctx->pc = 0x1F4DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DBCu;
            // 0x1f4dc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4DC4u;
label_1f4dc4:
    // 0x1f4dc4: 0x0  nop
    ctx->pc = 0x1f4dc4u;
    // NOP
label_1f4dc8:
    // 0x1f4dc8: 0x0  nop
    ctx->pc = 0x1f4dc8u;
    // NOP
label_1f4dcc:
    // 0x1f4dcc: 0x0  nop
    ctx->pc = 0x1f4dccu;
    // NOP
label_1f4dd0:
    // 0x1f4dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f4dd4:
    // 0x1f4dd4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1f4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1f4dd8:
    // 0x1f4dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f4ddc:
    // 0x1f4ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4de0:
    // 0x1f4de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4de4:
    // 0x1f4de4: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x1f4de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1f4de8:
    // 0x1f4de8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_1f4dec:
    if (ctx->pc == 0x1F4DECu) {
        ctx->pc = 0x1F4DECu;
            // 0x1f4dec: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1F4DF0u;
        goto label_1f4df0;
    }
    ctx->pc = 0x1F4DE8u;
    {
        const bool branch_taken_0x1f4de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4de8) {
            ctx->pc = 0x1F4DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DE8u;
            // 0x1f4dec: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4E0Cu;
            goto label_1f4e0c;
        }
    }
    ctx->pc = 0x1F4DF0u;
label_1f4df0:
    // 0x1f4df0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1f4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f4df4:
    // 0x1f4df4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1f4df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f4df8:
    // 0x1f4df8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f4df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f4dfc:
    // 0x1f4dfc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f4dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f4e00:
    // 0x1f4e00: 0x320f809  jalr        $t9
label_1f4e04:
    if (ctx->pc == 0x1F4E04u) {
        ctx->pc = 0x1F4E04u;
            // 0x1f4e04: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1F4E08u;
        goto label_1f4e08;
    }
    ctx->pc = 0x1F4E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4E08u);
        ctx->pc = 0x1F4E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E00u;
            // 0x1f4e04: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4E08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E08u; }
            if (ctx->pc != 0x1F4E08u) { return; }
        }
        }
    }
    ctx->pc = 0x1F4E08u;
label_1f4e08:
    // 0x1f4e08: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1f4e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1f4e0c:
    // 0x1f4e0c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1f4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1f4e10:
    // 0x1f4e10: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1f4e14:
    if (ctx->pc == 0x1F4E14u) {
        ctx->pc = 0x1F4E18u;
        goto label_1f4e18;
    }
    ctx->pc = 0x1F4E10u;
    {
        const bool branch_taken_0x1f4e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4e10) {
            ctx->pc = 0x1F4E30u;
            goto label_1f4e30;
        }
    }
    ctx->pc = 0x1F4E18u;
label_1f4e18:
    // 0x1f4e18: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1f4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1f4e1c:
    // 0x1f4e1c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f4e20:
    // 0x1f4e20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f4e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f4e24:
    // 0x1f4e24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f4e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f4e28:
    // 0x1f4e28: 0x320f809  jalr        $t9
label_1f4e2c:
    if (ctx->pc == 0x1F4E2Cu) {
        ctx->pc = 0x1F4E2Cu;
            // 0x1f4e2c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1F4E30u;
        goto label_1f4e30;
    }
    ctx->pc = 0x1F4E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4E30u);
        ctx->pc = 0x1F4E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E28u;
            // 0x1f4e2c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4E30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E30u; }
            if (ctx->pc != 0x1F4E30u) { return; }
        }
        }
    }
    ctx->pc = 0x1F4E30u;
label_1f4e30:
    // 0x1f4e30: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f4e34:
    if (ctx->pc == 0x1F4E34u) {
        ctx->pc = 0x1F4E34u;
            // 0x1f4e34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F4E38u;
        goto label_1f4e38;
    }
    ctx->pc = 0x1F4E30u;
    {
        const bool branch_taken_0x1f4e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e30) {
            ctx->pc = 0x1F4E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E30u;
            // 0x1f4e34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4E50u;
            goto label_1f4e50;
        }
    }
    ctx->pc = 0x1F4E38u;
label_1f4e38:
    // 0x1f4e38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f4e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f4e3c:
    // 0x1f4e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e40:
    // 0x1f4e40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f4e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f4e44:
    // 0x1f4e44: 0x320f809  jalr        $t9
label_1f4e48:
    if (ctx->pc == 0x1F4E48u) {
        ctx->pc = 0x1F4E48u;
            // 0x1f4e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F4E4Cu;
        goto label_1f4e4c;
    }
    ctx->pc = 0x1F4E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4E4Cu);
        ctx->pc = 0x1F4E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E44u;
            // 0x1f4e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E4Cu; }
            if (ctx->pc != 0x1F4E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F4E4Cu;
label_1f4e4c:
    // 0x1f4e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4e50:
    // 0x1f4e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4e54:
    // 0x1f4e54: 0x3e00008  jr          $ra
label_1f4e58:
    if (ctx->pc == 0x1F4E58u) {
        ctx->pc = 0x1F4E58u;
            // 0x1f4e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F4E5Cu;
        goto label_1f4e5c;
    }
    ctx->pc = 0x1F4E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E54u;
            // 0x1f4e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4E5Cu;
label_1f4e5c:
    // 0x1f4e5c: 0x0  nop
    ctx->pc = 0x1f4e5cu;
    // NOP
label_1f4e60:
    // 0x1f4e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f4e64:
    // 0x1f4e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f4e68:
    // 0x1f4e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4e6c:
    // 0x1f4e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e70:
    // 0x1f4e70: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1f4e74:
    if (ctx->pc == 0x1F4E74u) {
        ctx->pc = 0x1F4E74u;
            // 0x1f4e74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E78u;
        goto label_1f4e78;
    }
    ctx->pc = 0x1F4E70u;
    {
        const bool branch_taken_0x1f4e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e70) {
            ctx->pc = 0x1F4E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E70u;
            // 0x1f4e74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4EE0u;
            goto label_1f4ee0;
        }
    }
    ctx->pc = 0x1F4E78u;
label_1f4e78:
    // 0x1f4e78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4e7c:
    // 0x1f4e7c: 0x2442dc50  addiu       $v0, $v0, -0x23B0
    ctx->pc = 0x1f4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
label_1f4e80:
    // 0x1f4e80: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f4e84:
    if (ctx->pc == 0x1F4E84u) {
        ctx->pc = 0x1F4E84u;
            // 0x1f4e84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F4E88u;
        goto label_1f4e88;
    }
    ctx->pc = 0x1F4E80u;
    {
        const bool branch_taken_0x1f4e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E80u;
            // 0x1f4e84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e80) {
            ctx->pc = 0x1F4EB4u;
            goto label_1f4eb4;
        }
    }
    ctx->pc = 0x1F4E88u;
label_1f4e88:
    // 0x1f4e88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4e8c:
    // 0x1f4e8c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f4e90:
    // 0x1f4e90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f4e94:
    if (ctx->pc == 0x1F4E94u) {
        ctx->pc = 0x1F4E94u;
            // 0x1f4e94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F4E98u;
        goto label_1f4e98;
    }
    ctx->pc = 0x1F4E90u;
    {
        const bool branch_taken_0x1f4e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4E90u;
            // 0x1f4e94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e90) {
            ctx->pc = 0x1F4EB4u;
            goto label_1f4eb4;
        }
    }
    ctx->pc = 0x1F4E98u;
label_1f4e98:
    // 0x1f4e98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4e9c:
    // 0x1f4e9c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f4ea0:
    // 0x1f4ea0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f4ea4:
    if (ctx->pc == 0x1F4EA4u) {
        ctx->pc = 0x1F4EA4u;
            // 0x1f4ea4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F4EA8u;
        goto label_1f4ea8;
    }
    ctx->pc = 0x1F4EA0u;
    {
        const bool branch_taken_0x1f4ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EA0u;
            // 0x1f4ea4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ea0) {
            ctx->pc = 0x1F4EB4u;
            goto label_1f4eb4;
        }
    }
    ctx->pc = 0x1F4EA8u;
label_1f4ea8:
    // 0x1f4ea8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4eac:
    // 0x1f4eac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f4eb0:
    // 0x1f4eb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f4eb4:
    // 0x1f4eb4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f4eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f4eb8:
    // 0x1f4eb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4eb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f4ebc:
    // 0x1f4ebc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f4ec0:
    if (ctx->pc == 0x1F4EC0u) {
        ctx->pc = 0x1F4EC4u;
        goto label_1f4ec4;
    }
    ctx->pc = 0x1F4EBCu;
    {
        const bool branch_taken_0x1f4ebc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f4ebc) {
            ctx->pc = 0x1F4EDCu;
            goto label_1f4edc;
        }
    }
    ctx->pc = 0x1F4EC4u;
label_1f4ec4:
    // 0x1f4ec4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f4ec8:
    // 0x1f4ec8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f4ec8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4ecc:
    // 0x1f4ecc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f4ed0:
    // 0x1f4ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ed4:
    // 0x1f4ed4: 0xc0a7ab4  jal         func_29EAD0
label_1f4ed8:
    if (ctx->pc == 0x1F4ED8u) {
        ctx->pc = 0x1F4ED8u;
            // 0x1f4ed8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F4EDCu;
        goto label_1f4edc;
    }
    ctx->pc = 0x1F4ED4u;
    SET_GPR_U32(ctx, 31, 0x1F4EDCu);
    ctx->pc = 0x1F4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4ED4u;
            // 0x1f4ed8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EDCu; }
        if (ctx->pc != 0x1F4EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4EDCu; }
        if (ctx->pc != 0x1F4EDCu) { return; }
    }
    ctx->pc = 0x1F4EDCu;
label_1f4edc:
    // 0x1f4edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f4edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ee0:
    // 0x1f4ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4ee4:
    // 0x1f4ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4ee8:
    // 0x1f4ee8: 0x3e00008  jr          $ra
label_1f4eec:
    if (ctx->pc == 0x1F4EECu) {
        ctx->pc = 0x1F4EECu;
            // 0x1f4eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F4EF0u;
        goto label_1f4ef0;
    }
    ctx->pc = 0x1F4EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4EE8u;
            // 0x1f4eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4EF0u;
label_1f4ef0:
    // 0x1f4ef0: 0x3e00008  jr          $ra
label_1f4ef4:
    if (ctx->pc == 0x1F4EF4u) {
        ctx->pc = 0x1F4EF8u;
        goto label_1f4ef8;
    }
    ctx->pc = 0x1F4EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4EF8u;
label_1f4ef8:
    // 0x1f4ef8: 0x0  nop
    ctx->pc = 0x1f4ef8u;
    // NOP
label_1f4efc:
    // 0x1f4efc: 0x0  nop
    ctx->pc = 0x1f4efcu;
    // NOP
label_1f4f00:
    // 0x1f4f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4f04:
    // 0x1f4f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f4f08:
    // 0x1f4f08: 0x8d190000  lw          $t9, 0x0($t0)
    ctx->pc = 0x1f4f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f4f0c:
    // 0x1f4f0c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f4f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f4f10:
    // 0x1f4f10: 0x320f809  jalr        $t9
label_1f4f14:
    if (ctx->pc == 0x1F4F14u) {
        ctx->pc = 0x1F4F14u;
            // 0x1f4f14: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F18u;
        goto label_1f4f18;
    }
    ctx->pc = 0x1F4F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4F18u);
        ctx->pc = 0x1F4F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F10u;
            // 0x1f4f14: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F18u; }
            if (ctx->pc != 0x1F4F18u) { return; }
        }
        }
    }
    ctx->pc = 0x1F4F18u;
label_1f4f18:
    // 0x1f4f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4f1c:
    // 0x1f4f1c: 0x3e00008  jr          $ra
label_1f4f20:
    if (ctx->pc == 0x1F4F20u) {
        ctx->pc = 0x1F4F20u;
            // 0x1f4f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F4F24u;
        goto label_1f4f24;
    }
    ctx->pc = 0x1F4F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F1Cu;
            // 0x1f4f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F24u;
label_1f4f24:
    // 0x1f4f24: 0x0  nop
    ctx->pc = 0x1f4f24u;
    // NOP
label_1f4f28:
    // 0x1f4f28: 0x0  nop
    ctx->pc = 0x1f4f28u;
    // NOP
label_1f4f2c:
    // 0x1f4f2c: 0x0  nop
    ctx->pc = 0x1f4f2cu;
    // NOP
label_1f4f30:
    // 0x1f4f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4f34:
    // 0x1f4f34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f4f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f38:
    // 0x1f4f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f4f3c:
    // 0x1f4f3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f40:
    // 0x1f4f40: 0x8cf90000  lw          $t9, 0x0($a3)
    ctx->pc = 0x1f4f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f4f44:
    // 0x1f4f44: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f4f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f48:
    // 0x1f4f48: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f4f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f4f4c:
    // 0x1f4f4c: 0x320f809  jalr        $t9
label_1f4f50:
    if (ctx->pc == 0x1F4F50u) {
        ctx->pc = 0x1F4F50u;
            // 0x1f4f50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F54u;
        goto label_1f4f54;
    }
    ctx->pc = 0x1F4F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4F54u);
        ctx->pc = 0x1F4F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F4Cu;
            // 0x1f4f50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F4F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F4F54u; }
            if (ctx->pc != 0x1F4F54u) { return; }
        }
        }
    }
    ctx->pc = 0x1F4F54u;
label_1f4f54:
    // 0x1f4f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4f58:
    // 0x1f4f58: 0x3e00008  jr          $ra
label_1f4f5c:
    if (ctx->pc == 0x1F4F5Cu) {
        ctx->pc = 0x1F4F5Cu;
            // 0x1f4f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F4F60u;
        goto label_1f4f60;
    }
    ctx->pc = 0x1F4F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4F58u;
            // 0x1f4f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F60u;
label_1f4f60:
    // 0x1f4f60: 0x3e00008  jr          $ra
label_1f4f64:
    if (ctx->pc == 0x1F4F64u) {
        ctx->pc = 0x1F4F68u;
        goto label_1f4f68;
    }
    ctx->pc = 0x1F4F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F68u;
label_1f4f68:
    // 0x1f4f68: 0x0  nop
    ctx->pc = 0x1f4f68u;
    // NOP
label_1f4f6c:
    // 0x1f4f6c: 0x0  nop
    ctx->pc = 0x1f4f6cu;
    // NOP
label_1f4f70:
    // 0x1f4f70: 0x3e00008  jr          $ra
label_1f4f74:
    if (ctx->pc == 0x1F4F74u) {
        ctx->pc = 0x1F4F78u;
        goto label_1f4f78;
    }
    ctx->pc = 0x1F4F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F78u;
label_1f4f78:
    // 0x1f4f78: 0x0  nop
    ctx->pc = 0x1f4f78u;
    // NOP
label_1f4f7c:
    // 0x1f4f7c: 0x0  nop
    ctx->pc = 0x1f4f7cu;
    // NOP
label_1f4f80:
    // 0x1f4f80: 0x3e00008  jr          $ra
label_1f4f84:
    if (ctx->pc == 0x1F4F84u) {
        ctx->pc = 0x1F4F88u;
        goto label_1f4f88;
    }
    ctx->pc = 0x1F4F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F88u;
label_1f4f88:
    // 0x1f4f88: 0x0  nop
    ctx->pc = 0x1f4f88u;
    // NOP
label_1f4f8c:
    // 0x1f4f8c: 0x0  nop
    ctx->pc = 0x1f4f8cu;
    // NOP
label_1f4f90:
    // 0x1f4f90: 0x3e00008  jr          $ra
label_1f4f94:
    if (ctx->pc == 0x1F4F94u) {
        ctx->pc = 0x1F4F98u;
        goto label_1f4f98;
    }
    ctx->pc = 0x1F4F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4F98u;
label_1f4f98:
    // 0x1f4f98: 0x0  nop
    ctx->pc = 0x1f4f98u;
    // NOP
label_1f4f9c:
    // 0x1f4f9c: 0x0  nop
    ctx->pc = 0x1f4f9cu;
    // NOP
}
