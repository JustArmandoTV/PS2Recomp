#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5B70
// Address: 0x1e5b70 - 0x1e5c70
void sub_001E5B70_0x1e5b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5B70_0x1e5b70");
#endif

    switch (ctx->pc) {
        case 0x1e5b70u: goto label_1e5b70;
        case 0x1e5b74u: goto label_1e5b74;
        case 0x1e5b78u: goto label_1e5b78;
        case 0x1e5b7cu: goto label_1e5b7c;
        case 0x1e5b80u: goto label_1e5b80;
        case 0x1e5b84u: goto label_1e5b84;
        case 0x1e5b88u: goto label_1e5b88;
        case 0x1e5b8cu: goto label_1e5b8c;
        case 0x1e5b90u: goto label_1e5b90;
        case 0x1e5b94u: goto label_1e5b94;
        case 0x1e5b98u: goto label_1e5b98;
        case 0x1e5b9cu: goto label_1e5b9c;
        case 0x1e5ba0u: goto label_1e5ba0;
        case 0x1e5ba4u: goto label_1e5ba4;
        case 0x1e5ba8u: goto label_1e5ba8;
        case 0x1e5bacu: goto label_1e5bac;
        case 0x1e5bb0u: goto label_1e5bb0;
        case 0x1e5bb4u: goto label_1e5bb4;
        case 0x1e5bb8u: goto label_1e5bb8;
        case 0x1e5bbcu: goto label_1e5bbc;
        case 0x1e5bc0u: goto label_1e5bc0;
        case 0x1e5bc4u: goto label_1e5bc4;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5bccu: goto label_1e5bcc;
        case 0x1e5bd0u: goto label_1e5bd0;
        case 0x1e5bd4u: goto label_1e5bd4;
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5bdcu: goto label_1e5bdc;
        case 0x1e5be0u: goto label_1e5be0;
        case 0x1e5be4u: goto label_1e5be4;
        case 0x1e5be8u: goto label_1e5be8;
        case 0x1e5becu: goto label_1e5bec;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5bf4u: goto label_1e5bf4;
        case 0x1e5bf8u: goto label_1e5bf8;
        case 0x1e5bfcu: goto label_1e5bfc;
        case 0x1e5c00u: goto label_1e5c00;
        case 0x1e5c04u: goto label_1e5c04;
        case 0x1e5c08u: goto label_1e5c08;
        case 0x1e5c0cu: goto label_1e5c0c;
        case 0x1e5c10u: goto label_1e5c10;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c18u: goto label_1e5c18;
        case 0x1e5c1cu: goto label_1e5c1c;
        case 0x1e5c20u: goto label_1e5c20;
        case 0x1e5c24u: goto label_1e5c24;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5c2cu: goto label_1e5c2c;
        case 0x1e5c30u: goto label_1e5c30;
        case 0x1e5c34u: goto label_1e5c34;
        case 0x1e5c38u: goto label_1e5c38;
        case 0x1e5c3cu: goto label_1e5c3c;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c44u: goto label_1e5c44;
        case 0x1e5c48u: goto label_1e5c48;
        case 0x1e5c4cu: goto label_1e5c4c;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c54u: goto label_1e5c54;
        case 0x1e5c58u: goto label_1e5c58;
        case 0x1e5c5cu: goto label_1e5c5c;
        case 0x1e5c60u: goto label_1e5c60;
        case 0x1e5c64u: goto label_1e5c64;
        case 0x1e5c68u: goto label_1e5c68;
        case 0x1e5c6cu: goto label_1e5c6c;
        default: break;
    }

    ctx->pc = 0x1e5b70u;

label_1e5b70:
    // 0x1e5b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5b74:
    // 0x1e5b74: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1e5b74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1e5b78:
    // 0x1e5b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e5b7c:
    // 0x1e5b7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5b80:
    // 0x1e5b80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5b84:
    // 0x1e5b84: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5b88:
    // 0x1e5b88: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5b8c:
    // 0x1e5b8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5b90:
    // 0x1e5b90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e5b94:
    if (ctx->pc == 0x1E5B94u) {
        ctx->pc = 0x1E5B94u;
            // 0x1e5b94: 0x2508ea60  addiu       $t0, $t0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961760));
        ctx->pc = 0x1E5B98u;
        goto label_1e5b98;
    }
    ctx->pc = 0x1E5B90u;
    {
        const bool branch_taken_0x1e5b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B90u;
            // 0x1e5b94: 0x2508ea60  addiu       $t0, $t0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b90) {
            ctx->pc = 0x1E5BC0u;
            goto label_1e5bc0;
        }
    }
    ctx->pc = 0x1E5B98u;
label_1e5b98:
    // 0x1e5b98: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1e5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1e5b9c:
    // 0x1e5b9c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e5ba0:
    // 0x1e5ba0: 0x2442a970  addiu       $v0, $v0, -0x5690
    ctx->pc = 0x1e5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945136));
label_1e5ba4:
    // 0x1e5ba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e5ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e5ba8:
    // 0x1e5ba8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e5bac:
    // 0x1e5bac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e5bb0:
    // 0x1e5bb0: 0x4009c803  .word       0x4009C803                   # mfc0        $t1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ctx->cop0_perf);
label_1e5bb4:
    // 0x1e5bb4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e5bb8:
    // 0x1e5bb8: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1e5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_1e5bbc:
    // 0x1e5bbc: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x1e5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_1e5bc0:
    // 0x1e5bc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5bc4:
    // 0x1e5bc4: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1e5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_1e5bc8:
    // 0x1e5bc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e5bcc:
    // 0x1e5bcc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1e5bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1e5bd0:
    // 0x1e5bd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e5bd4:
    // 0x1e5bd4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1e5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e5bd8:
    // 0x1e5bd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1e5bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1e5bdc:
    // 0x1e5bdc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e5be0:
    // 0x1e5be0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e5be4:
    // 0x1e5be4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1e5be4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e5be8:
    // 0x1e5be8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5bec:
    // 0x1e5bec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e5becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e5bf0:
    // 0x1e5bf0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e5bf4:
    // 0x1e5bf4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e5bf8:
    // 0x1e5bf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e5bfc:
    // 0x1e5bfc: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1e5bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1e5c00:
    // 0x1e5c00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e5c04:
    // 0x1e5c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5c08:
    // 0x1e5c08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e5c0c:
    // 0x1e5c0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e5c10:
    // 0x1e5c10: 0x8c4209a4  lw          $v0, 0x9A4($v0)
    ctx->pc = 0x1e5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
label_1e5c14:
    // 0x1e5c14: 0x40f809  jalr        $v0
label_1e5c18:
    if (ctx->pc == 0x1E5C18u) {
        ctx->pc = 0x1E5C18u;
            // 0x1e5c18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E5C1Cu;
        goto label_1e5c1c;
    }
    ctx->pc = 0x1E5C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5C1Cu);
        ctx->pc = 0x1E5C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C14u;
            // 0x1e5c18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5C1Cu; }
            if (ctx->pc != 0x1E5C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E5C1Cu;
label_1e5c1c:
    // 0x1e5c1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5c20:
    // 0x1e5c20: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e5c24:
    // 0x1e5c24: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5c28:
    // 0x1e5c28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5c2c:
    // 0x1e5c2c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e5c30:
    // 0x1e5c30: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e5c30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5c34:
    // 0x1e5c34: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e5c38:
    if (ctx->pc == 0x1E5C38u) {
        ctx->pc = 0x1E5C38u;
            // 0x1e5c38: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E5C3Cu;
        goto label_1e5c3c;
    }
    ctx->pc = 0x1E5C34u;
    {
        const bool branch_taken_0x1e5c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C34u;
            // 0x1e5c38: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c34) {
            ctx->pc = 0x1E5C64u;
            goto label_1e5c64;
        }
    }
    ctx->pc = 0x1E5C3Cu;
label_1e5c3c:
    // 0x1e5c3c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5c40:
    // 0x1e5c40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5c44:
    // 0x1e5c44: 0x2463a980  addiu       $v1, $v1, -0x5680
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945152));
label_1e5c48:
    // 0x1e5c48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e5c4c:
    // 0x1e5c4c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e5c50:
    // 0x1e5c50: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e5c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e5c54:
    // 0x1e5c54: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e5c58:
    // 0x1e5c58: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e5c5c:
    // 0x1e5c5c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e5c60:
    // 0x1e5c60: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e5c64:
    // 0x1e5c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5c68:
    // 0x1e5c68: 0x3e00008  jr          $ra
label_1e5c6c:
    if (ctx->pc == 0x1E5C6Cu) {
        ctx->pc = 0x1E5C6Cu;
            // 0x1e5c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E5C70u;
        goto label_fallthrough_0x1e5c68;
    }
    ctx->pc = 0x1E5C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5C68u;
            // 0x1e5c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e5c68:
    ctx->pc = 0x1E5C70u;
}
