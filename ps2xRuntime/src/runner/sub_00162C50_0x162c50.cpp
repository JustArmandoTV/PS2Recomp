#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162C50
// Address: 0x162c50 - 0x162d00
void sub_00162C50_0x162c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162C50_0x162c50");
#endif

    switch (ctx->pc) {
        case 0x162c50u: goto label_162c50;
        case 0x162c54u: goto label_162c54;
        case 0x162c58u: goto label_162c58;
        case 0x162c5cu: goto label_162c5c;
        case 0x162c60u: goto label_162c60;
        case 0x162c64u: goto label_162c64;
        case 0x162c68u: goto label_162c68;
        case 0x162c6cu: goto label_162c6c;
        case 0x162c70u: goto label_162c70;
        case 0x162c74u: goto label_162c74;
        case 0x162c78u: goto label_162c78;
        case 0x162c7cu: goto label_162c7c;
        case 0x162c80u: goto label_162c80;
        case 0x162c84u: goto label_162c84;
        case 0x162c88u: goto label_162c88;
        case 0x162c8cu: goto label_162c8c;
        case 0x162c90u: goto label_162c90;
        case 0x162c94u: goto label_162c94;
        case 0x162c98u: goto label_162c98;
        case 0x162c9cu: goto label_162c9c;
        case 0x162ca0u: goto label_162ca0;
        case 0x162ca4u: goto label_162ca4;
        case 0x162ca8u: goto label_162ca8;
        case 0x162cacu: goto label_162cac;
        case 0x162cb0u: goto label_162cb0;
        case 0x162cb4u: goto label_162cb4;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cbcu: goto label_162cbc;
        case 0x162cc0u: goto label_162cc0;
        case 0x162cc4u: goto label_162cc4;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cccu: goto label_162ccc;
        case 0x162cd0u: goto label_162cd0;
        case 0x162cd4u: goto label_162cd4;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cdcu: goto label_162cdc;
        case 0x162ce0u: goto label_162ce0;
        case 0x162ce4u: goto label_162ce4;
        case 0x162ce8u: goto label_162ce8;
        case 0x162cecu: goto label_162cec;
        case 0x162cf0u: goto label_162cf0;
        case 0x162cf4u: goto label_162cf4;
        case 0x162cf8u: goto label_162cf8;
        case 0x162cfcu: goto label_162cfc;
        default: break;
    }

    ctx->pc = 0x162c50u;

label_162c50:
    // 0x162c50: 0x3e00008  jr          $ra
label_162c54:
    if (ctx->pc == 0x162C54u) {
        ctx->pc = 0x162C54u;
            // 0x162c54: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->pc = 0x162C58u;
        goto label_162c58;
    }
    ctx->pc = 0x162C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C50u;
            // 0x162c54: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C58u;
label_162c58:
    // 0x162c58: 0x3e00008  jr          $ra
label_162c5c:
    if (ctx->pc == 0x162C5Cu) {
        ctx->pc = 0x162C5Cu;
            // 0x162c5c: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x162C60u;
        goto label_162c60;
    }
    ctx->pc = 0x162C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C58u;
            // 0x162c5c: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C60u;
label_162c60:
    // 0x162c60: 0x3e00008  jr          $ra
label_162c64:
    if (ctx->pc == 0x162C64u) {
        ctx->pc = 0x162C64u;
            // 0x162c64: 0xe48c0024  swc1        $f12, 0x24($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->pc = 0x162C68u;
        goto label_162c68;
    }
    ctx->pc = 0x162C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C60u;
            // 0x162c64: 0xe48c0024  swc1        $f12, 0x24($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C68u;
label_162c68:
    // 0x162c68: 0x3e00008  jr          $ra
label_162c6c:
    if (ctx->pc == 0x162C6Cu) {
        ctx->pc = 0x162C6Cu;
            // 0x162c6c: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x162C70u;
        goto label_162c70;
    }
    ctx->pc = 0x162C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C68u;
            // 0x162c6c: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C70u;
label_162c70:
    // 0x162c70: 0x3e00008  jr          $ra
label_162c74:
    if (ctx->pc == 0x162C74u) {
        ctx->pc = 0x162C74u;
            // 0x162c74: 0xe48c0028  swc1        $f12, 0x28($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x162C78u;
        goto label_162c78;
    }
    ctx->pc = 0x162C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C70u;
            // 0x162c74: 0xe48c0028  swc1        $f12, 0x28($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C78u;
label_162c78:
    // 0x162c78: 0x3e00008  jr          $ra
label_162c7c:
    if (ctx->pc == 0x162C7Cu) {
        ctx->pc = 0x162C7Cu;
            // 0x162c7c: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x162C80u;
        goto label_162c80;
    }
    ctx->pc = 0x162C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C78u;
            // 0x162c7c: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C80u;
label_162c80:
    // 0x162c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162c84:
    // 0x162c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162c88:
    // 0x162c88: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x162c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_162c8c:
    // 0x162c8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162c90:
    if (ctx->pc == 0x162C90u) {
        ctx->pc = 0x162C90u;
            // 0x162c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162C94u;
        goto label_162c94;
    }
    ctx->pc = 0x162C8Cu;
    {
        const bool branch_taken_0x162c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C8Cu;
            // 0x162c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c8c) {
            ctx->pc = 0x162CA4u;
            goto label_162ca4;
        }
    }
    ctx->pc = 0x162C94u;
label_162c94:
    // 0x162c94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_162c98:
    // 0x162c98: 0x8c435fb8  lw          $v1, 0x5FB8($v0)
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24504)));
label_162c9c:
    // 0x162c9c: 0x60f809  jalr        $v1
label_162ca0:
    if (ctx->pc == 0x162CA0u) {
        ctx->pc = 0x162CA4u;
        goto label_162ca4;
    }
    ctx->pc = 0x162C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162CA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162CA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162CA4u; }
            if (ctx->pc != 0x162CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x162CA4u;
label_162ca4:
    // 0x162ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162ca8:
    // 0x162ca8: 0x3e00008  jr          $ra
label_162cac:
    if (ctx->pc == 0x162CACu) {
        ctx->pc = 0x162CACu;
            // 0x162cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162CB0u;
        goto label_162cb0;
    }
    ctx->pc = 0x162CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CA8u;
            // 0x162cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162CB0u;
label_162cb0:
    // 0x162cb0: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x162cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_162cb4:
    // 0x162cb4: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x162cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
label_162cb8:
    // 0x162cb8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x162cb8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_162cbc:
    // 0x162cbc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_162cc0:
    if (ctx->pc == 0x162CC0u) {
        ctx->pc = 0x162CC0u;
            // 0x162cc0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x162CC4u;
        goto label_162cc4;
    }
    ctx->pc = 0x162CBCu;
    {
        const bool branch_taken_0x162cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162cbc) {
            ctx->pc = 0x162CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162CBCu;
            // 0x162cc0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x162CC4u;
            goto label_162cc4;
        }
    }
    ctx->pc = 0x162CC4u;
label_162cc4:
    // 0x162cc4: 0x1812  mflo        $v1
    ctx->pc = 0x162cc4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_162cc8:
    // 0x162cc8: 0x3e00008  jr          $ra
label_162ccc:
    if (ctx->pc == 0x162CCCu) {
        ctx->pc = 0x162CCCu;
            // 0x162ccc: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x162CD0u;
        goto label_162cd0;
    }
    ctx->pc = 0x162CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CC8u;
            // 0x162ccc: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162CD0u;
label_162cd0:
    // 0x162cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162cd4:
    // 0x162cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162cd8:
    // 0x162cd8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_162cdc:
    // 0x162cdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162ce0:
    if (ctx->pc == 0x162CE0u) {
        ctx->pc = 0x162CE0u;
            // 0x162ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162CE4u;
        goto label_162ce4;
    }
    ctx->pc = 0x162CDCu;
    {
        const bool branch_taken_0x162cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CDCu;
            // 0x162ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cdc) {
            ctx->pc = 0x162CF4u;
            goto label_162cf4;
        }
    }
    ctx->pc = 0x162CE4u;
label_162ce4:
    // 0x162ce4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_162ce8:
    // 0x162ce8: 0x8c435fbc  lw          $v1, 0x5FBC($v0)
    ctx->pc = 0x162ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24508)));
label_162cec:
    // 0x162cec: 0x60f809  jalr        $v1
label_162cf0:
    if (ctx->pc == 0x162CF0u) {
        ctx->pc = 0x162CF4u;
        goto label_162cf4;
    }
    ctx->pc = 0x162CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162CF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162CF4u; }
            if (ctx->pc != 0x162CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x162CF4u;
label_162cf4:
    // 0x162cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162cf8:
    // 0x162cf8: 0x3e00008  jr          $ra
label_162cfc:
    if (ctx->pc == 0x162CFCu) {
        ctx->pc = 0x162CFCu;
            // 0x162cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162D00u;
        goto label_fallthrough_0x162cf8;
    }
    ctx->pc = 0x162CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CF8u;
            // 0x162cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162cf8:
    ctx->pc = 0x162D00u;
}
