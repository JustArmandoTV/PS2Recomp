#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5A90
// Address: 0x1e5a90 - 0x1e5b70
void sub_001E5A90_0x1e5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5A90_0x1e5a90");
#endif

    switch (ctx->pc) {
        case 0x1e5a90u: goto label_1e5a90;
        case 0x1e5a94u: goto label_1e5a94;
        case 0x1e5a98u: goto label_1e5a98;
        case 0x1e5a9cu: goto label_1e5a9c;
        case 0x1e5aa0u: goto label_1e5aa0;
        case 0x1e5aa4u: goto label_1e5aa4;
        case 0x1e5aa8u: goto label_1e5aa8;
        case 0x1e5aacu: goto label_1e5aac;
        case 0x1e5ab0u: goto label_1e5ab0;
        case 0x1e5ab4u: goto label_1e5ab4;
        case 0x1e5ab8u: goto label_1e5ab8;
        case 0x1e5abcu: goto label_1e5abc;
        case 0x1e5ac0u: goto label_1e5ac0;
        case 0x1e5ac4u: goto label_1e5ac4;
        case 0x1e5ac8u: goto label_1e5ac8;
        case 0x1e5accu: goto label_1e5acc;
        case 0x1e5ad0u: goto label_1e5ad0;
        case 0x1e5ad4u: goto label_1e5ad4;
        case 0x1e5ad8u: goto label_1e5ad8;
        case 0x1e5adcu: goto label_1e5adc;
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5ae4u: goto label_1e5ae4;
        case 0x1e5ae8u: goto label_1e5ae8;
        case 0x1e5aecu: goto label_1e5aec;
        case 0x1e5af0u: goto label_1e5af0;
        case 0x1e5af4u: goto label_1e5af4;
        case 0x1e5af8u: goto label_1e5af8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b00u: goto label_1e5b00;
        case 0x1e5b04u: goto label_1e5b04;
        case 0x1e5b08u: goto label_1e5b08;
        case 0x1e5b0cu: goto label_1e5b0c;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b14u: goto label_1e5b14;
        case 0x1e5b18u: goto label_1e5b18;
        case 0x1e5b1cu: goto label_1e5b1c;
        case 0x1e5b20u: goto label_1e5b20;
        case 0x1e5b24u: goto label_1e5b24;
        case 0x1e5b28u: goto label_1e5b28;
        case 0x1e5b2cu: goto label_1e5b2c;
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5b34u: goto label_1e5b34;
        case 0x1e5b38u: goto label_1e5b38;
        case 0x1e5b3cu: goto label_1e5b3c;
        case 0x1e5b40u: goto label_1e5b40;
        case 0x1e5b44u: goto label_1e5b44;
        case 0x1e5b48u: goto label_1e5b48;
        case 0x1e5b4cu: goto label_1e5b4c;
        case 0x1e5b50u: goto label_1e5b50;
        case 0x1e5b54u: goto label_1e5b54;
        case 0x1e5b58u: goto label_1e5b58;
        case 0x1e5b5cu: goto label_1e5b5c;
        case 0x1e5b60u: goto label_1e5b60;
        case 0x1e5b64u: goto label_1e5b64;
        case 0x1e5b68u: goto label_1e5b68;
        case 0x1e5b6cu: goto label_1e5b6c;
        default: break;
    }

    ctx->pc = 0x1e5a90u;

label_1e5a90:
    // 0x1e5a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5a94:
    // 0x1e5a94: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1e5a94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_1e5a98:
    // 0x1e5a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e5a9c:
    // 0x1e5a9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5aa0:
    // 0x1e5aa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5aa4:
    // 0x1e5aa4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5aa8:
    // 0x1e5aa8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5aac:
    // 0x1e5aac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5ab0:
    // 0x1e5ab0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e5ab4:
    if (ctx->pc == 0x1E5AB4u) {
        ctx->pc = 0x1E5AB4u;
            // 0x1e5ab4: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->pc = 0x1E5AB8u;
        goto label_1e5ab8;
    }
    ctx->pc = 0x1E5AB0u;
    {
        const bool branch_taken_0x1e5ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AB0u;
            // 0x1e5ab4: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ab0) {
            ctx->pc = 0x1E5AE0u;
            goto label_1e5ae0;
        }
    }
    ctx->pc = 0x1E5AB8u;
label_1e5ab8:
    // 0x1e5ab8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1e5abc:
    // 0x1e5abc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e5ac0:
    // 0x1e5ac0: 0x2442a970  addiu       $v0, $v0, -0x5690
    ctx->pc = 0x1e5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945136));
label_1e5ac4:
    // 0x1e5ac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e5ac8:
    // 0x1e5ac8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e5acc:
    // 0x1e5acc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e5accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e5ad0:
    // 0x1e5ad0: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
label_1e5ad4:
    // 0x1e5ad4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e5ad8:
    // 0x1e5ad8: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x1e5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
label_1e5adc:
    // 0x1e5adc: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1e5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_1e5ae0:
    // 0x1e5ae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5ae4:
    // 0x1e5ae4: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x1e5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
label_1e5ae8:
    // 0x1e5ae8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e5aec:
    // 0x1e5aec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1e5aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1e5af0:
    // 0x1e5af0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5af4:
    // 0x1e5af4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e5af8:
    // 0x1e5af8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1e5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1e5afc:
    // 0x1e5afc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e5b00:
    // 0x1e5b00: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e5b04:
    // 0x1e5b04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5b08:
    // 0x1e5b08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5b0c:
    // 0x1e5b0c: 0x320f809  jalr        $t9
label_1e5b10:
    if (ctx->pc == 0x1E5B10u) {
        ctx->pc = 0x1E5B10u;
            // 0x1e5b10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E5B14u;
        goto label_1e5b14;
    }
    ctx->pc = 0x1E5B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5B14u);
        ctx->pc = 0x1E5B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B0Cu;
            // 0x1e5b10: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5B14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B14u; }
            if (ctx->pc != 0x1E5B14u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5B14u;
label_1e5b14:
    // 0x1e5b14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5b18:
    // 0x1e5b18: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e5b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e5b1c:
    // 0x1e5b1c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5b20:
    // 0x1e5b20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5b24:
    // 0x1e5b24: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e5b28:
    // 0x1e5b28: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e5b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5b2c:
    // 0x1e5b2c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e5b30:
    if (ctx->pc == 0x1E5B30u) {
        ctx->pc = 0x1E5B30u;
            // 0x1e5b30: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E5B34u;
        goto label_1e5b34;
    }
    ctx->pc = 0x1E5B2Cu;
    {
        const bool branch_taken_0x1e5b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B2Cu;
            // 0x1e5b30: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b2c) {
            ctx->pc = 0x1E5B5Cu;
            goto label_1e5b5c;
        }
    }
    ctx->pc = 0x1E5B34u;
label_1e5b34:
    // 0x1e5b34: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5b38:
    // 0x1e5b38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5b3c:
    // 0x1e5b3c: 0x2463a980  addiu       $v1, $v1, -0x5680
    ctx->pc = 0x1e5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945152));
label_1e5b40:
    // 0x1e5b40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e5b44:
    // 0x1e5b44: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e5b48:
    // 0x1e5b48: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e5b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e5b4c:
    // 0x1e5b4c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e5b50:
    // 0x1e5b50: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e5b54:
    // 0x1e5b54: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e5b58:
    // 0x1e5b58: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e5b5c:
    // 0x1e5b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5b60:
    // 0x1e5b60: 0x3e00008  jr          $ra
label_1e5b64:
    if (ctx->pc == 0x1E5B64u) {
        ctx->pc = 0x1E5B64u;
            // 0x1e5b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E5B68u;
        goto label_1e5b68;
    }
    ctx->pc = 0x1E5B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B60u;
            // 0x1e5b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5B68u;
label_1e5b68:
    // 0x1e5b68: 0x0  nop
    ctx->pc = 0x1e5b68u;
    // NOP
label_1e5b6c:
    // 0x1e5b6c: 0x0  nop
    ctx->pc = 0x1e5b6cu;
    // NOP
}
