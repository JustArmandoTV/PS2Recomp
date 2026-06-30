#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1220
// Address: 0x1a1220 - 0x1a1278
void sub_001A1220_0x1a1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1220_0x1a1220");
#endif

    switch (ctx->pc) {
        case 0x1a1220u: goto label_1a1220;
        case 0x1a1224u: goto label_1a1224;
        case 0x1a1228u: goto label_1a1228;
        case 0x1a122cu: goto label_1a122c;
        case 0x1a1230u: goto label_1a1230;
        case 0x1a1234u: goto label_1a1234;
        case 0x1a1238u: goto label_1a1238;
        case 0x1a123cu: goto label_1a123c;
        case 0x1a1240u: goto label_1a1240;
        case 0x1a1244u: goto label_1a1244;
        case 0x1a1248u: goto label_1a1248;
        case 0x1a124cu: goto label_1a124c;
        case 0x1a1250u: goto label_1a1250;
        case 0x1a1254u: goto label_1a1254;
        case 0x1a1258u: goto label_1a1258;
        case 0x1a125cu: goto label_1a125c;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a1264u: goto label_1a1264;
        case 0x1a1268u: goto label_1a1268;
        case 0x1a126cu: goto label_1a126c;
        case 0x1a1270u: goto label_1a1270;
        case 0x1a1274u: goto label_1a1274;
        default: break;
    }

    ctx->pc = 0x1a1220u;

label_1a1220:
    // 0x1a1220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1224:
    // 0x1a1224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1228:
    // 0x1a1228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a122c:
    // 0x1a122c: 0xc0685d4  jal         func_1A1750
label_1a1230:
    if (ctx->pc == 0x1A1230u) {
        ctx->pc = 0x1A1230u;
            // 0x1a1230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1234u;
        goto label_1a1234;
    }
    ctx->pc = 0x1A122Cu;
    SET_GPR_U32(ctx, 31, 0x1A1234u);
    ctx->pc = 0x1A1230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A122Cu;
            // 0x1a1230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1234u; }
        if (ctx->pc != 0x1A1234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1234u; }
        if (ctx->pc != 0x1A1234u) { return; }
    }
    ctx->pc = 0x1A1234u;
label_1a1234:
    // 0x1a1234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1238:
    // 0x1a1238: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_1a123c:
    if (ctx->pc == 0x1A123Cu) {
        ctx->pc = 0x1A123Cu;
            // 0x1a123c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1240u;
        goto label_1a1240;
    }
    ctx->pc = 0x1A1238u;
    {
        const bool branch_taken_0x1a1238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1238) {
            ctx->pc = 0x1A123Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1238u;
            // 0x1a123c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A126Cu;
            goto label_1a126c;
        }
    }
    ctx->pc = 0x1A1240u;
label_1a1240:
    // 0x1a1240: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1244:
    // 0x1a1244: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1a1248:
    if (ctx->pc == 0x1A1248u) {
        ctx->pc = 0x1A1248u;
            // 0x1a1248: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1A124Cu;
        goto label_1a124c;
    }
    ctx->pc = 0x1A1244u;
    {
        const bool branch_taken_0x1a1244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1244u;
            // 0x1a1248: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1244) {
            ctx->pc = 0x1A1268u;
            goto label_1a1268;
        }
    }
    ctx->pc = 0x1A124Cu;
label_1a124c:
    // 0x1a124c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1a1250:
    if (ctx->pc == 0x1A1250u) {
        ctx->pc = 0x1A1250u;
            // 0x1a1250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1254u;
        goto label_1a1254;
    }
    ctx->pc = 0x1A124Cu;
    {
        const bool branch_taken_0x1a124c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a124c) {
            ctx->pc = 0x1A1250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A124Cu;
            // 0x1a1250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A126Cu;
            goto label_1a126c;
        }
    }
    ctx->pc = 0x1A1254u;
label_1a1254:
    // 0x1a1254: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1a1258:
    // 0x1a1258: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a125c:
    if (ctx->pc == 0x1A125Cu) {
        ctx->pc = 0x1A125Cu;
            // 0x1a125c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1260u;
        goto label_1a1260;
    }
    ctx->pc = 0x1A1258u;
    {
        const bool branch_taken_0x1a1258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1258) {
            ctx->pc = 0x1A125Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1258u;
            // 0x1a125c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A126Cu;
            goto label_1a126c;
        }
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x40f809  jalr        $v0
label_1a1264:
    if (ctx->pc == 0x1A1264u) {
        ctx->pc = 0x1A1264u;
            // 0x1a1264: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1268u;
        goto label_1a1268;
    }
    ctx->pc = 0x1A1260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1268u);
        ctx->pc = 0x1A1264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1260u;
            // 0x1a1264: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1268u; }
            if (ctx->pc != 0x1A1268u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1268u;
label_1a1268:
    // 0x1a1268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a126c:
    // 0x1a126c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1270:
    // 0x1a1270: 0x3e00008  jr          $ra
label_1a1274:
    if (ctx->pc == 0x1A1274u) {
        ctx->pc = 0x1A1274u;
            // 0x1a1274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A1278u;
        goto label_fallthrough_0x1a1270;
    }
    ctx->pc = 0x1A1270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1270u;
            // 0x1a1274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a1270:
    ctx->pc = 0x1A1278u;
}
