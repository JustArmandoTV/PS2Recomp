#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162E98
// Address: 0x162e98 - 0x162f00
void sub_00162E98_0x162e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162E98_0x162e98");
#endif

    switch (ctx->pc) {
        case 0x162e98u: goto label_162e98;
        case 0x162e9cu: goto label_162e9c;
        case 0x162ea0u: goto label_162ea0;
        case 0x162ea4u: goto label_162ea4;
        case 0x162ea8u: goto label_162ea8;
        case 0x162eacu: goto label_162eac;
        case 0x162eb0u: goto label_162eb0;
        case 0x162eb4u: goto label_162eb4;
        case 0x162eb8u: goto label_162eb8;
        case 0x162ebcu: goto label_162ebc;
        case 0x162ec0u: goto label_162ec0;
        case 0x162ec4u: goto label_162ec4;
        case 0x162ec8u: goto label_162ec8;
        case 0x162eccu: goto label_162ecc;
        case 0x162ed0u: goto label_162ed0;
        case 0x162ed4u: goto label_162ed4;
        case 0x162ed8u: goto label_162ed8;
        case 0x162edcu: goto label_162edc;
        case 0x162ee0u: goto label_162ee0;
        case 0x162ee4u: goto label_162ee4;
        case 0x162ee8u: goto label_162ee8;
        case 0x162eecu: goto label_162eec;
        case 0x162ef0u: goto label_162ef0;
        case 0x162ef4u: goto label_162ef4;
        case 0x162ef8u: goto label_162ef8;
        case 0x162efcu: goto label_162efc;
        default: break;
    }

    ctx->pc = 0x162e98u;

label_162e98:
    // 0x162e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_162e9c:
    // 0x162e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162ea0:
    // 0x162ea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x162ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_162ea4:
    // 0x162ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162ea8:
    // 0x162ea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162eac:
    // 0x162eac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_162eb0:
    // 0x162eb0: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x162eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_162eb4:
    // 0x162eb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_162eb8:
    if (ctx->pc == 0x162EB8u) {
        ctx->pc = 0x162EB8u;
            // 0x162eb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162EBCu;
        goto label_162ebc;
    }
    ctx->pc = 0x162EB4u;
    {
        const bool branch_taken_0x162eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EB4u;
            // 0x162eb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162eb4) {
            ctx->pc = 0x162ECCu;
            goto label_162ecc;
        }
    }
    ctx->pc = 0x162EBCu;
label_162ebc:
    // 0x162ebc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_162ec0:
    // 0x162ec0: 0x8c435fcc  lw          $v1, 0x5FCC($v0)
    ctx->pc = 0x162ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24524)));
label_162ec4:
    // 0x162ec4: 0x60f809  jalr        $v1
label_162ec8:
    if (ctx->pc == 0x162EC8u) {
        ctx->pc = 0x162ECCu;
        goto label_162ecc;
    }
    ctx->pc = 0x162EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162ECCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162ECCu; }
            if (ctx->pc != 0x162ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x162ECCu;
label_162ecc:
    // 0x162ecc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_162ed0:
    // 0x162ed0: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x162ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_162ed4:
    // 0x162ed4: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x162ed4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_162ed8:
    // 0x162ed8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_162edc:
    if (ctx->pc == 0x162EDCu) {
        ctx->pc = 0x162EDCu;
            // 0x162edc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x162EE0u;
        goto label_162ee0;
    }
    ctx->pc = 0x162ED8u;
    {
        const bool branch_taken_0x162ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ed8) {
            ctx->pc = 0x162EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162ED8u;
            // 0x162edc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x162EE0u;
            goto label_162ee0;
        }
    }
    ctx->pc = 0x162EE0u;
label_162ee0:
    // 0x162ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162ee4:
    // 0x162ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162ee8:
    // 0x162ee8: 0x1812  mflo        $v1
    ctx->pc = 0x162ee8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_162eec:
    // 0x162eec: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x162eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
label_162ef0:
    // 0x162ef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162ef4:
    // 0x162ef4: 0x3e00008  jr          $ra
label_162ef8:
    if (ctx->pc == 0x162EF8u) {
        ctx->pc = 0x162EF8u;
            // 0x162ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x162EFCu;
        goto label_162efc;
    }
    ctx->pc = 0x162EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EF4u;
            // 0x162ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162EFCu;
label_162efc:
    // 0x162efc: 0x0  nop
    ctx->pc = 0x162efcu;
    // NOP
}
