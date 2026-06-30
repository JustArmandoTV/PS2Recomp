#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00272AF0
// Address: 0x272af0 - 0x272b70
void sub_00272AF0_0x272af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272AF0_0x272af0");
#endif

    switch (ctx->pc) {
        case 0x272af0u: goto label_272af0;
        case 0x272af4u: goto label_272af4;
        case 0x272af8u: goto label_272af8;
        case 0x272afcu: goto label_272afc;
        case 0x272b00u: goto label_272b00;
        case 0x272b04u: goto label_272b04;
        case 0x272b08u: goto label_272b08;
        case 0x272b0cu: goto label_272b0c;
        case 0x272b10u: goto label_272b10;
        case 0x272b14u: goto label_272b14;
        case 0x272b18u: goto label_272b18;
        case 0x272b1cu: goto label_272b1c;
        case 0x272b20u: goto label_272b20;
        case 0x272b24u: goto label_272b24;
        case 0x272b28u: goto label_272b28;
        case 0x272b2cu: goto label_272b2c;
        case 0x272b30u: goto label_272b30;
        case 0x272b34u: goto label_272b34;
        case 0x272b38u: goto label_272b38;
        case 0x272b3cu: goto label_272b3c;
        case 0x272b40u: goto label_272b40;
        case 0x272b44u: goto label_272b44;
        case 0x272b48u: goto label_272b48;
        case 0x272b4cu: goto label_272b4c;
        case 0x272b50u: goto label_272b50;
        case 0x272b54u: goto label_272b54;
        case 0x272b58u: goto label_272b58;
        case 0x272b5cu: goto label_272b5c;
        case 0x272b60u: goto label_272b60;
        case 0x272b64u: goto label_272b64;
        case 0x272b68u: goto label_272b68;
        case 0x272b6cu: goto label_272b6c;
        default: break;
    }

    ctx->pc = 0x272af0u;

label_272af0:
    // 0x272af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_272af4:
    // 0x272af4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272af8:
    // 0x272af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_272afc:
    // 0x272afc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x272afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_272b00:
    // 0x272b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_272b04:
    // 0x272b04: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x272b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_272b08:
    // 0x272b08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x272b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_272b0c:
    // 0x272b0c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x272b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_272b10:
    // 0x272b10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x272b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_272b14:
    // 0x272b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272b18:
    // 0x272b18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x272b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_272b1c:
    // 0x272b1c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x272b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_272b20:
    // 0x272b20: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
label_272b24:
    // 0x272b24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272b28:
    // 0x272b28: 0x2442f3b0  addiu       $v0, $v0, -0xC50
    ctx->pc = 0x272b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964144));
label_272b2c:
    // 0x272b2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x272b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_272b30:
    // 0x272b30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x272b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_272b34:
    // 0x272b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272b38:
    // 0x272b38: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x272b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_272b3c:
    // 0x272b3c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x272b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_272b40:
    // 0x272b40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272b44:
    // 0x272b44: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x272b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_272b48:
    // 0x272b48: 0x320f809  jalr        $t9
label_272b4c:
    if (ctx->pc == 0x272B4Cu) {
        ctx->pc = 0x272B50u;
        goto label_272b50;
    }
    ctx->pc = 0x272B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272B50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x272B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272B50u; }
            if (ctx->pc != 0x272B50u) { return; }
        }
        }
    }
    ctx->pc = 0x272B50u;
label_272b50:
    // 0x272b50: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x272b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_272b54:
    // 0x272b54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x272b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272b58:
    // 0x272b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_272b5c:
    // 0x272b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_272b60:
    // 0x272b60: 0x3e00008  jr          $ra
label_272b64:
    if (ctx->pc == 0x272B64u) {
        ctx->pc = 0x272B64u;
            // 0x272b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x272B68u;
        goto label_272b68;
    }
    ctx->pc = 0x272B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272B60u;
            // 0x272b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272B68u;
label_272b68:
    // 0x272b68: 0x0  nop
    ctx->pc = 0x272b68u;
    // NOP
label_272b6c:
    // 0x272b6c: 0x0  nop
    ctx->pc = 0x272b6cu;
    // NOP
}
