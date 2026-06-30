#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048FD50
// Address: 0x48fd50 - 0x48ff40
void sub_0048FD50_0x48fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FD50_0x48fd50");
#endif

    switch (ctx->pc) {
        case 0x48fd50u: goto label_48fd50;
        case 0x48fd54u: goto label_48fd54;
        case 0x48fd58u: goto label_48fd58;
        case 0x48fd5cu: goto label_48fd5c;
        case 0x48fd60u: goto label_48fd60;
        case 0x48fd64u: goto label_48fd64;
        case 0x48fd68u: goto label_48fd68;
        case 0x48fd6cu: goto label_48fd6c;
        case 0x48fd70u: goto label_48fd70;
        case 0x48fd74u: goto label_48fd74;
        case 0x48fd78u: goto label_48fd78;
        case 0x48fd7cu: goto label_48fd7c;
        case 0x48fd80u: goto label_48fd80;
        case 0x48fd84u: goto label_48fd84;
        case 0x48fd88u: goto label_48fd88;
        case 0x48fd8cu: goto label_48fd8c;
        case 0x48fd90u: goto label_48fd90;
        case 0x48fd94u: goto label_48fd94;
        case 0x48fd98u: goto label_48fd98;
        case 0x48fd9cu: goto label_48fd9c;
        case 0x48fda0u: goto label_48fda0;
        case 0x48fda4u: goto label_48fda4;
        case 0x48fda8u: goto label_48fda8;
        case 0x48fdacu: goto label_48fdac;
        case 0x48fdb0u: goto label_48fdb0;
        case 0x48fdb4u: goto label_48fdb4;
        case 0x48fdb8u: goto label_48fdb8;
        case 0x48fdbcu: goto label_48fdbc;
        case 0x48fdc0u: goto label_48fdc0;
        case 0x48fdc4u: goto label_48fdc4;
        case 0x48fdc8u: goto label_48fdc8;
        case 0x48fdccu: goto label_48fdcc;
        case 0x48fdd0u: goto label_48fdd0;
        case 0x48fdd4u: goto label_48fdd4;
        case 0x48fdd8u: goto label_48fdd8;
        case 0x48fddcu: goto label_48fddc;
        case 0x48fde0u: goto label_48fde0;
        case 0x48fde4u: goto label_48fde4;
        case 0x48fde8u: goto label_48fde8;
        case 0x48fdecu: goto label_48fdec;
        case 0x48fdf0u: goto label_48fdf0;
        case 0x48fdf4u: goto label_48fdf4;
        case 0x48fdf8u: goto label_48fdf8;
        case 0x48fdfcu: goto label_48fdfc;
        case 0x48fe00u: goto label_48fe00;
        case 0x48fe04u: goto label_48fe04;
        case 0x48fe08u: goto label_48fe08;
        case 0x48fe0cu: goto label_48fe0c;
        case 0x48fe10u: goto label_48fe10;
        case 0x48fe14u: goto label_48fe14;
        case 0x48fe18u: goto label_48fe18;
        case 0x48fe1cu: goto label_48fe1c;
        case 0x48fe20u: goto label_48fe20;
        case 0x48fe24u: goto label_48fe24;
        case 0x48fe28u: goto label_48fe28;
        case 0x48fe2cu: goto label_48fe2c;
        case 0x48fe30u: goto label_48fe30;
        case 0x48fe34u: goto label_48fe34;
        case 0x48fe38u: goto label_48fe38;
        case 0x48fe3cu: goto label_48fe3c;
        case 0x48fe40u: goto label_48fe40;
        case 0x48fe44u: goto label_48fe44;
        case 0x48fe48u: goto label_48fe48;
        case 0x48fe4cu: goto label_48fe4c;
        case 0x48fe50u: goto label_48fe50;
        case 0x48fe54u: goto label_48fe54;
        case 0x48fe58u: goto label_48fe58;
        case 0x48fe5cu: goto label_48fe5c;
        case 0x48fe60u: goto label_48fe60;
        case 0x48fe64u: goto label_48fe64;
        case 0x48fe68u: goto label_48fe68;
        case 0x48fe6cu: goto label_48fe6c;
        case 0x48fe70u: goto label_48fe70;
        case 0x48fe74u: goto label_48fe74;
        case 0x48fe78u: goto label_48fe78;
        case 0x48fe7cu: goto label_48fe7c;
        case 0x48fe80u: goto label_48fe80;
        case 0x48fe84u: goto label_48fe84;
        case 0x48fe88u: goto label_48fe88;
        case 0x48fe8cu: goto label_48fe8c;
        case 0x48fe90u: goto label_48fe90;
        case 0x48fe94u: goto label_48fe94;
        case 0x48fe98u: goto label_48fe98;
        case 0x48fe9cu: goto label_48fe9c;
        case 0x48fea0u: goto label_48fea0;
        case 0x48fea4u: goto label_48fea4;
        case 0x48fea8u: goto label_48fea8;
        case 0x48feacu: goto label_48feac;
        case 0x48feb0u: goto label_48feb0;
        case 0x48feb4u: goto label_48feb4;
        case 0x48feb8u: goto label_48feb8;
        case 0x48febcu: goto label_48febc;
        case 0x48fec0u: goto label_48fec0;
        case 0x48fec4u: goto label_48fec4;
        case 0x48fec8u: goto label_48fec8;
        case 0x48feccu: goto label_48fecc;
        case 0x48fed0u: goto label_48fed0;
        case 0x48fed4u: goto label_48fed4;
        case 0x48fed8u: goto label_48fed8;
        case 0x48fedcu: goto label_48fedc;
        case 0x48fee0u: goto label_48fee0;
        case 0x48fee4u: goto label_48fee4;
        case 0x48fee8u: goto label_48fee8;
        case 0x48feecu: goto label_48feec;
        case 0x48fef0u: goto label_48fef0;
        case 0x48fef4u: goto label_48fef4;
        case 0x48fef8u: goto label_48fef8;
        case 0x48fefcu: goto label_48fefc;
        case 0x48ff00u: goto label_48ff00;
        case 0x48ff04u: goto label_48ff04;
        case 0x48ff08u: goto label_48ff08;
        case 0x48ff0cu: goto label_48ff0c;
        case 0x48ff10u: goto label_48ff10;
        case 0x48ff14u: goto label_48ff14;
        case 0x48ff18u: goto label_48ff18;
        case 0x48ff1cu: goto label_48ff1c;
        case 0x48ff20u: goto label_48ff20;
        case 0x48ff24u: goto label_48ff24;
        case 0x48ff28u: goto label_48ff28;
        case 0x48ff2cu: goto label_48ff2c;
        case 0x48ff30u: goto label_48ff30;
        case 0x48ff34u: goto label_48ff34;
        case 0x48ff38u: goto label_48ff38;
        case 0x48ff3cu: goto label_48ff3c;
        default: break;
    }

    ctx->pc = 0x48fd50u;

label_48fd50:
    // 0x48fd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48fd54:
    // 0x48fd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48fd58:
    // 0x48fd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48fd5c:
    // 0x48fd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48fd60:
    // 0x48fd60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48fd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48fd64:
    // 0x48fd64: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_48fd68:
    if (ctx->pc == 0x48FD68u) {
        ctx->pc = 0x48FD68u;
            // 0x48fd68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48FD6Cu;
        goto label_48fd6c;
    }
    ctx->pc = 0x48FD64u;
    {
        const bool branch_taken_0x48fd64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FD64u;
            // 0x48fd68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fd64) {
            ctx->pc = 0x48FDECu;
            goto label_48fdec;
        }
    }
    ctx->pc = 0x48FD6Cu;
label_48fd6c:
    // 0x48fd6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48fd70:
    // 0x48fd70: 0x2442fa20  addiu       $v0, $v0, -0x5E0
    ctx->pc = 0x48fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965792));
label_48fd74:
    // 0x48fd74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x48fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_48fd78:
    // 0x48fd78: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x48fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_48fd7c:
    // 0x48fd7c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_48fd80:
    if (ctx->pc == 0x48FD80u) {
        ctx->pc = 0x48FD80u;
            // 0x48fd80: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x48FD84u;
        goto label_48fd84;
    }
    ctx->pc = 0x48FD7Cu;
    {
        const bool branch_taken_0x48fd7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fd7c) {
            ctx->pc = 0x48FD80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48FD7Cu;
            // 0x48fd80: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48FDA0u;
            goto label_48fda0;
        }
    }
    ctx->pc = 0x48FD84u;
label_48fd84:
    // 0x48fd84: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_48fd88:
    if (ctx->pc == 0x48FD88u) {
        ctx->pc = 0x48FD8Cu;
        goto label_48fd8c;
    }
    ctx->pc = 0x48FD84u;
    {
        const bool branch_taken_0x48fd84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fd84) {
            ctx->pc = 0x48FD9Cu;
            goto label_48fd9c;
        }
    }
    ctx->pc = 0x48FD8Cu;
label_48fd8c:
    // 0x48fd8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48fd90:
    // 0x48fd90: 0xc0fe48c  jal         func_3F9230
label_48fd94:
    if (ctx->pc == 0x48FD94u) {
        ctx->pc = 0x48FD94u;
            // 0x48fd94: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x48FD98u;
        goto label_48fd98;
    }
    ctx->pc = 0x48FD90u;
    SET_GPR_U32(ctx, 31, 0x48FD98u);
    ctx->pc = 0x48FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FD90u;
            // 0x48fd94: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FD98u; }
        if (ctx->pc != 0x48FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FD98u; }
        if (ctx->pc != 0x48FD98u) { return; }
    }
    ctx->pc = 0x48FD98u;
label_48fd98:
    // 0x48fd98: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x48fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_48fd9c:
    // 0x48fd9c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x48fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_48fda0:
    // 0x48fda0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_48fda4:
    if (ctx->pc == 0x48FDA4u) {
        ctx->pc = 0x48FDA8u;
        goto label_48fda8;
    }
    ctx->pc = 0x48FDA0u;
    {
        const bool branch_taken_0x48fda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fda0) {
            ctx->pc = 0x48FDC0u;
            goto label_48fdc0;
        }
    }
    ctx->pc = 0x48FDA8u;
label_48fda8:
    // 0x48fda8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_48fdac:
    if (ctx->pc == 0x48FDACu) {
        ctx->pc = 0x48FDB0u;
        goto label_48fdb0;
    }
    ctx->pc = 0x48FDA8u;
    {
        const bool branch_taken_0x48fda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fda8) {
            ctx->pc = 0x48FDC0u;
            goto label_48fdc0;
        }
    }
    ctx->pc = 0x48FDB0u;
label_48fdb0:
    // 0x48fdb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48fdb4:
    // 0x48fdb4: 0xc0fe48c  jal         func_3F9230
label_48fdb8:
    if (ctx->pc == 0x48FDB8u) {
        ctx->pc = 0x48FDB8u;
            // 0x48fdb8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x48FDBCu;
        goto label_48fdbc;
    }
    ctx->pc = 0x48FDB4u;
    SET_GPR_U32(ctx, 31, 0x48FDBCu);
    ctx->pc = 0x48FDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FDB4u;
            // 0x48fdb8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FDBCu; }
        if (ctx->pc != 0x48FDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FDBCu; }
        if (ctx->pc != 0x48FDBCu) { return; }
    }
    ctx->pc = 0x48FDBCu;
label_48fdbc:
    // 0x48fdbc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x48fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_48fdc0:
    // 0x48fdc0: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_48fdc4:
    if (ctx->pc == 0x48FDC4u) {
        ctx->pc = 0x48FDC4u;
            // 0x48fdc4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x48FDC8u;
        goto label_48fdc8;
    }
    ctx->pc = 0x48FDC0u;
    {
        const bool branch_taken_0x48fdc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fdc0) {
            ctx->pc = 0x48FDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48FDC0u;
            // 0x48fdc4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48FDD8u;
            goto label_48fdd8;
        }
    }
    ctx->pc = 0x48FDC8u;
label_48fdc8:
    // 0x48fdc8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48fdcc:
    // 0x48fdcc: 0x2442f9c0  addiu       $v0, $v0, -0x640
    ctx->pc = 0x48fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
label_48fdd0:
    // 0x48fdd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x48fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_48fdd4:
    // 0x48fdd4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x48fdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_48fdd8:
    // 0x48fdd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48fdd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48fddc:
    // 0x48fddc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48fde0:
    if (ctx->pc == 0x48FDE0u) {
        ctx->pc = 0x48FDE0u;
            // 0x48fde0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48FDE4u;
        goto label_48fde4;
    }
    ctx->pc = 0x48FDDCu;
    {
        const bool branch_taken_0x48fddc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48fddc) {
            ctx->pc = 0x48FDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48FDDCu;
            // 0x48fde0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48FDF0u;
            goto label_48fdf0;
        }
    }
    ctx->pc = 0x48FDE4u;
label_48fde4:
    // 0x48fde4: 0xc0400a8  jal         func_1002A0
label_48fde8:
    if (ctx->pc == 0x48FDE8u) {
        ctx->pc = 0x48FDE8u;
            // 0x48fde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48FDECu;
        goto label_48fdec;
    }
    ctx->pc = 0x48FDE4u;
    SET_GPR_U32(ctx, 31, 0x48FDECu);
    ctx->pc = 0x48FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FDE4u;
            // 0x48fde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FDECu; }
        if (ctx->pc != 0x48FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FDECu; }
        if (ctx->pc != 0x48FDECu) { return; }
    }
    ctx->pc = 0x48FDECu;
label_48fdec:
    // 0x48fdec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48fdecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48fdf0:
    // 0x48fdf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48fdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48fdf4:
    // 0x48fdf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48fdf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48fdf8:
    // 0x48fdf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48fdfc:
    // 0x48fdfc: 0x3e00008  jr          $ra
label_48fe00:
    if (ctx->pc == 0x48FE00u) {
        ctx->pc = 0x48FE00u;
            // 0x48fe00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48FE04u;
        goto label_48fe04;
    }
    ctx->pc = 0x48FDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FDFCu;
            // 0x48fe00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48FE04u;
label_48fe04:
    // 0x48fe04: 0x0  nop
    ctx->pc = 0x48fe04u;
    // NOP
label_48fe08:
    // 0x48fe08: 0x0  nop
    ctx->pc = 0x48fe08u;
    // NOP
label_48fe0c:
    // 0x48fe0c: 0x0  nop
    ctx->pc = 0x48fe0cu;
    // NOP
label_48fe10:
    // 0x48fe10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48fe14:
    // 0x48fe14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48fe18:
    // 0x48fe18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48fe1c:
    // 0x48fe1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48fe20:
    // 0x48fe20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48fe24:
    // 0x48fe24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48fe28:
    // 0x48fe28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_48fe2c:
    // 0x48fe2c: 0x40f809  jalr        $v0
label_48fe30:
    if (ctx->pc == 0x48FE30u) {
        ctx->pc = 0x48FE30u;
            // 0x48fe30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48FE34u;
        goto label_48fe34;
    }
    ctx->pc = 0x48FE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48FE34u);
        ctx->pc = 0x48FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FE2Cu;
            // 0x48fe30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48FE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48FE34u; }
            if (ctx->pc != 0x48FE34u) { return; }
        }
        }
    }
    ctx->pc = 0x48FE34u;
label_48fe34:
    // 0x48fe34: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x48fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48fe38:
    // 0x48fe38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48fe38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48fe3c:
    // 0x48fe3c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_48fe40:
    // 0x48fe40: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x48fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48fe44:
    // 0x48fe44: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x48fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_48fe48:
    // 0x48fe48: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x48fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48fe4c:
    // 0x48fe4c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x48fe4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_48fe50:
    // 0x48fe50: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x48fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_48fe54:
    // 0x48fe54: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48fe58:
    // 0x48fe58: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x48fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_48fe5c:
    // 0x48fe5c: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x48fe5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_48fe60:
    // 0x48fe60: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x48fe60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
label_48fe64:
    // 0x48fe64: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x48fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_48fe68:
    // 0x48fe68: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x48fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_48fe6c:
    // 0x48fe6c: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x48fe6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_48fe70:
    // 0x48fe70: 0xa0430022  sb          $v1, 0x22($v0)
    ctx->pc = 0x48fe70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 3));
label_48fe74:
    // 0x48fe74: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x48fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_48fe78:
    // 0x48fe78: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48fe7c:
    // 0x48fe7c: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x48fe7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_48fe80:
    // 0x48fe80: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x48fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_48fe84:
    // 0x48fe84: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x48fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_48fe88:
    // 0x48fe88: 0x90420022  lbu         $v0, 0x22($v0)
    ctx->pc = 0x48fe88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_48fe8c:
    // 0x48fe8c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_48fe90:
    if (ctx->pc == 0x48FE90u) {
        ctx->pc = 0x48FE94u;
        goto label_48fe94;
    }
    ctx->pc = 0x48FE8Cu;
    {
        const bool branch_taken_0x48fe8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fe8c) {
            ctx->pc = 0x48FEDCu;
            goto label_48fedc;
        }
    }
    ctx->pc = 0x48FE94u;
label_48fe94:
    // 0x48fe94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48fe98:
    // 0x48fe98: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48fe9c:
    // 0x48fe9c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_48fea0:
    // 0x48fea0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48fea4:
    // 0x48fea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48fea8:
    // 0x48fea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48feac:
    // 0x48feac: 0xc0fe54c  jal         func_3F9530
label_48feb0:
    if (ctx->pc == 0x48FEB0u) {
        ctx->pc = 0x48FEB0u;
            // 0x48feb0: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48FEB4u;
        goto label_48feb4;
    }
    ctx->pc = 0x48FEACu;
    SET_GPR_U32(ctx, 31, 0x48FEB4u);
    ctx->pc = 0x48FEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FEACu;
            // 0x48feb0: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FEB4u; }
        if (ctx->pc != 0x48FEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FEB4u; }
        if (ctx->pc != 0x48FEB4u) { return; }
    }
    ctx->pc = 0x48FEB4u;
label_48feb4:
    // 0x48feb4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x48feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_48feb8:
    // 0x48feb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48feb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48febc:
    // 0x48febc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48fec0:
    // 0x48fec0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x48fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48fec4:
    // 0x48fec4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48fec8:
    // 0x48fec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48fecc:
    // 0x48fecc: 0xc04a508  jal         func_129420
label_48fed0:
    if (ctx->pc == 0x48FED0u) {
        ctx->pc = 0x48FED0u;
            // 0x48fed0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48FED4u;
        goto label_48fed4;
    }
    ctx->pc = 0x48FECCu;
    SET_GPR_U32(ctx, 31, 0x48FED4u);
    ctx->pc = 0x48FED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FECCu;
            // 0x48fed0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FED4u; }
        if (ctx->pc != 0x48FED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FED4u; }
        if (ctx->pc != 0x48FED4u) { return; }
    }
    ctx->pc = 0x48FED4u;
label_48fed4:
    // 0x48fed4: 0x10000012  b           . + 4 + (0x12 << 2)
label_48fed8:
    if (ctx->pc == 0x48FED8u) {
        ctx->pc = 0x48FED8u;
            // 0x48fed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48FEDCu;
        goto label_48fedc;
    }
    ctx->pc = 0x48FED4u;
    {
        const bool branch_taken_0x48fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FED4u;
            // 0x48fed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fed4) {
            ctx->pc = 0x48FF20u;
            goto label_48ff20;
        }
    }
    ctx->pc = 0x48FEDCu;
label_48fedc:
    // 0x48fedc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48fee0:
    // 0x48fee0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48fee4:
    // 0x48fee4: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_48fee8:
    // 0x48fee8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x48fee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48feec:
    // 0x48feec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x48feecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_48fef0:
    // 0x48fef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48fef4:
    // 0x48fef4: 0xc0fe54c  jal         func_3F9530
label_48fef8:
    if (ctx->pc == 0x48FEF8u) {
        ctx->pc = 0x48FEF8u;
            // 0x48fef8: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48FEFCu;
        goto label_48fefc;
    }
    ctx->pc = 0x48FEF4u;
    SET_GPR_U32(ctx, 31, 0x48FEFCu);
    ctx->pc = 0x48FEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FEF4u;
            // 0x48fef8: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FEFCu; }
        if (ctx->pc != 0x48FEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FEFCu; }
        if (ctx->pc != 0x48FEFCu) { return; }
    }
    ctx->pc = 0x48FEFCu;
label_48fefc:
    // 0x48fefc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x48fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_48ff00:
    // 0x48ff00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48ff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ff04:
    // 0x48ff04: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48ff08:
    // 0x48ff08: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x48ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48ff0c:
    // 0x48ff0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x48ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_48ff10:
    // 0x48ff10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48ff14:
    // 0x48ff14: 0xc04a508  jal         func_129420
label_48ff18:
    if (ctx->pc == 0x48FF18u) {
        ctx->pc = 0x48FF18u;
            // 0x48ff18: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48FF1Cu;
        goto label_48ff1c;
    }
    ctx->pc = 0x48FF14u;
    SET_GPR_U32(ctx, 31, 0x48FF1Cu);
    ctx->pc = 0x48FF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48FF14u;
            // 0x48ff18: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FF1Cu; }
        if (ctx->pc != 0x48FF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48FF1Cu; }
        if (ctx->pc != 0x48FF1Cu) { return; }
    }
    ctx->pc = 0x48FF1Cu;
label_48ff1c:
    // 0x48ff1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48ff1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ff20:
    // 0x48ff20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48ff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48ff24:
    // 0x48ff24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ff24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ff28:
    // 0x48ff28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ff28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48ff2c:
    // 0x48ff2c: 0x3e00008  jr          $ra
label_48ff30:
    if (ctx->pc == 0x48FF30u) {
        ctx->pc = 0x48FF30u;
            // 0x48ff30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48FF34u;
        goto label_48ff34;
    }
    ctx->pc = 0x48FF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48FF2Cu;
            // 0x48ff30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48FF34u;
label_48ff34:
    // 0x48ff34: 0x0  nop
    ctx->pc = 0x48ff34u;
    // NOP
label_48ff38:
    // 0x48ff38: 0x0  nop
    ctx->pc = 0x48ff38u;
    // NOP
label_48ff3c:
    // 0x48ff3c: 0x0  nop
    ctx->pc = 0x48ff3cu;
    // NOP
}
