#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234B10
// Address: 0x234b10 - 0x234c80
void sub_00234B10_0x234b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234B10_0x234b10");
#endif

    ctx->pc = 0x234b10u;

    // 0x234b10: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x234b10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x234b14: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x234B14u;
    {
        const bool branch_taken_0x234b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b14) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234B1Cu;
    // 0x234b1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x234b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x234b20: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x234b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x234b24: 0x24a5f520  addiu       $a1, $a1, -0xAE0
    ctx->pc = 0x234b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964512));
    // 0x234b28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x234b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234b2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x234b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234b30: 0x600008  jr          $v1
    ctx->pc = 0x234B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234B38u: goto label_234b38;
            case 0x234B5Cu: goto label_234b5c;
            case 0x234B7Cu: goto label_234b7c;
            case 0x234BA0u: goto label_234ba0;
            case 0x234BC4u: goto label_234bc4;
            case 0x234BE4u: goto label_234be4;
            case 0x234C08u: goto label_234c08;
            case 0x234C2Cu: goto label_234c2c;
            case 0x234C4Cu: goto label_234c4c;
            case 0x234C6Cu: goto label_234c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234B38u;
label_234b38:
    // 0x234b38: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x234b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x234b3c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x234b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x234b40: 0x34a6999a  ori         $a2, $a1, 0x999A
    ctx->pc = 0x234b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x234b44: 0x34656666  ori         $a1, $v1, 0x6666
    ctx->pc = 0x234b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x234b48: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234b4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234b50: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234b54: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x234B54u;
    {
        const bool branch_taken_0x234b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B54u;
            // 0x234b58: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b54) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234B5Cu;
label_234b5c:
    // 0x234b5c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x234b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x234b60: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x234b64: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x234b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x234b68: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234b6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234b70: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234b74: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x234B74u;
    {
        const bool branch_taken_0x234b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B74u;
            // 0x234b78: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b74) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234B7Cu;
label_234b7c:
    // 0x234b7c: 0x3c053f66  lui         $a1, 0x3F66
    ctx->pc = 0x234b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16230 << 16));
    // 0x234b80: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x234b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x234b84: 0x34a66666  ori         $a2, $a1, 0x6666
    ctx->pc = 0x234b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x234b88: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x234b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x234b8c: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234b90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234b94: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234b98: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x234B98u;
    {
        const bool branch_taken_0x234b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B98u;
            // 0x234b9c: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b98) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234BA0u;
label_234ba0:
    // 0x234ba0: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x234ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x234ba4: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x234ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x234ba8: 0x34a6999a  ori         $a2, $a1, 0x999A
    ctx->pc = 0x234ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x234bac: 0x34656666  ori         $a1, $v1, 0x6666
    ctx->pc = 0x234bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x234bb0: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234bb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x234bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234bb8: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234bbc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x234BBCu;
    {
        const bool branch_taken_0x234bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BBCu;
            // 0x234bc0: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bbc) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234BC4u;
label_234bc4:
    // 0x234bc4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x234bc8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x234bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x234bcc: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x234bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x234bd0: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234bd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x234bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234bd8: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234bdc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x234BDCu;
    {
        const bool branch_taken_0x234bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BDCu;
            // 0x234be0: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bdc) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234BE4u;
label_234be4:
    // 0x234be4: 0x3c053f66  lui         $a1, 0x3F66
    ctx->pc = 0x234be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16230 << 16));
    // 0x234be8: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x234be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x234bec: 0x34a66666  ori         $a2, $a1, 0x6666
    ctx->pc = 0x234becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x234bf0: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x234bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x234bf4: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234bf8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x234bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234bfc: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234c00: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x234C00u;
    {
        const bool branch_taken_0x234c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C00u;
            // 0x234c04: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c00) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234C08u;
label_234c08:
    // 0x234c08: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x234c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x234c0c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x234c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x234c10: 0x34a6999a  ori         $a2, $a1, 0x999A
    ctx->pc = 0x234c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x234c14: 0x34656666  ori         $a1, $v1, 0x6666
    ctx->pc = 0x234c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x234c18: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234c1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x234c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234c20: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234c24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x234C24u;
    {
        const bool branch_taken_0x234c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C24u;
            // 0x234c28: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c24) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234C2Cu;
label_234c2c:
    // 0x234c2c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x234c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x234c30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x234c34: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x234c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x234c38: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234c3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234c40: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234c44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x234C44u;
    {
        const bool branch_taken_0x234c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C44u;
            // 0x234c48: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c44) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234C4Cu;
label_234c4c:
    // 0x234c4c: 0x3c053f66  lui         $a1, 0x3F66
    ctx->pc = 0x234c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16230 << 16));
    // 0x234c50: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x234c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x234c54: 0x34a66666  ori         $a2, $a1, 0x6666
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x234c58: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x234c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x234c5c: 0xac860074  sw          $a2, 0x74($a0)
    ctx->pc = 0x234c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 6));
    // 0x234c60: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x234c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234c64: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x234c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x234c68: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x234c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_234c6c:
    // 0x234c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x234C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234C74u;
    // 0x234c74: 0x0  nop
    ctx->pc = 0x234c74u;
    // NOP
    // 0x234c78: 0x0  nop
    ctx->pc = 0x234c78u;
    // NOP
    // 0x234c7c: 0x0  nop
    ctx->pc = 0x234c7cu;
    // NOP
}
